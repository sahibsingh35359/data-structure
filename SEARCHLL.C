#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create()
{
    struct node *head, *p;
    int n, i;
    printf("Enter Total Nodes: ");
    scanf("%d", &n);
    if (n != 0)
    {
	head = (struct node *)malloc(sizeof(struct node));
	i = 1;
	printf("Enter Element No. %d: ", i);
	scanf("%d", &(head->data));
	p = head;
	head->next = NULL;
	for (i = 2; i <= n; i++)
	{
	    p->next = (struct node *)malloc(sizeof(struct node));
	    p = p->next;
	    printf("Enter Element No. %d: ", i);
	    scanf("%d", &(p->data));
	}
	p->next = NULL;
    }
    else
    {
	head = NULL;
    }
    return (head);
}
void sorted_search(struct node *p)
{
    int x, i = 1;
    printf("Enter Value to be Searched: ");
    scanf("%d", &x);
    while (p->next != NULL && p->data < x)
    {
	i++;
	p = p->next;
    }
    if (p->data == x)
    {
	printf("Possition: %d\n", i);
    }
    else
	printf("Search Unsuccessful.");
}
void transverse(struct node *p)
{
    int i = 0;
    while (p != NULL)
    {
	printf("Element No. %d: %d\n", ++i, p->data);
	p = p->next;
    }
}
void main()
{
    struct node *start;
    start = create();
    if (start == NULL)
    {
	printf("Enter Value more than 0");
    }
    else
    {
	printf("\n\n");
	transverse(start);
	sorted_search(start);
	printf("\n\n");
    }
    getch();
}