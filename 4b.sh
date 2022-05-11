if [ $# -ge 0 ]
then	
	if [ $# -eq 2 ]
	then
		chd=$2
	else
		chd=.
	fi
	file=`find ~ -iname $1`
	if [ `echo $file | wc -c` -gt 1 ]
	then 
		number=`ls -inum $file | grep -0 [0-9]`
		cd $chd
		find . -inum $number
	else
		echo No such file
	fi
else
	echo Provide filename
fi
