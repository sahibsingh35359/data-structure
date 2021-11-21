#include<stdio.h>
#include<conio.h>
void main()
{
int a[30],i,n;
clrscr();
printf("\nEnter the number of elements : ");
scanf("\n%d",&n);
printf("\nEnter the list of Elements");
for(i=0;i<n;i++)
{
  printf("\n\tEnter %d elements: ",i);
  scanf("\n%d",&a[i]);
}
for(i=0;i<n;i++)
{
  a[i]=a[i+1];
}
--n;
printf("\nThe Elements");
for(i=0;i<n;i++)
{
printf("\n\tElement %d : %d",i,a[i]);
}
getch();
}