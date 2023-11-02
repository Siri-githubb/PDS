#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int marks[5];
};

int main() {
    int numStudents, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    for (i = 0; i < numStudents; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks of 5 subjects for student %d: ", i + 1);
        for (j = 0; j < 5; j++) {
            scanf("%d", &students[i].marks[j]);
        }
    }

    char searchName[30];
    int found = 0;

    printf("\nEnter the name of the student to search: ");
    scanf("%s", searchName);

    for (i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, searchName) == 0) {

            int totalMarks = 0;
            for (j = 0; j < 5; j++) {
                totalMarks += students[i].marks[j];
            }
            double averageMarks = (double) totalMarks / 5;

            printf("Total marks for %s: %d\n", students[i].name, totalMarks);
            printf("Average marks for %s: %.2lf\n", students[i].name, averageMarks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with name %s not found.\n", searchName);
    }

    return 0;
}