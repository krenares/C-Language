#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a;
    int b;
    int sum1;
    int difference1;
    
    
    
    float c; 
    float d;
    float sum2;
    float difference2;
    
    
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c, &d);
    
    sum1 = a+b;
    difference1 = a-b;
    
    sum2 = c+d;
    difference2 = c-d;
     
     printf("%d %d\n", sum1, difference1);
    printf("%.1f %.1f", sum2, difference2);

    
    return 0;
}
