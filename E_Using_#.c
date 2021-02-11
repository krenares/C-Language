#include <stdio.h>
int main()
{
int height, width;
printf("\nEnter Height : ");
scanf("%d",&height);
printf("\nEnter Width : ");
scanf("%d",&width);
if(height % 2 == 0)
height += 1;
printf("\n");
for(int i=0; i<height; i++)
{if(i == 0 || i == height/2 || i == height-1)
{for(int j=1; j<=width; j++)
{printf("#");
}printf("\n");
}else
{printf("#\n");}}
return 0;
}
