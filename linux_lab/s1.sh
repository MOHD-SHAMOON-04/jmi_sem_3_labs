# Shell script to add two numbers

echo "Enter two numbers"
read a b
sum=`expr $a + $b`
echo "Sum of $a and $b is $sum"