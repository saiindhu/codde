#include <stdio.h>
void main()
{
 int i,n=0,m=0;
char a[10],b[10];
scanf("%s",a);  

 scanf("%s",b);
 for(i=0;a[i]!=NULL;i++)
 {
    n++;
 }
 
for(i=0;b[i]!=NULL;i++)
{
m++;
}
if(n>m)
{
printf("%s",a);
}
else if(n<m)
 {
printf("%s",b);
 }
 else
  {
      printf("%s",a) ;
  }
  
 
 getch();
}
