filename=$1
if [ -f filename ]
then
 set -- 'ls -ld $filename'
 echo "creation time of $filename is $6 $7 $8"
 else
  echo "file doesnot exit"
  fi
