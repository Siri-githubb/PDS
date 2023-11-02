#include <stdio.h>
#include <string.h>

struct Student {
    int regNo;
    char name[50];
    char branch[50];
    float cgpa;
};

void searchStudentByRegNo(struct Student students[], int size, int targetRegNo) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (students[i].regNo == targetRegNo) {
            printf("Student found!\n");
            printf("Reg No: %d\n", students[i].regNo);
            printf("Name: %s\n", students[i].name);
            printf("Branch: %s\n", students[i].branch);
            printf("CGPA: %.2f\n", students[i].cgpa);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with Reg No %d not found.\n", targetRegNo);
    }
}

void sortStudentsByRegNo(struct Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].regNo > students[j + 1].regNo) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {

    struct Student students[10] = {
        {101, "Alice", "CSE", 9.0},
        {102, "Bob", "EEE", 8.5},
        {103, "Charlie", "ME", 8.2},
        {104, "David", "ECE", 8.7},
        {105, "Eva", "CE", 9.1},
        {106, "Frank", "CSE", 8.9},
        {107, "Grace", "EEE", 8.3},
        {108, "Harry", "ME", 8.6},
        {109, "Irene", "ECE", 9.2},
        {110, "Jack", "CE", 8.8}
    };

    int targetRegNo;
    printf("Enter the registration number to search: ");
    scanf("%d", &targetRegNo);
    searchStudentByRegNo(students, 10, targetRegNo);

    sortStudentsByRegNo(students, 10);

    printf("\nSorted Students based on Registration Number:\n");
    for (int i = 0; i < 10; i++) {
        printf("Reg No: %d, Name: %s, Branch: %s, CGPA: %.2f\n", students[i].regNo, students[i].name, students[i].branch, students[i].cgpa);
    }

    return 0;
}