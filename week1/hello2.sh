echo "How many directories?"
read num
echo "Making $num directories."
for ((i=1;i<=$num;i++))
do
mkdir dir$i
done