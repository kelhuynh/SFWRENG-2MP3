#include <stdio.h>

/*
Bonus part A
*/
void main(){
    int chain = 1, current, temp, loop;
    FILE* in = fopen("inputFile.txt", "r");
    FILE* out = fopen("outputFile.txt", "w");
    fscanf(in, "%d", &loop);
    fscanf(in, "%d", &temp);
    if (temp == 1) {
        fprintf(out, "%d ", 0);
    }
    for (int i = 0; i < loop - 1; i++) {
        fscanf(in, "%d", &current);
        if ((char) temp == (char) current) {
            chain++;
        }
        else {
            fprintf(out, "%d ", chain);
            chain = 1;
            temp = current;
        }
    }
    fprintf(out, "%d ", chain);
    fclose(in);
    fclose(out);
}