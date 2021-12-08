#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],n,i,j,t,min,loc;
  clrscr();
  printf("\nEnter the elements : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
  min=a[i];
  loc=i;
for(j=i+1;j<n;j++)
{
if(min>a[j])
{
   min=a[j];
   loc=j;
}
}
  t=a[i];
  a[i]=a[loc];
  a[loc]=t;
}
printf("\nSorted elements of array \n");
for(i=0;i<n;i++)
{
   printf("\t%d",&a[i]);
}
getch();
}