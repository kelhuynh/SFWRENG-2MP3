#include <stdio.h>

/*
Kelvin Huynh
400179088
Question 3: Multidimensional Int Array Maximum Value
2019-10-05
*/
void main(){
    float multarray[4][5] = {{1.53, 0.49, 0.19, 0.75, 6.50},{0.17, 0.10, 0.67, 1.00, 0.98},{0.82, 0.18, 13.18, 0.59, 0.20},  {0.09, -0.04, 0.03, 0.45, 0.52}}; // Using array from question
    float max = 0;
    for (int i = 0; i < sizeof(multarray)/sizeof(multarray[0]); i++){ // i < size of array div by size of one row
        for (int j = 0; j < sizeof(multarray[0])/sizeof(multarray[0][0]); j++){ // j < size of one row div by size of one element
            if (multarray[i][j] > max) {
                max = multarray[i][j];
            }
        }
    }
    printf("Maximum is %.2f", max);
}