cd wildcards
for filename in *
do
cat $filename | head -n 1 
done