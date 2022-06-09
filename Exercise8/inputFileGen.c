#include <stdio.h>


/*
File meant to pre-generate the file names used in code into CWD
*/
void main(){
    FILE *a = fopen("a.txt", "w");
    fprintf(a, "PROGRAMMING");
    fclose(a);

    FILE *f1 = fopen("f1.txt", "w");
    fprintf(f1, "I am a student.");
    fclose(f1);

    FILE *f2 = fopen("f2.txt", "w");
    fprintf(f2, "I am 19 years old.");
    fclose(f2);

    FILE *file1 = fopen("file1.c", "w");
    fprintf(file1, "#include <stdio.h>\n\nvoid main(){\n\tprintf(\"Hello World\");\n}");
    fclose(file1);
}