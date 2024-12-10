# Shell script to take an input file & delete all lines containing a given word

echo "Enter the file name: "
read file
echo "Enter the word to be deleted: "
read word

echo "The file before deleting the word is: "
cat $file

grep -v $word $file > temp && mv temp $file

echo "The file after deleting the word is: "
cat $file