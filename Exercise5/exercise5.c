#include <stdio.h>
#include <string.h>

/*
Kelvin Huynh
400179088
Exercise 5
2019-10-05

Note: Output has been formatted for readability if foregoing code analysis, differs from the individual exercise files for this reason
*/

void vowelCounter(){
    char string[50];
    char vowel[11] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0'};
    int vowelcount = 0;
    printf("Enter a string of up to 50 characters:\n");
    gets(string);
    for (int i = 0; i < strlen(string); i++){
        for (int j = 0; j < strlen(vowel); j++){
            if (string[i] == vowel[j]){
                vowelcount++;
            }
        }
    }
    printf("There are %d vowels in the string '%s'", vowelcount, string);
}

void palindrome(){
    char string[50], reverse[50];
    printf("Enter a string of up to 50 characters:\n");
    gets(string);
    strcpy(reverse, string);
    strrev(reverse);
    (strcmpi(string, reverse)) ? printf("'%s' is not a palindrome", string) : printf("'%s' is a palindrome", string); //Note : strcmpi returns 0 if strings are equal
}

void arrayMax(){
    float multarray[4][5] = {{1.53, 0.49, 0.19, 0.75, 6.50},{0.17, 0.10, 0.67, 1.00, 0.98},{0.82, 0.18, 13.18, 0.59, 0.20},  {0.09, -0.04, 0.03, 0.45, 0.52}}; // Using array from question
    float max = 0;
    for (int i = 0; i < sizeof(multarray)/sizeof(multarray[0]); i++){ // i < size of array div by size of one row
        for (int j = 0; j < sizeof(multarray[0])/sizeof(multarray[0][0]); j++){ // j < size of one row div by size of one element
            if (multarray[i][j] > max) {
                max = multarray[i][j];
            }
        }
    }
    printf("In the data set:\n");
    for (int i = 0; i < sizeof(multarray)/sizeof(multarray[0]); i++){
        for (int j = 0; j < sizeof(multarray[0])/sizeof(multarray[0][0]); j++){
            printf("%.2f ", multarray[i][j]);
        }
        printf("\n");
    }
    printf("The maximum is %.2f", max);
}

void sortedArray(){
    int arr[9] = {21, 5, 4, 7, 17, 3, 1, 12, 2}, temp, length = sizeof(arr)/sizeof(int); // Using integer array from question
    printf("The unsorted array is:\n");
    for (int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < length - 1; i++){ // Bubble Sort
        for (int j = 0; j < length - i - 1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nThe sorted array is:\n");
    for (int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
}

void main(){
    printf("Q1 : Vowel Counter\n");
    vowelCounter();
    printf("\n\nQ2 : Palindrome\n");
    palindrome ();
    printf("\n\nQ3 : 2D Integer Array Max Value\n");
    arrayMax();
    printf("\n\nQ4 : Sorted Array (Ascending)\n");
    sortedArray();
}