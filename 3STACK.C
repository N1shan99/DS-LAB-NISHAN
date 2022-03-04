#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void search();
void display();
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
void main()
{
int opt;
do
{
printf("\nMenu");
printf("\n1.push\n2.pop\n3.search\n4.display\n5.Exit");
printf("\nSelect your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:
push();
break;case 2:
pop();
break;
case 3:
search();
break;
case 4:
display();
break;
default:
printf("Exited");
}
}while(opt!=5);
}
void push()
{
int x;
struct node *ne;
printf("Enter the Element to push:");
scanf("%d",&x);
ne=(struct node *)malloc(sizeof(struct node));
if(ne==NULL)
{
printf("Overflow");return;
}
ne->data=x;
ne->next=top;
top=ne;
}
void pop()
{
struct node *ptr;
if(top==NULL)
{
printf("\nStack is empty");
}
else
{
ptr=top;
printf("\nPoped element=%d",ptr->data);
top=top->next;
free(ptr);
}
}
void search()
{
int x,c=0;struct node *ptr;
if(top==NULL)
printf("\nStack is empty");
else
{
printf("\nEnter the element to search:");
scanf("%d",&x);
ptr=top;
while(ptr!=NULL)
{
if(ptr->data==x)
{
c=1;
printf("\nElement found");
break;
}
ptr=ptr->next;
}
}
if(c==0)
printf("\nElement not found");
}
void display()
{
struct node *ptr;
if(top==NULL)printf("Stack empty");
else
{
ptr=top;
printf("\nElements in stack:");
while(ptr!=NULL)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
}
}
}
