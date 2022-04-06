if [ $# -eq 3 ]
then
if [ -f $1 ]
then
l=`wc -l $1`
head -n $3 $1 | tail +$2
else
echo "enter available $i is not a file"
fi
else
echo "enter the required arguments"
echo "usage filename storing in ending line"
fi
