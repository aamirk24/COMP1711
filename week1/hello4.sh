#!
echo "How many lines from the middle do you want?"
read line
echo $line
x= cat amysrecords.csv | wc -l
echo $x
let "z = $(( x / 2 ))"
echo $z