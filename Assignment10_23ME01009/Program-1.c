#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    int age;
};

int main() {
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        students[i].rollNumber = i + 1; 
        printf("Enter name for student with roll number %d: ", students[i].rollNumber);
        scanf("%s", students[i].name);
        printf("Enter age for student with roll number %d: ", students[i].rollNumber);
        scanf("%d", &students[i].age);
    }

    int targetRollNumber = 2;
    for (i = 0; i < 5; i++) {
        if (students[i].rollNumber == targetRollNumber) {
            printf("\nDetails of student with roll number %d:\n", targetRollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            break;
        }
    }

    return 0;
}
