#include <stdio.h>

/*
Kelvin Huynh
400179088
11-05-19
Q3: Complex Number Addition and Subtraction
*/

struct complex{
    int real, img;
} *ptr, n[2];

/*
Function: add

Prints the sum of two complex numbers

*ptr: pointer referencing an array structure of complex numbers
*/
void add(struct complex *ptr){

    printf("Addition of two complex no. is: %d + i%d", (*ptr).real + (*(ptr+1)).real, (*ptr).img + (*(ptr+1)).img);
}

/*Function: add

Prints the difference of two complex numbers

*ptr: pointer referencing an array structure of complex numbers
*/
void sub(struct complex *ptr){
    printf("Subtraction of two complex no. is: %d + i%d", (*ptr).real - (*(ptr+1)).real, (*ptr).img - (*(ptr+1)).img);
}

void main(){

    ptr = n; // Set pointer to memory location of n
    
    for (int i = 0; i < 2; i++){
        printf("\nEnter %d real no.: ", i+1);
        scanf("%d", &ptr->real);
        printf("\nEnter %d imaginary no.: ", i+1);
        scanf("%d", &ptr->img);
        ptr++;
    }

    ptr = n; // Reset pointer position in memory

    add(ptr);
    printf("\n");
    sub(ptr);
}