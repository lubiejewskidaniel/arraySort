#include <stdio.h>//inclusion of the standard input/output library

int main() {//main function
    //Varriable declarations below
    int arr[] = {71, 49, 35, 3, 62, 66, 58, 83};//array of integers initialized with the values 71, 49, 35, 3, 62, 66, 58, 83
    int size = sizeof(arr) / sizeof(arr[0]);//size of the array is determined by dividing the total size of the array by the size of a single element in the array
    int i, j, temp;

    // Display all array values
    printf("Original Array: ");
    for (i = 0; i < size; i++) {//"for" loop to display current array values before changes
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort array values using while loop from smallest to the biggest
    for (i = 0; i < size - 1; i++) {//nested "for" loop to sort the array values in ascending order. The outer loop iterates through the array, while the inner loop compares the current element with the next element and swaps them if the current element is greater than the next element
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array values
    printf("Sorted Array:   ");
    for (i = 0; i < size; i++) {//"for" loop to display array values after all changes are done
        printf("%d ", arr[i]);
    }
    printf("\n");


}

//to sort out this array I used completely different way, by using "sizeof()" function
