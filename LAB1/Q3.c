#include <stdio.h>
#include <stdlib.h>

int main()
{
int height;
printf("Enter your Height in cm: ");
scanf("%d",&height);
if(height<150){
printf("DWARF");}
else if(height==150){
printf("AVERAGE");}
else if(height>=165){
printf("TALL");}
return 0;
}
