#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,j,b,t=0,c=3;
clrscr();
printf("Enter the inputs:");
scanf("%s",a);
b=strlen(a);
for(i=0;i<b;i++)
{
for(j=0;j<b;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("The least number is");
for(i=0;i<b-c;i++)
{
printf("%c",a[i]);
}
getch();
}
