# script to add two real numbers
echo "Enter two real numbers"
read a b
sum=`echo $a + $b | bc`
echo "Sum of $a and $b is $sum"