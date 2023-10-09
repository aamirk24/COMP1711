cd wildcards
files=*
for filename in $files
do 
cat $filename | head -n 1 
done