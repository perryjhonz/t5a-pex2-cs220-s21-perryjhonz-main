/** pex2sorts.h
 * ===========================================================
 * Name: Daniel Perry
 * Section: T5
 * Project: PEX2
 * Purpose: Sorting algoritms
 * Documentation:
 * =========================================================== */
#ifndef PEX2SORTS_H
#define PEX2SORTS_H
#include <stdio.h>
#include <stdlib.h>

/** -------------------------------------------------------------------
 * @brief Perform an selection sort on an array
 * @param array - the array to sort
 * @param N - the size of the array to sort
 * @pre array[] contains data N contains # of items
 * @post array[] is sorted in descending order
 */
void selectionSort(int array[], int N);

/** -------------------------------------------------------------------
 * @brief Perform an insertion sort on an array
 * @param array - the array to sort
 * @param N - the size of the array to sort
 * @pre array[] contains data N contains # of items
 * @post array[] is sorted in descending order
 */
void insertionSort(int array[], int N);

/** -------------------------------------------------------------------
 * @brief - Perform anbubble sort on an array
 * @param array - the array to sort
 * @param N - the size of the array to sort
 * @pre parameters are populated with proper values
 * @post array is sorted
 */
void bubbleSort(int array[], int N);

/** -------------------------------------------------------------------
 * @brief Perform a mergesort on a portion of an array, from lBound
 * to rBound
 * @param numbers - the array to sort
 * @param lBound - the starting index of the sublist to sort
 * @param rBound - the ending index of the sublist to sort
 * @pre parameters are populated with proper values
 * @post array is sorted
 */
void mergeSort(int array[], int N);


#endif //PEX2SORTS_H