#include <stdio.h>

double sum = 0, diff = 0, prod = 0, quot = 0;


/*
Function: add

Sums two real value integers (includes decimal values) and stores the value
to a global variable, sum. Also calls sub() function.

x: a real numerical value
y: a real numerical value

Returns: 0
*/
double add(double x, double y){
    sum = x + y;
    double sub();
    sub(x,y);
    return 0;
}

/*
Function: sub

Subtracts two real value integers (includes decimal values) and stores the value
to a global variable, diff

x: a real numerical value
y: a real numerical value

Returns: 0
*/
double sub(double x, double y){
    diff = x - y;
    return 0;
}

/*
Function: mult

Multiplies two real value integers (includes decimal values) and stores the value
to a global variable, prod

x: a real numerical value, resulting from the add() function
y: a real numerical value, resulting from the sub() function

Returns: 0
*/
double mult(double x, double y){
    prod = x * y;
    return 0;
}

/*
Function: div

Divides two real value integers (includes decimal values) and stores the value
to a global variable, quot.

x: a real numerical value, resulting from the add() function
y: a real numerical value, resulting from the sub() function

Returns: 0
*/
double div(double x, double y){
    quot = x / y;
    return 0;
}

void main(){
    double a, b;
    printf("Enter two numerical values in the order you wish the subtraction operation to be performed (can include decimals, press Enter after each one):\n");
    scanf("%lf %lf", &a, &b);
    add(a,b);
    mult(sum, diff);
    div(sum, diff);
    printf("\n%.2lf, %.2lf, %.2lf, %.2lf", sum, diff, prod, quot);
}