#include<stdio.h>
void main()
{
 char a[60];
 int i,c=0,co=0,z;
 clrscr();
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
 if((a[i]==' ')||(a[i]=='\0'))
 {
 c++;
 }
 }
 printf("%d",c+1);
 getch();
 }
