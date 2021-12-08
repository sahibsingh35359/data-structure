#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],size,item,i,j;
  clrscr();
  printf("\nEnter maximum Number : ");
  scanf("%d",&size);
  printf("\nEnter Elements os array \n " );
  for(i=0;i<size;i++)
  scanf("%d",&a[i]);
  for(i=0;i<(size-1);i++)
  {
    for(j=0;j<(size-i-1);j++)
    {
      if(a[j+1]<a[j])
      {
	item=a[j];
	a[j]=a[j+1];
	a[j+1]=item;
      }
    }
  }
  printf("\nIn ascending order your  new array is \n");
  for(i=0;i<size;i++)
  printf("\t%d",a[i]);
  getch();
}