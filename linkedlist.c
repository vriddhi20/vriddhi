#include<stdio.h>
#include<stdlib.h>
typedef struct Node* lstptr;
struct Node
{
int data;
lstptr link;
};
lstptr first=NULL;
lstptr getnode()
{
lstptr node;
node=(lstptr)malloc(sizeof(struct Node));
return node;
}
void InsertBegin(int ele)
{
 lstptr new;
 new=getnode();
 new->data=ele;
 new->link=NULL;
 if(first!=NULL)
 new->link=first;
 first=new;
}
void InsertEnd(int ele)
{
 lstptr new,temp;
 new=getnode();
 new->data=ele;
 new->link=NULL;
 if(first!=NULL)
{
temp=first;
while(temp->link!=NULL)
temp=temp->link;
temp->link=new;
}
else
first=new;
}

void deleteBegin()
{
 lstptr temp;
 if(first==NULL)
 {
 printf("list is empty");
}
else
{
temp=first;
if(first->link==NULL)
first=NULL;
else
first=first->link;
free(temp);
}
}
void deleteEnd()
{
 lstptr temp,prev;
 if(first==NULL)
 {
 printf("list is empty");
}
else
{
temp=first;
if(first->link==NULL)
first=NULL;
else
{
prev=temp;
while(temp->link!=NULL)
{
prev=temp;
temp->link=NULL;
}
prev->link=NULL;
}
free(temp);
}
}

void display()
{
 lstptr temp;
 if(first==NULL)
 {
 printf("list is empty");
 exit(0);
 }
 temp=first;
 while(temp->link!=NULL)
 {
 printf("%d\t",temp->data);
 temp=temp->link;
 }
 printf("%d\t",temp->data);
}



void main()
{
 int ele,ch,opt=1;
while(opt)
{
 printf("1.InsertBegin\n 2.INSERT_END\n 3.DELETEBEGIN\n 4.INSERTBEGIN\n 5.INSERT_END\n 5.DELETE_SPECIFIC\n 6.DISPLAY\n");
 printf("enter your choice\n");
 scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter the element");
	scanf("%d",&ele);
        InsertBegin(ele);
	break;
case 2:printf("enter the element");
	scanf("%d",&ele);
        InsertEnd(ele);
	break;
case 3:deleteBegin();
	break;
case 6:display();
	break;
}
printf("do you want to continue(0,1)");
scanf("%d",&opt);
}
}






















