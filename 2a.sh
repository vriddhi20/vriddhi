echo -n "enter a filename1:"
read f1
if [ -e $f1 ]
then
 set -- `ls -ld $f1`
 file1perm=$1
else
 echo "file does not exit"
 exit
fi
echo -n "enter a filename"
read f2
if [ -e $f1 ]
then
 set -- `ls -ld $f1`
 file2perm=$1
 else
echo "file does not exit"
exit
fi
if [ $file1perm = $file2perm ]
then
echo "file permissions are identical"
echo "permission is $file1perm"
else
echo "file permissions are not identical"
echo "$file1 permissions is $file1perm"
echo "$file2 permissions is $file2perm"
fi
