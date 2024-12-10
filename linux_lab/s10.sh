# Shell script to print all files with given permissions

for file in *
do
    if [ -r $file ]
    then
        echo $file is readable
    fi

    if [ -w $file ]
    then
        echo $file is writable
    fi
    
    if [ -x $file ]
    then
        echo $file is executable
    fi
done