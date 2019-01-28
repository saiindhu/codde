#include <stdio.h>

void main()
{
    int i,l=0,l1=0;
    char a[20],b[20];
    scanf("%s",a);
    scanf("%s",b);
      for(i=0;a[i]!='\0';i++)
      {
          l++;
      }
      for(i=0;b[i]!='\0';i++)
      {
          l1++;
      }
      for(i=0;i<l1;i++)
      {
          
          
              a[l]=b[i];
              l++;
          
      }
      printf("%s",a);
    getch();
}
