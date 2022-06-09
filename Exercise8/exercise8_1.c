#include <stdio.h>

/*
Kelvin Huynh
400179088
2019-11-12
Q1: File String Concatenation
*/
void main() {
    char str1[200], str2[200], str3[200];
    FILE *f1 = fopen("f1.txt", "r");
    FILE *f2 = fopen("f2.txt", "r");
    FILE *f3 = fopen("f3.txt", "w+");

    fscanf(f1, "%[^EOF]", &str1);        // Scan file contents of f1 until EOF into str1
    fscanf(f2, "%[^EOF]", &str2);        // Scan file contents of f2 until EOF into str2
    fprintf(f3, "%s %s", str1, str2);   // Write to f3 using str1 and str2
    
    fseek(f3, 0, SEEK_SET);             // For validation purposes
    fscanf(f3, "%[^EOF]", &str3);
    printf("%s", str3);
    
    fclose(f1);
    fclose(f2);
    fclose(f3);
}