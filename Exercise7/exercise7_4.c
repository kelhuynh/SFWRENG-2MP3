#include <stdio.h>

/*
Kelvin Huynh
400179088
11-05-19
Q4: Fahrenheit to Celsius
*/

void main(){
    struct temperature{
        float temp;
    };
    struct temperature t = {90};
    printf("The temperature in Fahrenheit is: %.2f\n", t.temp);
    t.temp = (t.temp - 32) * (5.0/9.0);
    printf("The temperature in Celsius is: %.2f\n", t.temp);
}