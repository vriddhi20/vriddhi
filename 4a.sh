for i in $*
do
if [ -f $i ]
then
echo "$i content are :"
cat $i | tr "[a-z]" "[A-Z]"
echo "-------------------"
else
echo "$i file doesnot exit"
fi
 done
