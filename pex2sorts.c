/** pex2sorts.c
 * ===========================================================
 * Name: Daniel Perry
 * Section: T5
 * Project: PEX2
 * Purpose: Sorting algoritms
 * Documentation:
 * =========================================================== */
#include "pex2sorts.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Selection Sort
void selectionSort(int array[], int N) {
    int i = 0;
    int j = 0;
    int indexSmallest = 0;
    int temp = 0;  // Temporary variable for swap

    for (i = 0; i < N - 1; ++i) {
        // Find index of smallest remaining element
        indexSmallest = i;
        for (j = i + 1; j < N; ++j) {
            if (array[j] < array[indexSmallest]) {
                indexSmallest = j;
            }
        }

        // Swap array[i] and array[indexSmallest]
        temp = array[i];
        array[i] = array[indexSmallest];
        array[indexSmallest] = temp;
    }
}

// Insertion Sort
void insertionSort(int array[], int N) {
    int i = 0;
    int j = 0;
    int indexSmallest = 0;
    int temp = 0;  // Temporary variable for swap
    for (i = 0; i < N - 1; ++i) {
        // Find index of smallest remaining element
        indexSmallest = i;
        for (j = i + 1; j < N; ++j) {
            if (array[j] < array[indexSmallest]) {
                indexSmallest = j;
            }
        }

        // Swap array[i] and array[indexSmallest]
        temp = array[i];
        array[i] = array[indexSmallest];
        array[indexSmallest] = temp;
    }
}

// Bubble Sort
void bubbleSort(int array[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

/**
 * @brief Given two sorted sublists array[lBound..mid] and array[mid+1..rBound],
 * merge them into a single sorted list in array[lBound..rBound]
 * @param array - the array to sort
 * @param lBound - the lowest index of the first sublist
 * @param mid - the highest index of the first sublist
 * @param rBound - the highest index of the second sublist
 */
void merge(int array[], int lBound, int mid, int rBound) {
    // Create temporary array mergedNumbers
    // Initialize position variables
    int mergePos = 0;
    int leftPos = 0;
    int rightPos = 0;
    int mergedSize = rBound - lBound + 1;
    int *mergedNumbers = (int *)malloc(sizeof(int) * mergedSize);

    leftPos = lBound;
    rightPos = mid + 1;

    while (leftPos <= mid && rightPos <= rBound) {
        if (array[leftPos] <= array[rightPos]) {
            mergedNumbers[mergePos] = array[leftPos];
            ++leftPos;
        } else {
            mergedNumbers[mergePos] = array[rightPos];
            ++rightPos;
        }
        ++mergePos;
    }

    // If left partition not empty, add remaining elements
    while (leftPos <= mid) {
        mergedNumbers[mergePos] = array[leftPos];
        ++leftPos;
        ++mergePos;
    }

    // If right partition not empty, add remaining elements
    while (rightPos <= rBound) {
        mergedNumbers[mergePos] = array[rightPos];
        ++rightPos;
        ++mergePos;
    }

    // Copy merge number back to array
    for (mergePos = 0; mergePos < mergedSize; ++mergePos) {
        array[lBound + mergePos] = mergedNumbers[mergePos];
    }
}

// Merge Sort
void mergeSort(int array[], int N) {
    int lBound = 0;
    int rBound = N - 1;

    sergeMort(array, lBound, rBound);
}

// Serge Mort
void sergeMort(int array[], int lBound, int rBound) {
    int j = 0;

    if (lBound < rBound) {
        j = (lBound + rBound) / 2;  // Find the midpoint in the partition

        // Recursively sort left and right partitions
        sergeMort(array, lBound, j);
        sergeMort(array, j + 1, rBound);

        // Merge left and right partition in sorted order
        merge(array, lBound, j, rBound);
    }
}
