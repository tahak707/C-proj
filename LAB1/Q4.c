#include <stdio.h>
#include <stdlib.h>

int decTobin(int dec){
if(dec>1){
    decTobin(dec/2);}
printf("%d",dec%2);
}
int main(){
int dec;
printf("Enter your decimal number: ");
scanf("%d",&dec);
if (dec < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
printf("Binary representation: ");
if (dec == 0) {
    printf("0"); // Special case for decimal 0
} else {
decTobin(dec);
    }
printf("\n");
return 0;

}
