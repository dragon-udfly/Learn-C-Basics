#include <stdio.h>

int findMax(int arr[], int size);
int findMin(int arr[], int size);

int main() {

    int numbers[] = {12, 89, 34, 20, 43, 92, 67, 56, 28, 95};

    int const karraySize = (sizeof(numbers) / sizeof(numbers[0]));
    int counter = 0;
    int copy_numbers[karraySize];

    printf("Element: ");
    while(counter < karraySize) {
        printf("%d ", numbers[counter]);
        copy_numbers[counter] = numbers[counter];
        counter++;
    }
    printf("\n");

    printf("Copied Array Elements: ");
    for(int i = 0; i < karraySize; i++) {
        printf("%d ", copy_numbers[i]);
    }
    printf("\n");

    printf("Minimum Value: %d\n", findMin(numbers, karraySize));
    printf("Maximum Value: %d\n", findMax(numbers, karraySize));

    return 0;
}

int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 0; i < size; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for(int i = 0; i < size; i++) {
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}