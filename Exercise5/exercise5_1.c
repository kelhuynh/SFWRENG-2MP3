#include <stdio.h>
#include <string.h>

/*
Kelvin Huynh
400179088
Question 1: Vowel Count
2019-10-05
*/
void main(){
    char string[50];
    char vowel[11] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0'};
    int vowelcount = 0;
    printf("Enter a string of up to 50 characters:\n");
    gets(string);
    for (int i = 0; i < strlen(string); i++){
        for (int j = 0; j < strlen(vowel); j++){
            if (string[i] == vowel[j]){
                vowelcount++;
            }
        }
    }
    printf("There are %d vowels in the string '%s'", vowelcount, string);
}