#include <stdio.h>

/*
Function that takes in a character input and prints the character type: alphabet, digit, or symbol to console/terminal. Converts characters to ordinals
then compares to ASCII table values
*/
void main(){
    char character;
    printf("Enter anything on the keyboard :\n");
    scanf("%c", &character);
    int ord = (int) character;
    if ((33 <= ord && ord <= 47) || (58 <= ord && ord <= 64) || (91 <= ord && ord <= 96) || (123 <= ord && ord <= 126)) {
        printf("Input is a symbol");
    }
    else if (48 <= ord && ord <= 57){
        printf("Input is a digit");
    }
    else if (65 <= ord && ord <= 90 || 97 <= ord && ord <= 122){
        printf("Input is alphabet");
    }
    else {
        printf("Input type not known");
    }
}