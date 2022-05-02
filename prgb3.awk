BEGIN { count=0;}
{
if($1=="d")
count++
}
END{ printf("The Total no of packets drop is :%d\n\n",count); }
