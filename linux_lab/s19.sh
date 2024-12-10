# Shell script to generate all unique combinations of 1, 2, 3 using a for loop

for i in 1 2 3
do
    for j in 1 2 3
    do
        for k in 1 2 3
        do
            if [ $i -ne $j -a $j -ne $k -a $i -ne $k ]
            then
                echo $i $j $k
            fi
        done
    done
done