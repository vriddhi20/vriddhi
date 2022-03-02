#include<stdio.h>
#include<stdlib.h>
#define maxsize 4
int stack[maxsize],i,top=-1,ele;
void push()
{
if(top==maxsize-1)
{
printf("\n Stack is full");
exit (0);
}
else
{
printf("\n Enter the element to push");
scanf("%d",&ele);
stack[++top]=ele;
}
}

int pop()
{

if(top==-1)
{
printf("\n stack is empty");
exit (0);
}
printf("\n %d is popped",stack[top]);
top--;
return ele;
}

void display()
{

if(top==-1)
{
printf("\n stack is empty\n");
}
else
{
printf("\n stack Elements are:");
for(i=0;i<=top;i++)
printf("%d",stack[i]);
}
}

void main()
{
int ch;
while(1)
{
printf("Stack operation");
printf("\n 1.PUSH \n 2.POP \n  3.DISPLAY \n 4 EXIT \n");
printf("Enter your choice");
scanf("%d",&ch);
switch(ch)
{

case 1:push(ele);	
break;
case 2:pop();
break;
case 3:display();
break;
case 4: exit (0);
default: printf("\n Invalid choice");
break;
}
}
}
