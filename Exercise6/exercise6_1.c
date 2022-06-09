#include <stdio.h>

/*
Kelvin Huynh
400179088
Question 1: Recursive String Reversal
2019-10-29
*/

/*
Function: reverse()

Recursively calls itself until next character entered is a new line. 
Any other character entered will add to a buffer then print starting from the last reverse() call
that satisfied the requirement where the character is not a new line

Returns: reverse of string entered in the input stream
*/
void reverse() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverse();
        printf("%c", c);
    }
}

void main() {
    printf("Please enter a sentence that you want reversed:\n");
    reverse();
}