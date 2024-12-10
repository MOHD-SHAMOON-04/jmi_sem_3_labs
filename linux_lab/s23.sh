# ques 23
n=$#
if [ `expr $n % 2` -eq 0 ]
then
    echo "Even number of arguments"
    flag=1
    for i in $@
    do
        if [ $flag -eq 0 ]
        then
            cp $temp $i
            echo "Copied files"
            flag=1
        else
            temp=$i
            flag=0
        fi
    done
else
    echo "Odd number of arguments"
    exit 1
fi