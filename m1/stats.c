/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief analizing an array of unsigned char
 *
 * Element Analiticts:
 * 1. Maximum.
 * 2. Minimum.
 * 3. Mean.
 * 4. Median.
 * 
 * @author <Renu Kulkarni>
 * @date <12/23/2024 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                114, 88,   45,  76, 123,  87,  25,  23,
                                200, 122, 150, 90,   92,  87, 177, 244,
                                201,   6,  12,  60,   8,   2,   5,  67,
                                  7,  87, 250, 230,  99,   3, 100,  90};

    // Other variable declarations (if any)
    int length = SIZE;

    // Sort the array
    sort_array(test, length);

    // Print array and statistics
    print_array(test, length);
    print_statistics(test, length);
}

/* Function to print statistics of an array */
void print_statistics(unsigned char array[], int length) {
    printf("Minimum: %d\n", find_minimum(array, length));
    printf("Maximum: %d\n", find_maximum(array, length));
    printf("Mean: %.2f\n", find_mean(array, length));
    printf("Median: %d\n", find_median(array, length));
}

/* Function to print the array */
void print_array(unsigned char array[], int length) {
    printf("Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

/* Function to find the median of the array */
int find_median(unsigned char array[], int length) {
    if (length % 2 == 0) {
        return (array[length / 2 - 1] + array[length / 2]) / 2;
    } else {
        return array[length / 2];
    }
}

/* Function to find the mean of the array */
float find_mean(unsigned char array[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return (float)sum / length;
}

/* Function to find the maximum value in the array */
int find_maximum(unsigned char array[], int length) {
    int max = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

/* Function to find the minimum value in the array */
int find_minimum(unsigned char array[], int length) {
    int min = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

/* Function to sort the array in descending order */
void sort_array(unsigned char array[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (array[i] < array[j]) {
                unsigned char temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
