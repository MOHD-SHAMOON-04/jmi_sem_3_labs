# Shell script to change file extension from .cpp to .c
for i in $@
do
    if [ -f $i ]
    then
        mv $i ${i%.cpp}.c
        echo "file extension changed from .cpp to .c"
    else
        echo "file does not exist"
    fi
done