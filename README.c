# abc
#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,p,i;
clrscr();
printf("the n value is:");
scanf("%d",&n);
printf("give the pair no:");
scanf("%d",&p);
for(i=0;i<2*n;i++)
{
a=2*n-i;
if(p!=a)
{
printf("The pair is%d for the given day %d is %d\n",p);
}
}
getch();
}
