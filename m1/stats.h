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
 * @file stats.h
 * @brief Analizing an array of unsigned char
 *
 *  * Element Analiticts:
 * 1. Maximum.
 * 2. Minimum.
 * 3. Mean.
 * 4. Median.
 *
 * @author Renu kulkarni
 * @date 12/23/2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Function Prototypes */

/**
 * @brief Prints the statistics (min, max, mean, and median) of an array.
 *
 * This function takes an array and its length as input and prints the minimum, 
 * maximum, mean, and median values of the array.
 *
 * @param array An array of unsigned characters containing the data.
 * @param length The length of the array.
 *
 * @return None
 */
void print_statistics(unsigned char array[], int length);

/**
 * @brief Prints the array.
 *
 * This function takes an array and its length as input and prints the array elements 
 * to the screen.
 *
 * @param array An array of unsigned characters containing the data.
 * @param length The length of the array.
 *
 * @return None
 */
void print_array(unsigned char array[], int length);

/**
 * @brief Finds the median of an array.
 *
 * This function takes an array and its length as input and calculates the median. 
 * If the length is odd, it returns the middle element; if even, it returns the 
 * average of the two middle elements.
 *
 * @param array An array of unsigned characters containing the data.
 * @param length The length of the array.
 *
 * @return The median value of the array.
 */
int find_median(unsigned char array[], int length);

/**
 * @brief Calculates the mean of an array.
 *
 * This function calculates the mean by summing all the elements of the array 
 * and dividing by the length of the array.
 *
 * @param array An array of unsigned characters containing the data.
 * @param length The length of the array.
 *
 * @return The mean of the array as a floating point number.
 */
float find_mean(unsigned char array[], int length);

/**
 * @brief Finds the maximum value in the array.
 *
 * This function iterates through the array and returns the largest value.
 *
 * @param array An array of unsigned characters containing the data.
 * @param length The length of the array.
 *
 * @return The maximum value in the array.
 */
int find_maximum(unsigned char array[], int length);

/**
 * @brief Finds the minimum value in the array.
 *
 * This function iterates through the array and returns the smallest value.
 *
 * @param array An array of unsigned characters containing the data.
 * @param length The length of the array.
 *
 * @return The minimum value in the array.
 */
int find_minimum(unsigned char array[], int length);

/**
 * @brief Sorts the array in descending order.
 *
 * This function sorts the array from largest to smallest using a simple bubble 
 * sort algorithm.
 *
 * @param array An array of unsigned characters containing the data.
 * @param length The length of the array.
 *
 * @return None
 */
void sort_array(unsigned char array[], int length);

#endif /* __STATS_H__ */
