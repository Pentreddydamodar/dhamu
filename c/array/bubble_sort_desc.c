/*
 * File     : bubble_sort_desc.c
 * Author   : Pentreddy Damodar
 * Purpose  : Sort an array in descending order using bubble sort
 *
 * Description:
 *  This program reads a fixed number of integers into an array,
 *  then sorts the array in descending order using the bubble sort
 *  algorithm. In each pass, the smallest elements "bubble" towards
 *  the end of the array, leaving the largest elements at the front.
 *
 * Example:
 *  Input  : 5  3  9  1  7
 *  Output : 9  7  5  3  1
 */

#include <stdio.h>

#define SIZE 5   // number of elements in the array

int main(void) {
    int arr[SIZE];
    int n = SIZE;
    int temp;

    // Input array elements
    printf("Enter %d array elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array before sorting
    printf("Before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Bubble sort in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print array after sorting
    printf("After sorting (descending): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

