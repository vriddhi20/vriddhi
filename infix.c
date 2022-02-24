#include<stdio.h>
#include<type.h>
char infix[30],postfix[30];
int top=-1;
char stack[30];
void push(char ch)
{
stack[++top]=ch;
}
char pop()
{
return stack[top--];
}
int precedence(int x)
{
if(x=='(')
retun 0;
if(x=='+' || x=='-')
return 1;
if(x=='*' || x=='/')
return 2;
if(x=='^')
return 3;
return 0;
}
void infixtopostfix()
{
int i=0;k=0;
char ch;
while((ch=infix[i++}!='\o')
{
if(ch=='(')
push9ch)
elseif(i>alnum(ch))
postfix[k++]=ch;
elseif(ch=='j')
{
while(stack[top]!='(')
postfix[k++]=pop();
push(ch);
}
}
while(stack[top]!='$')
postfix[k++]=pop! 1;
postfix(k++]='\';
}
void main()
{
printf("enter infix expression");
scanf("%s",infix);
push($);
infixtopostfix();
}
