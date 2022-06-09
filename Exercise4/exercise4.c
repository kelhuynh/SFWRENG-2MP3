#include <stdio.h>

/*
Kelvin Huynh
huynhk12
400179088
exercise4 Answers
*/

/*
Question 1: Integer Palindrome
*/
void palindrome(){
    int num, temp, reverse = 0, digit;
    printf("Enter the integer value to check for palindrome: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }
    (reverse == num) ? printf("%d is a palindrome", num) : printf("%d is not a palindrome", num);
}


/*
Question 2: Fibonacci Sequence up to max value of 30
*/
void fibonacci(){
    int current = 0, preceding = 1, last = 0;
    do{
        (current == 0) ? printf("%d %d ", current, preceding) : printf("%d ", current);
        current = last + preceding;
        last = preceding;
        preceding = current;
    }
    while (current < 30);
}

/*
Question 3: Armstrong value
*/
void armstrong(){
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

/*
Question 4: Smiley Faces
Note: Character value of 1 is Start of Header in ASCII, not a smiley face. \u263A is a UTF-8 formatted smiley face and an alternative.
But for the purpose of this assignment, a character value of 1 is used. Additional note, \u263A works on windows if using CMD with code page 65001
*/
void smile(){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%c", 1);
        }
        printf("\n");
    }
}

void main(){
    printf("Q1 : Palindrome\n");
    palindrome();
    printf("\nQ2 : Fibonacci\n");
    fibonacci();
    printf("\nQ3 : Armstrong\n");
    armstrong();
    printf("\nQ4 : Smiley Faces\n");
    smile();
}