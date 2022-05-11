if [ $# -eq 1 ]
then
	if [ -d ~/mydir ]
	then
		set -- `find ~ -name "$1"`
		for i in $*
		do
			cp $i ~/mydir 2>error
		done
		if [ $# -eq 0 ]
		then
			echo No such file
		else
			cat $i
		fi
	else
		echo No such directory
	fi
else
	echo Provide argument
fi
