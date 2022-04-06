echo -n "enter a filename"
read filename
if [ -f $filename ]
then
	n=40
	while read line
	do
		ll=`expr length "$line"`
		if [ $ll -le $n ]
		then
			echo $line
		else
			s=1
			e=$n
			echo "`echo $line | cut -c $s-$e` \\"
			rcl=`expr $ll - $e`
			while [ $rcl -ge $n ]
			do
				s=`expr $e + 1`
				e=`expr $e + $n`
				echo "`echo $line | cut -c $s-$e` \\"
				rcl=`expr $ll - $e`
			done
			s=`expr $e + 1`
		echo $line | cut -c $s-
		fi
	done<$filename
else
	echo "$filename :no such file found"
fi





