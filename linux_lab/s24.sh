# ques 24
for i in $@
do
    if [ -f $i ]
    then
        echo "file exists"
    elif [ -d mydir ]
    then
        echo "mydir already exists and has $(ls mydir | wc -l) files"
        cd mydir
        touch $i
        echo "file $i created in mydir"
        cd ..
    else
        mkdir mydir
        echo "mydir created"
        cd mydir
        touch $i
        echo "file $i created in mydir"
        cd ..
    fi
done