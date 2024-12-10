# Shell script to check login every minute & print a login message

# ordinary way to take input
# echo "Enter the username: "
# read username

# Command line argument for username
username=$1
i=0
while [ $i -lt 5 ]
do
    i=`expr $i + 1`
    who | grep $username
    if [ $? -eq 0 ]
    then
        echo "User $username has logged in"
        exit
    else
        echo "User $username has not logged in"
    fi
    sleep 60
done