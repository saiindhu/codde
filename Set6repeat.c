#include<stdio.h>
void main()
{
int a[10],i, k, n,c=0;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;a[i]!=NULL;i++) 
{
if(a[i]==k) 
{
c++;
}
}

printf("%d",c);
getch();
}
