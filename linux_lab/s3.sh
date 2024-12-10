# Shell script to print a greeting according to system time

time=$(date +%H)

if [ $time -ge 6 -a $time -lt 12 ]
then
    echo "Good Morning!"
elif [ $time -ge 12 -a $time -lt 18 ]
then
    echo "Good Afternoon!"
elif [ $time -ge 18 -a $time -lt 22 ]
then
    echo "Good Evening!"
else
    echo "Good Night!"
fi