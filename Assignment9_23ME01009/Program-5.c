#include <stdio.h>

int main() {
    int size, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;

    for (int i = 0; i < size; ++i) {
        sum += *(ptr + i); 
    }

    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}
