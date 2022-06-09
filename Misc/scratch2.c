#include <stdio.h>

/*
Bonus part B
*/
void main(){
    FILE* in = fopen("inputFile2.txt", "r");
    FILE* out = fopen("outputFile2.txt", "w");
    int loop, num, total = 0;
    fpos_t position;
    fscanf(in, "%d", &loop);
    fgetpos(in, &position);
    while (fscanf(in, "%d", &num) != EOF) {
        total += num;
    }
    fprintf(out, "%d ", total);
    fsetpos(in, &position);
    for (int i = 1; i <= loop; i++) {
        fscanf(in, "%d", &num);
        for (int j = 0; j < num; j++){
            if (i%2 == 0) {
                fprintf(out, "%d ", 1);
            }
            else {
                fprintf(out, "%d ", 0);
            }
        }
    }
    fclose(in);
    fclose(out);
}