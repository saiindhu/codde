#include <stdio.h>

int main(void) 
{
int hr1,hr2,min1,min2,hr3,min3;
scanf("%d %d\n",&hr1,&min1);
scanf("%d %d",&hr2,&min2);
hr3=abs(hr1-hr2);
min3=abs(min1-min2);
printf("%d %d",hr3,min3);
	return 0;
}
