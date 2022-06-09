#include <stdio.h>

/*
Question 3: Armstrong Number
*/

void main(){
    int num = 0, armsum = 0, digit, stored = 0;
    printf("Enter the value that you want the armstrong of: ");
    scanf("%d", &num);
    stored = num;
    for ( ;num > 0; num /= 10){
        digit = num % 10;
        armsum += (digit * digit * digit);
    }
    printf("The armstrong of %d is %d", stored, armsum);
}