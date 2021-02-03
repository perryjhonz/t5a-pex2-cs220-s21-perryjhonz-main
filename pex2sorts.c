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