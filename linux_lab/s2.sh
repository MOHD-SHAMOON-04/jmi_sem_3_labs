# Shell script to sum the digits of a number

echo "Enter a number"
read n
sum=0
while [ $n -gt 0 ]
do
    sum=`expr $sum + $n % 10`
    n=`expr $n / 10`
done
echo "Sum of digits is $sum"