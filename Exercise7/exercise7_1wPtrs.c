#include <stdio.h>

/*
Kelvin Huynh
400179088
11-05-19
Q1: Student Database
*/

struct student{
    long studentnum;
    char name[30];
    int age;
    char address[50];
} a[8];

/*
Function: ageFilter

Prints the name and student num of students who satisfy the age condition of 17-19
*/
void ageFilter(struct student *ptr){
    printf("\nFiltered Age (17 - 19)\n");
    for (int i = 0; i < 4; i++){
        if ((*ptr).age >= 17 && (*ptr).age <= 19){
            printf("%s %ld\n", (*ptr).name, (*ptr).studentnum);
        }
        ptr++;
    }
}

/*
Function: oddStudentNum

Prints the names of all the students with an odd valued student number
*/
void oddStudentNum(struct student *ptr){
    printf("\nOdd Student Numbers\n");
    for (int i = 0; i < 4; i++){
        if (((*ptr).studentnum % 2) != 0) {
            printf("%s\n", (*ptr).name);
        }
        ptr++;
    }
}

void main(){

    struct student *ptr;

    ptr = a;

    for (int i = 0; i < 4; i++){
        printf("\nEnter name, student number, age, and address (Press Enter after each input):\n");
        scanf(" %[^\n] %ld %d %[^\n]", &ptr->name, &ptr->studentnum, &ptr->age, &ptr->address);
        while (a[i].age < 16 || a[i].age > 21){
            printf("Age entered was %d, age must be 16-21, please enter a valid age: ", (*ptr).age);
            scanf("%d", &ptr->age);
        }
        ptr++;
    }

    ptr = a;

    ageFilter(ptr);
    oddStudentNum(ptr);
}