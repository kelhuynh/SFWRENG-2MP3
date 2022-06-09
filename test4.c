#include <stdio.h>

void main(){
    // int a, b, c;
    // int arr[5] = {1,2,3,25,7};
    // a = ++arr[1];
    // b = arr[1]++;
    // c = arr[a++];
    // printf("%d %d %d %d", a, b, c, arr[1]);
    int a = 0, b;
    b = a++;
    printf("%d ", b); // b = 0
    printf("%d ", a); // a = 1
    b = ++a;
    printf("%d ", b); // b = 2
}