set -- "who"
u=$1
t=$4
set -- `echo $t | tr ":" " "`
h=$1
echo "user logged in :$h"
if [ $h -ge 4 ] && [ $h -lt 12 ]
then
 echo "good morning :$u"
 elif [ $h -ge 12 ] && [ $h -lt 16 ]
 then
 echo "good afternoon :$u"
 elif [ $h -ge 16 ] && [ $h -lt 19 ]
 then
 echo "good evening :$u"
 else
 echo "good night :$u"
 fi
