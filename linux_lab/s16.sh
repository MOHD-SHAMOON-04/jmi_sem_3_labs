# Shell script to accept input base, output base, and a number and convert it

echo "Enter the input base: "
read i
echo "Enter the output base: "
read o
echo "Enter the number: "
read num

echo "The number entered in ibase is: $num"
echo "The number in obase is: `echo "ibase=$i; obase=$o; $num" | bc`"