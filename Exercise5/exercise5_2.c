#include <stdio.h>
#include <string.h>

/*
Kelvin Huynh
400179088
Question 2: String Palindrome
2019-10-05

Note: strcmpi is case-insensitive. If case-sensitivity is desired, strcmp should be used in its place.
*/
void main(){
    char string[50], reverse[50];
    printf("Enter a string of up to 50 characters:\n");
    gets(string);
    strcpy(reverse, string);
    strrev(reverse);
    (strcmpi(string, reverse)) ? printf("'%s' is not a palindrome", string) : printf("'%s' is a palindrome", string); //Note : strcmpi returns 0 if strings are equal
}