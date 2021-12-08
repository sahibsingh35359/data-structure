#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node* create()
{
  struct node *head,*p;
  int n,i;
  printf("\nEnter total nodes : ");
  scanf("%d",&n);
  if(n!=0)
  {
    head=(struct node *)malloc(sizeof(struct node));
    i=1;
    printf("\nEnter element NO. %d : ",i);
    scanf("%d",&(head->data));
    p=head;
    head->next=NULL;
    for(i=2;i<=n;i++)
    {
      p->next=(struct node *)malloc(sizeof(struct node));
      p=p->next;
      printf("\nEnter element no. %d : ",i);
      scanf("%d",&(p->data));
    }
    p->next=NULL;
  }
    else{
      head=NULL;
    }
    return(head);
};
struct node * delete_middle(struct node *head){

struct node *p = head ;
struct node *q = head->next;
int i=0,index;
printf("\n\n\tPostion to be deleted: ");
scanf("%d", &index);
while(i<index-2)
{
p=p->next;
q=q->next;
i++;
}
p->next=q->next;
free(q);
printf("\nAfter deletion");
return head;
}
void traverse(struct node *p)
{
  int i=0;
  while(p!=NULL)
  {
    printf("\n\tElement no. %d: %d",++i,p->data);
    p=p->next;
  }
}
void main()
{
  struct node * start = create();
  clrscr();
   if(start==NULL)
  {
    printf("\nEnter value more than 0");
  }
  else
  {
    printf("\nBefore deletion ");
    traverse(start);
    start=delete_middle(start);
    traverse(start);
  }
getch();
}

