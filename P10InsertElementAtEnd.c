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

    arr[n] = element; // Insert the new element at the end

    printf("Array after inserting %d at the end:\n", element);
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }   
    printf("\n");
    return 0;
}