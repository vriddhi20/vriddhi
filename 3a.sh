if [ -e $1 ]
then
 set -- 'ls -ld $1'
 echo "permission are : $1"
 echo "file links count is : $2"
 echo "username is : $3"
 echo "groupname is : $4"
 echo "filesize is : $5"
 echo "modification is done $6 $7 at $8"
else
 echo "file is not found"
fi
