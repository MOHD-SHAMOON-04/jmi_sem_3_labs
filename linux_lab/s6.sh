# Shell script to delete all files with a .tmp extension

# taking inut dir is optional, but is a good practice
inputDir=$1
# Check if the directory exists
if [ ! -d $inputDir ]
then
    echo "Directory does not exist"
    exit 1
fi
# Change to the directory
cd $inputDir
# Delete all files with .tmp extension
for file in *.tmp
do
    rm -i $file
done