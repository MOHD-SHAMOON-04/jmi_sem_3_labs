# Shell script to accept a number in decimal format and convert it to octal, hexadecimal, and binary

echo "Enter a number in decimal format: "
read num

echo "Octal: `echo "ibase=10; obase=8; $num" | bc`"
echo "Hexadecimal: `echo "ibase=10; obase=16; $num" | bc`"
echo "Binary: `echo "ibase=10; obase=2; $num" | bc`"