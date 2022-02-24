#include<stdio.h>
#include<stdlib.h>
#define MAX 2
int top=-1,stack[MAX];
void push();
void display();
void pop();

void pop()
{
if(top==-1)
{
printf("\nstack is empty");
}
else
{
printf("\ndeleted element is %d",stack[top]);
top=top-1;
}
}

void main()
{
int ch;
while(1)
{
printf("\nstack menu");
printf("\n\n1.push\n2.pop\n3.display\n4.exit");
printf("\n\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("\nwrong choice");
}
}
}

void push()
{
int val;
if(top==MAX-1)
{
printf("\nstack is full");
}
else
{
printf("\nenter element to push:");
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
printf("\n stack is empty");
}
else
{
printf("\nstack is\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}

