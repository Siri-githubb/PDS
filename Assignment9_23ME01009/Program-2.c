#include <stdio.h>

int main() {
    int size;
    
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);
    
    int arr1[size], arr2[size];
    
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr2[i]);
    }

    printf("Arrays before swapping:\n");
    printf("First array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr2[i]);
    }
    
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    
    for (int i = 0; i < size; ++i) {
        int temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }
    
    printf("\nArrays after swapping:\n");
    printf("First array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr2[i]);
    }

    return 0;
}