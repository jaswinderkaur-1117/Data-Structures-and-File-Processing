#include <stdio.h>

int main(){
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Create an array of size n

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Deleting the first element by shifting all elements to the left
    for(i = 0; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }

    printf("Array after deleting the first element:\n");
    for(i = 0; i < n - 1; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}