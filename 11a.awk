BEGIN{
FS="|"
printf("SL_No\tDepartment\tBook_Sold\n")
printf("------------------------------")
}
{
arr[$1]+=$2
tot+=$2
}
END{
for(i in arr)
{
Sno++
printf("\n%d\t%-20s\t%d\n",Sno,i,arr[i])
}
printf("----------------------")
printf("\nTotal book sold:%d",tot)
}
