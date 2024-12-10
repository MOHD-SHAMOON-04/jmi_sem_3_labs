# Shell script to display n lines, starting from line m from a file without using head or tail command

echo "Enter the file name"
read file
echo "Starting line number"
read m
echo "Number of lines to be displayed"
read n

temp=`expr $m + $n`
i=1
while read line
do
    if [ $i -ge $m -a $i -lt $temp ]
    then
        echo $line
    fi
    i=`expr $i + 1`
done < $file