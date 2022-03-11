#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
char postfix[30],result[30];
int stack[30];
int top=-1;
void push(int symbol)
{
stack[++top]=symbol;
}
int pop()
{
int symbol;
symbol=stack[top--];
return symbol;
}
int eval_post()
{
int symbol;
int i=0,op1,op2;
while((symbol=postfix[i++])!='\0')
{
if(isalnum(symbol))
{
push(symbol-'0');
}
else
{
op2=pop();
op1=pop();
switch(symbol)
{
case '+':push(op1+op2);
break;
case '-':push(op1-op2);
break;
case '*':push(op1*op2);
break;
case '/':if(op2!=0)
{
push(op1/op2);
break;
}
else
{
printf("illegal expression");
exit(0);
}
case '^':push(pow(op1,op2));
break;
}
}
}
return(pop());
}
void main()
{
int val;
printf("enter the postfix expression");
scanf("%s",postfix);
val=eval_post();
printf("\n evaluated postfix expression is : %d",val);
}

