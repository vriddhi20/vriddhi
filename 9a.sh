if [ $# -eq 3 ]
then
	if [ -e $1 ]
	then
		if [ $2 -gt 0 -a $3 -gt 0 ]
		then
			l=`wc -l $1 | cut -d " " -f 1`
			if [ $2 -le $l -a $3 -le $l -a $3 -ge $2 ]
			then
				head -n $3 $1 | tail -n +$2
			else
				echo $2 and $3 should be less than total line and Ending line should be greater than Starting line
			fi
		else
			echo The $2 and $3 must be greater than zero 
		fi
	else
		echo Filename: $1 does not exist
	fi
else
	echo Enter Filename, Starting and ending line numbers
fi
