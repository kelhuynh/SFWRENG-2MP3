#include <stdio.h>

/*
Kelvin Huynh
400179088
2019-11-12
Q2: Read Data Formatting
*/
void main(){
    FILE *a = fopen("a.txt", "r");
    char ch;
    while (fscanf(a, "%c", &ch) != EOF){
        printf("%c\n", ch);
    }
    fclose(a);
}