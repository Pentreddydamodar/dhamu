/*
 * File     : largest_element.c
 * Author   : Pentreddy Damodar
 * Purpose  : Find the largest element in an array
 *
 * Description:
 *  This program reads a fixed number of integers into an array
 *  and finds the largest element by comparing each value.
 *
 * Example:
 *  Input  : 5  3  9  1  7
 *  Output : 9 is the largest element
 */

#include <stdio.h>

#define SIZE 5   // number of elements in the array

int main(void) {
    int arr[SIZE];
    int n = SIZE;
    int largest;

    // Input array elements
    printf("Enter %d array elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is largest
    largest = arr[0];

    // Find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the result
    printf("%d is the largest element\n", largest);

    return 0;
}


