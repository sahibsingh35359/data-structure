#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int info;
struct node*link;
}
*start=NULL,*ptr;
int i;
void create(struct node *);
void display(struct node *);
void del_beg();
void create(struct node *next)
{
char ch;
start->link=NULL;
start=next;
i=0;
printf("\nInput Choice n for break : ");
ch=getchar();
while(ch!='n')
{
next->link=(struct node*)malloc(sizeof(struct node));
printf("\nInput Node %d : ",i+1);
scanf("%d",&next->info);
next=next->link;
next->link=NULL;
fflush(stdin);
printf("\nInput Choice n for break : ");
ch=getchar();
i++;
}
printf("\nTotal nodes = %d\n",i);
}
void display(struct node *next)
{
while(next->link!=NULL)
{
printf("\n%d ",next->info);
//printf("\nAfter deletion : ");
next=next->link;
}
}
void del_beg()
{
if((start==NULL) || (i==0))
{
printf("\nUNDERFLOW");
return;
}
else
{
ptr=start;
printf("\n\nAfter deletion");
start=start->link;
free(ptr);
}
printf("\n");
display(start);
}
void main()
{
struct node *next=(struct node*)malloc(sizeof(struct node));
clrscr();
create(next);
display(start);
del_beg();
getch();
}

