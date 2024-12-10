# ques 22
for i in $@
do
    grep "linux" $i > file1
    if [ $? -eq 0 ]
    then
        echo "$i contains linux"
        break
    fi
done