#include <stdio.h>

/*
Brute force pythagorean triples
*/
void main(){
    int tripleCount;
    for (int side1 = 1; side1 <= 400; side1++){
        for (int side2 = 1; side2 <= 400; side2++){
            for (int hyp = 1; hyp <= 400; hyp++){
                (((side1*side1) + (side2*side2)) == (hyp*hyp)) ? printf("%d %d %d\n", side1, side2, hyp), tripleCount++ : printf("");
            }
        }
    }
    printf("%d", tripleCount);
}