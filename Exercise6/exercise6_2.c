#include <stdio.h>
#include <math.h>

/*
Kelvin Huynh
400179088
Question 2: Binary to Decimal Converter
2019-10-29
*/

/*
Function: binary

Converts binary numbers to the equivalent decimal counterpart

num: binary number to be converted

Returns: decimal equivalent of num
*/
long long binary(long long num){
    long long sum = 0;
    for (int i = 0; num > 0; num /= 10){
        if ((num % 10) == 1) sum += pow(2, i);
        i++;
    }
    return sum;
}

void main(){
    long long num = 0;
    printf("Enter a binary number:\n");
    scanf("%lld", &num);
    printf("%lld", binary(num));
}