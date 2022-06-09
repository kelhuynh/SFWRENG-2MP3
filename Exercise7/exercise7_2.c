#include <stdio.h>

/*
Kelvin Huynh
400179088
11-05-19
Q2: Date Comparison
*/

void main(){
    struct Date{
        int month, day, year;
    } d[2];
    for (int i = 0; i < 2; i++){
        printf("\nEnter a date in numerical format (space separated) in the order of month, day, year:\n");
        scanf("%d %d %d", &d[i].month, &d[i].day, &d[i].year);
    }
    (d[0].month == d[1].month && d[0].day == d[1].day && d[0].year == d[1].year) ? printf("Dates are equal") : printf("Dates are not equal");
}