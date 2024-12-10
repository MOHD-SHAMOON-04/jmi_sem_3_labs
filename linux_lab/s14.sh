# Shell script to input two files and copy one to another
echo "Enter the source file"
read src
echo "Enter the destination file"
read dest

if [ ! -f $src ]
then
    echo "Source file does not exist"
    exit
fi

if [ -r $src ]
then
    if [ -w $dest ]
    then
        cp $src $dest
        echo "File copied successfully"
    else
        echo "Destination file does not have write permission"
    fi
else
    echo "Source file does not have read permission"
fi