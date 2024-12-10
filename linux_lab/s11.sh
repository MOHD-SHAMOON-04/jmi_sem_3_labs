# Shell script to implement a menu-driven program to do
# [1. sum of digits, 2. multiplication, 3. factorial, 4. exit]

while [ 1 ]
do
    echo "1. Sum of digits"
    echo "2. Multiplication"
    echo "3. Factorial"
    echo "4. Exit"
    echo "Enter your choice: "
    read ch

    case $ch in
        1) 
            echo "Enter a number: "
            read n
            sum=0
            while [ $n -gt 0 ]
            do
                rem=`expr $n % 10`
                sum=`expr $sum + $rem`
                n=`expr $n / 10`
            done
            echo "Sum of digits: $sum"
            ;;
        2) echo "Enter two numbers: "
            read a b
            mul=`expr $a \* $b`
            echo "Multiplication: $mul"
            ;;
        3) echo "Enter a number: "
            read n
            fact=1
            while [ $n -gt 0 ]
            do
                fact=`expr $fact \* $n`
                n=`expr $n - 1`
            done
            echo "Factorial: $fact"
            ;;
        4) exit
            ;;
        *) echo "Invalid choice"
            ;;
    esac
done