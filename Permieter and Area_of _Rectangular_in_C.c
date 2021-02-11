#include <stdio.h>

int main()
 {
   int length;
   int width;
   int area;
   int perimeter;

   printf("\nEnter the width: "); 
    scanf("%d", &width);
    printf("\nEnter the length: ");
    scanf("%d", &length);

   perimeter = 2*(width+length);
   area=length*width;

   printf("\nPerimeter = %d\n", perimeter);
   printf("\nArea = %d\n", area);
return 0;
}
