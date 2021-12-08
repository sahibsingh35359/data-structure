#include<stdio.h>
#include<conio.h>
void main()
{
int a[30],i,n,index;
 clrscr();
  printf("\nEnter number of elements : ");
  scanf("%d",&n);
  printf("\nEnter the list of elements");
  for(i=0;i<n;i++)
  {
    printf("\n\tEnter %d Elements : ",i);
    scanf("\n%d",&a[i]);
  }
  --n;
  printf("\nThe Elements");
  for(i=0;i<n;i++)
  {
    printf("\n\tElement %d : %d",i,a[i]);
  }
  getch();
}