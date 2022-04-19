#include<stdio.h>
#include<stdlib.h>
typedef struct node* lstptr;
struct node
{
int data;
lstptr link;
};
lstptr first=NULL;
lstptr getnode()
{
lstptr ptr;
ptr=(lstptr) malloc(sizeof(struct node));
}

void InsertBegin(int ele)
{
lstptr new;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!=NULL)
{
new->link=first;
}
first=new;
}

void InsertEnd(int ele)
{
lstptr new,temp;
new=getnode();
new->data=ele;
new->link=NULL;
if(first==NULL)
{
new->link=first;
first=new;
}
else
{
temp=first;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=new;
}
}

void deleteBegin()
{
lstptr temp;
if(first==NULL)
{
printf("\nlist is empty");
exit(0);
}
temp=first;
first=first->link;
free(temp);
}

void DeleteEnd()
{
lstptr temp,prev;
if(first==NULL)
{
printf("\nlist is empty");
exit(0);
}
temp=first;
if(first->link==NULL)
{
first=NULL;
free(temp);
}
else
{
prev=first;
while(temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}
prev->link=NULL;
free(temp);
}
}

void DeleteSpecific(int ele)
{
lstptr temp,prev;
temp=first;
if(first==NULL)
{
printf("\nEmpty list\n");
}
else if(first->data==ele)
{
if(first->link!=NULL)
first=first->link;
else
first=NULL;
}
else
{
while(temp->data!=ele && temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}
if(temp->link==NULL && temp->data!=ele)
{
printf("\nspecific element not found\n");
return;
}
else if(temp->link!=NULL)
prev->link=temp->link;
else 
prev->link=NULL;
}
free(temp);
}

void display()
{
lstptr temp;
temp=first;
if(first==NULL)
{
printf("\nList is empty");
exit(0);
}
while(temp->link!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
printf("%d\t",temp->data);
}

void main()
{
int op=1,ch,ele;
while(op)
{
printf("\n1.Insert Begin \n2.Insert End \n3.Delete Begin \n4.Delete End \n5.delete specific \n6.Display");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the element:");
scanf("%d",&ele);
insertBegin(ele);
break;

case 2:printf("Enter the element:");
scanf("%d",&ele);
insertEnd(ele);
break;
case 3:deleteBegin();
break;
case 4:deleteEnd();
break;
case 5:if(first==NULL)
{
printf("\nlist is empty");
break;
}
printf("Enter the element to delete:");
scanf("%d",&ele);
deleteSpecific(ele);
break;	
case 6:display();
break;
}
printf("\nDo you want to continue?(0/1):");
scanf("%d",&op);
}
}





