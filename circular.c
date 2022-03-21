#include<stdio.h>
#include<stdlib.h>
#define max 3
int q[max];
int rear=-1;
int front=-1;
int i;
void display()
{
if(front==-1)
{
printf("queue is empty");
exit(0);
}
printf("queue elements are:");
if(front<=rear)
{
for(i=front;i<=rear;i++)
printf("%d\t",q[i]);
}
else
{
for(i=front;i<max;i++)
printf("%d\t",q[i]);
for(i=0;i<rear;i++)
printf("%d\t",q[i]);
}
}
void enqueue(int ele)
{
rear=(rear+1)%max;
if(rear==front)
{
printf("\nqueue is full");
exit(0);
}
q[rear]=ele;
if(front==-1)
front=0;
}
void dequeue()
{
int ele;
if(front==-1)
{
printf("queue is empty");
exit(0);
}
ele=q[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=(front+1)%max;
}
}
void main()
{
int ch,op=1,ele;
while(op)
{
printf("\n1.INSERT\n2.DELETE\n3.DISPLAY");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("enter the element:");
scanf("%d",&ele);
enqueue(ele);
break;
case 2: dequeue();
break;
case 3: display();
break;
case 4:exit(0);
default:
printf("\n invalid choice");
break;
}
printf("\ndo you want to continue(0/1):");
scanf("%d",&op);
}
}
