#include <stdio.h>

int main() {

    int n, i, element, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Create an array of size n

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &element);

    // Linear search for the element
    for(i = 0; i < n; i++){
        if(arr[i] == element){
            found = 1;
            break;
        }
    }

    if(found){
        printf("Element %d found at index %d.\n", element, i);
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}