#include <stdio.h>

int main() {
    int size, searchElement;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array: ");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Enter searching element: ");
    scanf("%d", &searchElement);

    int *ptr = arr;

    int position = -1;

    for (int i = 0; i < size; ++i) {
        if (*ptr == searchElement) {
            position = i + 1; 
            break; 
        }
        ptr++; 
    }

    if (position != -1) {
        printf("%d is present at %d position\n", searchElement, position);
    } else {
        printf("Not found\n");
    }

    return 0;
}
