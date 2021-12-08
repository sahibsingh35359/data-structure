#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* create(){
    struct node *head,*p;
    int n,i;
    printf("\nEnter Total Nodes: ");
    scanf("%d",&n);
    if(n!=0)
    {
	head=(struct node *)malloc(sizeof(struct node));
    i=1;
    printf("\nEnter Element No. %d: ",i);
    scanf("%d",&(head->data));
    p=head;
    head->next=NULL;
    for(i=2;i<=n;i++){
	p->next=(struct node *)malloc(sizeof(struct node));
	p=p->next;
	printf("\nEnter Element No. %d: ",i);
	scanf("%d",&(p->data));
    }
    p->next=NULL;
    }
    else{
	head=NULL;
    }
    return (head);
}
void transverse(struct node *p){
    int i=0;
    while(p!=NULL){
	printf("\n\tElement No. %d: %d\n",++i,p->data);
	p=p->next;
    }
}
void insertion_end(struct node *head){
     struct node *p;
     p=(struct node *)malloc(sizeof(struct node));
     printf("\nValue to be Entered: ");
     scanf("%d",&(p->data));
     while(head->next!=NULL){
	 head=head->next;
     }
     head->next=p;
     p->next=NULL;
 }
void main()
{
    struct node *start;
    clrscr();
    start=create();
    if(start==NULL){
	printf("\nEnter Value more than 0");
}
    else
    {
	transverse(start);
	insertion_end(start);
	transverse(start);
    }
    getch();
}
