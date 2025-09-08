/*
 * File     : string_concat.c
 * Author   : Pentreddy Damodar
 * Purpose  : Concatenate two strings without using library functions
 *
 * Description:
 *  This program reads two strings from the user and appends
 *  the second string to the end of the first string.
 *
 * Example:
 *  Input  :
 *      First string  = "Hello"
 *      Second string = "World"
 *  Output :
 *      After concatenation:
 *      First string  = "HelloWorld"
 *      Second string = "World"
 */

#include <stdio.h>

#define MAX_SIZE 100   // maximum size for the first string
#define SMALL_SIZE 50  // maximum size for the second string

int main(void) {
    char first[MAX_SIZE];
    char second[SMALL_SIZE];
    int i, j;

    // Input strings
    printf("Enter the first string:\n");
    scanf("%s", first);

    printf("Enter the second string:\n");
    scanf("%s", second);

    // Find the end of the first string
    for (i = 0; first[i] != '\0'; i++);

    // Append the second string
    for (j = 0; second[j] != '\0'; j++, i++) {
        first[i] = second[j];
    }
    first[i] = '\0';  // null-terminate the result

    // Output results
    printf("After concatenation:\n");
    printf("First string  = %s\n", first);
    printf("Second string = %s\n", second);

    return 0;
}

