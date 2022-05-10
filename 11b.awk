BEGIN{
FS="|"
printf("Slno\tempid\tEmp_Name\tDesignation\tSalary\tDA\tHRA\tGROSS\n")
printf("--------------------------------------------------------------------------------")
}
{
slno++
if($5<10000)
{
DA=0.45*$5
HRA=0.15*$5
}
else
{
DA=0.5*$5
HRA=0.2*$5
}
GROSS=$5+DA+HRA
printf("\n%d\t%d\t%-20s\t%-20s\t%d\t%d\t%d\t%d",slno,$1,$2,$3,$4,$DA,$HRA,$GROSS)
TBS+=$5
TDA+=DA
THRA+=HRA
TGS+=GROSS
}
END{

printf("\nTotal DA:%d\nTotal HRA:%d\nTotal Gross:%d",$TDA,$THRA,$TGS)
}
