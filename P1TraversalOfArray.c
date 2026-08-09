#include <stdio.h>

int main(){

    printf("Enter the number of elements : ");
    int size;
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements : \n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("The elements in the array are : \n");
    for(int i = 0; i < size; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}