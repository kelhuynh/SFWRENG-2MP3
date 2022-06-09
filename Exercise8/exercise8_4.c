#include <stdio.h>


/*
Kelvin Huynh
400179088
2019-11-12
Q4: Array Output to File
*/
void main(){
    FILE *arrout = fopen("arrout.txt", "w");
    int numEl;
    printf("Enter the amount of elements:");
    
    scanf("%d", &numEl);
    getchar();                              // Breaks the buffer caused by scanf

    char arr[numEl][100];
    
    for (int i = 0; i < numEl; i++){
        printf("Enter element: ");
        gets(arr[i]);
    }

    for (int i = 0; i < numEl; i++){        // Formatting array output
        fprintf(arrout, "%s", arr[i]);
        if (i != (numEl - 1)){
            fprintf(arrout, ", ");
        }
    }

    fclose(arrout);
}