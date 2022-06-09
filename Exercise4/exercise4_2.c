#include <stdio.h>

/*
Question 2: Fibonacci Sequence
*/

void main(){
    int current = 0, preceding = 1, last = 0;
    do{
        (current == 0) ? printf("%d %d ", current, preceding) : printf("%d ", current);
        current = last + preceding;
        last = preceding;
        preceding = current;
    }
    while (current < 30);
}