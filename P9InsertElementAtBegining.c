#include <stdio.h>

int main() {

    int n, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    int arr[n + 1]; // Create an array with one extra space for the new element

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Shift elements to the right to make space for the new element at the beginning
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }       

    arr[0] = element; // Insert the new element at the beginning

    printf("Array after inserting %d at the beginning:\n", element);
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}