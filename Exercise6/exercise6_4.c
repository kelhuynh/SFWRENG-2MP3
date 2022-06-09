#include <stdio.h>

/*
Kelvin Huynh
400179088
Question 4: GCD
2019-10-29
*/

/*
Function : GCD

Finds the greatest common denominator of two given positive integers

Returns: GCD of two user-inputted integers
*/
void GCD(){
    int a = 0, b = 0;
    printf("Enter two positive integer values (Press Enter after each one):\n");
    scanf("%d %d", &a, &b);
    while (a != b) {
        if (a > b) a = a - b;
        else b = b - a;
    }
    printf("GCD is %d", a);
}

void main(){
    GCD();
}