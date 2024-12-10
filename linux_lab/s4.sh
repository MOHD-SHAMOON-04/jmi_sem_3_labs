# Shell script to take a number as decimal input and print it in binary

echo "Enter a decimal number: "
read num
bin=`echo "ibase=10; obase=2; $num" | bc`
echo "Binary equivalent of $num is: $bin"