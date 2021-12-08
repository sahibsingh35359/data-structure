#include<stdio.h>
#include<conio.h>
void main()
{
int disp[2][3];
int i,j;
clrscr();
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("\nEnter the value for display[%d][%d] : ",i,j);
scanf("%d",&disp[i][j]);
}
}
printf("\n******************************************\n");
printf("\nTwo dimensional array elements :- \n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("\n******************************************\n");
printf("\n%d",disp[i][j]);
if(j==2)
{
printf("\n");
}
}
getch();
}
}
