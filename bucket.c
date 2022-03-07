#include<stdio.h>
void main()
{
 int incoming,outgoing,buff_size,n,store=0;
 printf("enter no. of packets");
 scanf("%d",&n);
 printf("enter buffer size and outgoing value\n");
 scanf("%d%d",&buff_size,&outgoing);
 while(n!=0)
 {
 printf("enter the incoming packets\n");
 scanf("%d",&incoming);
   if(incoming<=(buff_size-store))
    {
  store+=incoming;
  printf("store value %d & incoming value %d",store,incoming);
    }
else
 {
	printf("dropped packets are %d\n",incoming-(buff_size-store));
	store=buff_size;
	printf("after bucket drop are.. ");
	}
store=store-outgoing;
n--;
}
}


