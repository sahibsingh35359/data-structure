#include<stdio.h>
#include<conio.h>
void main()
{
int a[30],i,n,index;
clrscr();
printf("\nEnter the number of elements : ");
scanf("%d",&n);
printf("\nEnter the list elements");
for(i=0;i<n;i++)
{
   printf("\n\tEnter %d element : ",i);
   scanf("\n%d",&a[i]);
}
printf("\nEnter the position where the node to be deleted: ");
scanf("%d",&index);
for(i=index;i<n;i++)
{
a[i]=a[i+1];
}
--n;
printf("\nThe Elements");
for(i=0;i<n;i++)
{
  printf("\n\tElements %d : %d",i,a[i]);
}
getch();
}
