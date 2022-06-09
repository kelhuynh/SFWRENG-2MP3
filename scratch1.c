#include <stdio.h>

void digitPyram(){
    int digits = 0, row = 0;
    scanf("%d", &digits);
    while (digits > 0){
        row++;
        int i = 1;
        printf("%*s", (digits)," ");
        while (i <= row){
            printf("%d ", i);
            i++;
        }
        printf("\n");
        digits--;
    }
}

void starPyrm(){
    int spaces = 6;
    for (int i = 0; i < 4; i++){
        if (spaces != 0) printf("%*s", spaces, " ");
        spaces -= 2;
        for (int j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void main(){
    int i,j;
    i=j=3,4;
    while (++i && --j){
        printf("%d %d", i, j);
    }
}