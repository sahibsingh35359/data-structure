#include<stdio.h>
#include<conio.h>
#include<alloc.h>
int item;
struct node
{
int info;
struct node *link;
}*start=NULL;
int i;
void create(struct node *);
void display(struct node *);
void insrbeg(int item);
void create(struct node *next)
{
char ch;
start->link=NULL;/*empty list*/
start=next;/*point to start of list*/
i=0;
printf("\nInput choice n for break = ");
ch=getchar();
while(ch!='n')
{
next->link=(struct node*)malloc(sizeof(struct node));
printf("\nInput node %d = ",i+1);
scanf("%d",&next->info);
next=next->link;
next->link=NULL;
fflush(stdin);
printf("\n INput choice n for break = ");
ch=getchar();
i++;
}
printf("\ntotal nodes = %d ",i);
}
void display(struct node *next)
{
//next=start;
while(next->link!=NULL)
{
//printf("Node found at location %u",next);
printf("\n%d",next->info);
next=next->link;
}
}
void insrbeg(int item)
{
struct node *new1;
new1=(struct node *)malloc(sizeof(struct node));
if(new1==NULL)
{
printf("\nOVERFLOW");
return;
}
new1->link=NULL;
new1->info=item;
if(start==NULL)
{
start=new1;
}else
{
new1->link=start;
start=new1;
printf("\n%u",new1->link);
display(start);
}
}
void main()
{
struct node *next=(struct node *)malloc(sizeof(struct node));
clrscr();
create(next);
display(start);
printf("\nEnter Item = ");
scanf("%d",&item);
insrbeg(item);
//display(next);
getch();
}