#include<stdio.h>
#include<stdlib.h>
#define MAX3
int top=-1,stack[max];
void push();
void display();
void pop();
void pop()
{
if(top==-1)
{
printf(\n stack is empty");
}
else
{
printf("\n deleted element is %d",stack[top]);
top=top-1;
}
}
void main()
{
int ch;
while(1)
{
printf("\nstack menu");
printf("\n1.push 2.pop\n 3.display\n 4.exit\n");
printf("enter your choice");
switch(ch)
{
case 1: push
	break;
case 2: pop();
        break;       
case 3: display();
	break;
case 4: exit(0);
default :printf("\wrong choice");
}
}
}
void push
{
int val;
if(top==MAX-1)
{
printf("\n stack is full");
}
else
{
printf("\n enter element to push");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
void display()
{
int i;
if(top==-1)
{
printf("\nstack is empty");
}
else
{
printf("\n stack is\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}       
