<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
//Q1
//USING FOR LOOP
/*
int main(){
int n;
printf("Enter the nth odd natural number: ");
scanf("%d",&n);
int sum = 0;
int a = 1;
for(int i=1;i<=n;i++){
    printf("%d ",a);
    sum += a;
    a+=2;

}
printf("\nThe sum of the first %d odd numbers is:",n);
printf("%d",sum);
return 0;

}

//USING WHILE LOOP

int main(){
int n;
printf("Enter the nth odd natural number: ");
scanf("%d",&n);
int sum = 0;
int a = 1;
int i = 1;
while(i<=n){
    printf("%d ",a);
    sum += a;
    a+=2;
    i++;

}
printf("\nThe sum of the first %d odd numbers is:",n);
printf("%d",sum);
return 0;

}
/*
//USING DO-WHILE LOOP
int main(){
int n;
printf("Enter the nth odd natural number: ");
scanf("%d",&n);
int sum = 0;
int a = 1;
int i = 1;
    do{printf("%d ",a);
    sum += a;
    a+=2;
    i++;}
while(i<=n);

printf("\nThe sum of the first %d odd numbers is:",n);
printf("%d",sum);
return 0;

}

//--------------------------------------------------------

//Q2
int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            if (j % 2 == 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

//---------------------------------------------------------------
//Q3

int compareSTR(const char *here,const char *there){
for(int i=0;here[i] != '\0' || there[i] != '\0';i++){
    if (here[i] != there[i]) {
            return 0; // The strings are different
        }}

    return 1; // The strings are equal
}
void main(){
char there[] = "too far";
char here[] = "too close";
if (compareSTR(here,there)){
    printf("The strings are equal");
}
else{printf("The strings are different");}
}

//----------------------------------------------------------------

//Q4

void replaceLetters(char *str1){
for(int i = 0;str1[i] != '\0';i++){
    if(str1[i] >= 'a' && str1[i] <= 'z'){
        str1[i]=str1[i] - 32;}

    else if(str1[i] >= 'A' && str1[i] <= 'Z'){
        str1[i]=str1[i] + 32;}

    else{continue;}
    }
    printf("Replaced string: %s\n",str1);
}
 void main(){
 char str1[] = "ThiS iS coMPletE ChAoS";
 printf("Original string: %s\n",str1);
 replaceLetters(str1);

 }

//----------------------------------------------------------------
//Q.5

void UniqueElements(int arr[], int size) {
    printf("Unique elements in the array: ");
    for (int i = 0; i < size; i++) {
        int isUnique = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int digits[] = {5, 7, 5, 3, 6, 0, 8, 4, 9, 10, 10, 4};
    int size = sizeof(digits) / sizeof(digits[0]);

    UniqueElements(digits, size);

    return 0;
}
*/
//--------------------------------------------------------------
//Q.6

// Define a structure for distance in inch-feet system
struct Distance {
    int feet;
    float inches;
};

// Function to add two distances
struct Distance addDist(struct Distance dist1, struct Distance dist2) {
    struct Distance result;
    result.feet = dist1.feet + dist2.feet;
    result.inches = dist1.inches + dist2.inches;

    if (result.inches >= 12.0) {
        result.inches -= 12.0;
        result.feet++;}

    return result;
}

int main() {
    struct Distance dist1, dist2, sum;

    printf("Enter the first distance in feet and inches:\n");
    scanf("%d %f", &dist1.feet, &dist1.inches);

    printf("Enter the second distance in feet and inches:\n");
    scanf("%d %f", &dist2.feet, &dist2.inches);

    sum = addDist(dist1, dist2);

    printf("Sum of distances: %d feet %.2f inches\n", sum.feet, sum.inches);

    return 0;
}





























































































































=======
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
//Q1
//USING FOR LOOP

int main(){
int n;
printf("Enter the nth odd natural number: ");
scanf("%d",&n);
int sum = 0;
int a = 1;
for(int i=1;i<=n;i++){
    printf("%d ",a);
    sum += a;
    a+=2;

}
printf("\nThe sum of the first %d odd numbers is:",n);
printf("%d",sum);
return 0;

}
//USING WHILE LOOP

int main(){
int n;
printf("Enter the nth odd natural number: ");
scanf("%d",&n);
int sum = 0;
int a = 1;
int i = 1;
while(i<=n){
    printf("%d ",a);
    sum += a;
    a+=2;
    i++;

}
printf("\nThe sum of the first %d odd numbers is:",n);
printf("%d",sum);
return 0;

}
//USING DO-WHILE LOOP
int main(){
int n;
printf("Enter the nth odd natural number: ");
scanf("%d",&n);
int sum = 0;
int a = 1;
int i = 1;
    do{printf("%d ",a);
    sum += a;
    a+=2;
    i++;}
while(i<=n);

printf("\nThe sum of the first %d odd numbers is:",n);
printf("%d",sum);
return 0;

}

//--------------------------------------------------------

//Q2
int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            if (j % 2 == 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

//---------------------------------------------------------------
//Q3

int compareSTR(const char *here,const char *there){
for(int i=0;here[i] != '\0' || there[i] != '\0';i++){
    if (here[i] != there[i]) {
            return 0; // The strings are different
        }}

    return 1; // The strings are equal
}
void main(){
char there[] = "too far";
char here[] = "too close";
if (compareSTR(here,there)){
    printf("The strings are equal");
}
else{printf("The strings are different");}
}

//----------------------------------------------------------------

//Q4

void replaceLetters(char *str1){
for(int i = 0;str1[i] != '\0';i++){
    if(str1[i] >= 'a' && str1[i] <= 'z'){
        str1[i]=str1[i] - 32;}

    else if(str1[i] >= 'A' && str1[i] <= 'Z'){
        str1[i]=str1[i] + 32;}

    else{continue;}
    }
    printf("Replaced string: %s\n",str1);
}
 void main(){
 char str1[] = "ThiS iS coMPletE ChAoS";
 printf("Original string: %s\n",str1);
 replaceLetters(str1);

 }

//----------------------------------------------------------------
//Q.5

void UniqueElements(int arr[], int size) {
    printf("Unique elements in the array: ");
    for (int i = 0; i < size; i++) {
        int isUnique = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int digits[] = {5, 7, 5, 3, 6, 0, 8, 4, 9, 10, 10, 4};
    int size = sizeof(digits) / sizeof(digits[0]);

    UniqueElements(digits, size);

    return 0;
}

//--------------------------------------------------------------
//Q.6

// Define a structure for distance in inch-feet system
struct Distance {
    int feet;
    float inches;
};

// Function to add two distances
struct Distance addDist(struct Distance dist1, struct Distance dist2) {
    struct Distance result;
    result.feet = dist1.feet + dist2.feet;
    result.inches = dist1.inches + dist2.inches;

    if (result.inches >= 12.0) {
        result.inches -= 12.0;
        result.feet++;}

    return result;
}

int main() {
    struct Distance dist1, dist2, sum;

    printf("Enter the first distance in feet and inches:\n");
    scanf("%d %f", &dist1.feet, &dist1.inches);

    printf("Enter the second distance in feet and inches:\n");
    scanf("%d %f", &dist2.feet, &dist2.inches);

    sum = addDist(dist1, dist2);

    printf("Sum of distances: %d feet %.2f inches\n", sum.feet, sum.inches);

    return 0;
}































































































































>>>>>>> 3711755044a4214851454d5306f85c4daf4f69d4
