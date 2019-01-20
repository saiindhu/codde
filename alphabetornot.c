#include <stdio.h>

void main()
{
 char ch;
 scanf("%c",&ch);
 if((ch>=65 && ch<=91) || (ch>=97 && ch<=122))
 {
     printf("Alphabet");
 }
 else
 {
     printf("No");
 }
 getch();
}
