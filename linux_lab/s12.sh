# Shell script to print all the prime numbers between n and m

echo "Enter the lower range"
read n
echo "Enter the upper range"
read m
echo "The prime numbers between $n and $m are:"
while [ $n -le $m ]
do
    i=2
    flag=0
    while [ $i -le `expr $n / 2` ]
    do
        if [ `expr $n % $i` -eq 0 ]
        then
            flag=1
            break
        fi
        i=`expr $i + 1`
    done
    if [ $flag -eq 0 ]
    then
        echo $n
    fi
    n=`expr $n + 1`
done