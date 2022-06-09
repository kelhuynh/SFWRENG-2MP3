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
void ageFilter(){
    printf("\nFiltered Age (17 - 19)\n");
    for (int i = 0; i < 8; i++){
        if (a[i].age >= 17 && a[i].age <= 19){
            printf("%s %ld\n", a[i].name, a[i].studentnum);
        }
    }
}

/*
Function: oddStudentNum

Prints the names of all the students with an odd valued student number
*/
void oddStudentNum(){
    printf("\nOdd Student Numbers\n");
    for (int i = 0; i < 8; i++){
        if ((a[i].studentnum % 2) != 0) {
            printf("%s\n", a[i].name);
        }
    }
}

void main(){
    for (int i = 0; i < 8; i++){
        printf("\nEnter name, student number, age, and address (Press Enter after each input):\n");
        scanf(" %[^\n] %ld %d %[^\n]", &a[i].name, &a[i].studentnum, &a[i].age, &a[i].address);
        while (a[i].age < 16 || a[i].age > 21){
            printf("Age entered was %d, age must be 16-21, please enter a valid age: ", a[i].age);
            scanf("%d", &a[i].age);
        }
    }
    ageFilter();
    oddStudentNum();
}