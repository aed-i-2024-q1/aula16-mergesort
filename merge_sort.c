#include <stdlib.h>

#include "merge_sort.h"
#include "merge.h"

/**
 * Recursive (top-down) merge sort.
*/
void mergeSortRecur(Element *arr, Element *aux, int l, int r) {
    if (l >= r) {
        return;
    }

    int m = l + (r - l) / 2;

    mergeSortRecur(arr, aux, l, m);
    mergeSortRecur(arr, aux, m + 1, r);
    merge(arr, aux, l, m, r);
}

/**
 * Iterative (bottom-up) merge sort.
*/
void mergeSortIter(Element *arr, Element *aux, int size) {
    for (int i = 1; i < size; i *= 2) {
        for (int j = 0; j < size - i; j += 2 * i) {
            int l = j;
            int m = j + i - 1;
            int r = j + 2 * i - 1;

            if (r >= size) {
                r = size - 1;
            }

            merge(arr, aux, l, m, r);
        }
    }
}

void mergeSort(Element *arr, int size) {
    Element aux[size];

    mergeSortRecur(arr, aux, 0, size - 1);
    // mergeSortIter(arr, aux, size);
}