date=`date +%d`
date=`expr + 0`
l=`cal | tr -d "[\137][\010]" | grep -wn "$d" | head -c 1`
if [ $d -gt 9 ]
then
	cal | tr -d "[/137][\010]" | sed "$l s/$d/**/"
else
	cal | tr -d "[/137][\010]" | sed "$l s/$d/*/"
fi
