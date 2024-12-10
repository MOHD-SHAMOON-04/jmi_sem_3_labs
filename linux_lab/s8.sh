# Shell script to check for a leap year

echo "Enter year (YYYY): "
read year
# or
# year=`date +"%Y"` # to get current year

if [ `expr $year % 4` -eq 0 ] && [ `expr $year % 100` -ne 0 ] || [ `expr $year % 400` -eq 0 ]
then
    echo "$year is a leap year"
else
    echo "$year is not a leap year"
fi