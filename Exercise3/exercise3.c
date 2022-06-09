#include <stdio.h>

/*
Function that does basic arithmetic operations given 2 values of int, float, or double. The result is outputted to console/terminal
*/
void calculator(){
    char op;
    double num1, num2;
    printf("Enter the two numbers :\n");
    scanf("%lf %lf", &num1, &num2);
    printf("Enter the operation to be performed, (+, -, *, /) :");
    scanf(" %c", &op);
    
    switch(op){
        case '+':
            printf("%f + %f = %f", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%f - %f = %f", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%f * %f = %f", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%f / %f = %f", num1, num2, num1 / num2);
            break;
        default:
            printf("Operation not valid");
    }
}

/*
Function that takes 5 numerical value inputs (int, float, double) and prints the minimum of the 5 to console/terminal
*/
void minimum(){
    double min, a, b, c, d, e;
    printf("Enter 5 numbers :\n");
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
    if (a < b && a < c && a < d && a < e){
        min = a;
    }
    else {
        if (b < a && b < c && b < d && b < e){
            min = b;
        }
        else {
            if (c < a && c < b && c < d && c < e) {
                min = c;
            }
            else {
                if (d < a && d < b && d < c && d < e) {
                    min = d;
                }
                else {
                    min = e;
                }
            }
        }
    }
    printf("Minimum of the enterred integers is : %f", min);
}

/*
Function that takes in 5 subject marks as input and prints the associated grade with their average to console/terminal
*/
void grade(){
    float a, b, c, d, e, avg;
    printf("Enter 5 marks :\n");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    avg = ((a + b + c + d + e) / 5);
    if (avg < 40) {
        printf("Average is %f, Grade is an F", avg);
    }
    else if (40 <= avg && avg <= 50){
        printf("Average is %f, Grade is an E", avg);
    }
    else if (50 <= avg && avg <= 60){
        printf("Average is %f, Grade is an D", avg);
    }
    else if (60 <= avg && avg <= 70){
        printf("Average is %f, Grade is an C", avg);
    }
    else if (70 <= avg && avg <= 80){
        printf("Average is %f, Grade is an B", avg);
    }
    else if (80 <= avg && avg <= 90){
        printf("Average is %f, Grade is an A", avg);
    }
    else {
        printf("Average is %f, Grade is an A+", avg);
    }
}

/*
Function that takes in a character input and prints the character type: alphabet, digit, or symbol to console/terminal
*/
void inputType(){
    char character;
    printf("Enter any character on the keyboard :\n");
    scanf(" %c", &character);
    int ord = (int) character;
    if ((33 <= ord && ord <= 47) || (58 <= ord && ord <= 64) || (91 <= ord && ord <= 96) || (123 <= ord && ord <= 126)) {
        printf("Input is a symbol");
    }
    else if (48 <= ord && ord <= 57){
        printf("Input is a digit");
    }
    else if (65 <= ord && ord <= 90 || 97 <= ord && ord <= 122){
        printf("Input is alphabet");
    }
    else {
        printf("Input type not known");
    }
}

void main(){
    printf("Question 1 - Calculator\n");
    calculator(); //Problem 1
    printf("\nQuestion 2 - Minimum\n");
    minimum(); //Problem 2
    printf("\nQuestion 3 - Grade\n");
    grade(); //Problem 3
    printf("\nQuestion 4 - Input Data Type\n");
    inputType(); //Problem 4
}