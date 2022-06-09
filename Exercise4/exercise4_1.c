#include <stdio.h>

/*
Question 1 : Palindrome Integer
*/

void main(){
    int num, temp, reverse = 0, digit;
    printf("Enter the integer value to check for palindrome: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }
    (reverse == num) ? printf("%d is a palindrome integer", num) : printf("%d is not a palindrome integer", num);
}