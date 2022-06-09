#include <stdio.h>

/*
Kelvin Huynh
400179088
2019-11-12
Q3: Code File Read/Display
*/
void main(){
    FILE *file1 = fopen("file1.c", "r");
    char c;
    while (fscanf(file1, "%c", &c) != EOF) {
        printf("%c", c);
    }
    fclose(file1);
}