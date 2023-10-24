#include <stdio.h>
#include <stdlib.h>
int main()
{
    int height;
    int width;
    printf("Enter height of rectangle:");
    scanf("%d",&height);
    printf("Enter width of rectangle:");
    scanf("%d",&width);
    printf("The area of the rectangle is:%d",height*width);
    printf("\nThe perimeter of the rectangle is:%d",(2*height)+(2*width));
return 0;
}

