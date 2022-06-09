#include <stdio.h>

/*
Kelvin Huynh
400179088
Question 4: Int Array Sort by Ascending
2019-10-05
*/
void main(){
    int arr[9] = {21, 5, 4, 7, 17, 3, 1, 12, 2}, temp; // Using integer array from question
    for (int i = 0; i < sizeof(arr)/sizeof(int) - 1; i++){
        for (int j = 0; j < sizeof(arr)/sizeof(int) - i - 1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
        printf("%d ", arr[i]);
    }
}