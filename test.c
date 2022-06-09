#include <stdio.h>

void main(){
    char string[50];
    int lastEnt = 0, check = 1;
    printf("Enter a string of up to 50 characters: \n");
    scanf("%s", &string);
    
    while (string[lastEnt] != '\0'){ // Check for last valid entry in the string
        lastEnt++;
    }
    lastEnt--; // Subtract 1 to disclude the terminator character

    for (int i = 0; lastEnt >= lastEnt/2; lastEnt--, i++){ // Check end to inner part of string
        if (string[i] == string[lastEnt]) continue;
        else{
            check = 0;
            break;
        }
    }
    (check) ? printf("Palindrome") : printf("Not a palindrome"); // Result
}