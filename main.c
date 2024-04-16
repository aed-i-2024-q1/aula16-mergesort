#include <stdio.h>

#include "merge_sort.h"
#include "merge.h"

void printArray(Element *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void test_merge() {
    Element arr[] = {1, 20, 78, 33, 46, 59};
    Element aux[6];

    printArray(arr, 6);
    merge(arr, aux, 0, 2, 5);
    printArray(arr, 6);
}

void test_mergeSort() {
    Element arr[] = {1, 3, 2, 5, 4, 7, 6, 9, 8, 0};

    printArray(arr, 10);
    mergeSort(arr, 10);
    printArray(arr, 10);
}

int main() {
    test_merge();
    test_mergeSort();

    return 0;
}