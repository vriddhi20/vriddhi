for i in `ls`
do
f1=`expr length $i`
if [ $f1 -ge 10 ]
then
 echo $i
fi
done
