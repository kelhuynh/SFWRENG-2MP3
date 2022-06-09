#include <stdio.h>

/*
Question 4: Smiley Faces
Note: Character value of 1 is Start of Header in ASCII, not a smiley face. \u263A is a UTF-8 formatted smiley face and an alternative.
But for the purpose of this assignment, a character value of 1 is used. Additional note, \u263A works on windows if using CMD with code page 65001
*/

void main(){
        for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%c", 1);
        }
        printf("\n");
    }
}