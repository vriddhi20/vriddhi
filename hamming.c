#include<stdio.h>
void main()
{
int data[10],i,c1,c2,c3,c,rec[10];
printf("enter the message");
scanf("%d%d%d%d",&data[0],&data[1],&data[2],&data[4]);
data[5]=data[0]^data[1]^data[4];
data[6]=data[4]^data[2]^data[0];
data[3]=data[2]^data[1]^data[0];
printf("encoded bits are");
for(i=0;i<7;i++)
{
printf("%d\t",data[i]);
}
printf("enter encoded bits\n");
for(i=0;i<7;i++)
{
scanf("%d",&rec[i]);
}
c1=rec[6]^rec[4]^rec[2]^rec[0];
c2=rec[5]^rec[4]^rec[1]^rec[0];
c3=rec[3]^rec[2]^rec[1]^rec[0];
c=c3*4+c2*2+c1*1;
if(c==0)
{
printf("there is no error");
}
else
printf("\n error in position %d\n",c);
if(rec[7-c]==0)
{
rec[7-c]=0;
}
printf("bits after correction");
for(i=0;i<7;i++)
{
printf("%d\t",rec[i]);
}
}




