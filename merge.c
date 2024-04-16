#include "merge.h"

void merge(Element *array, Element* aux, int l, int m, int r) {
    for (int k = l; k <= r; k++) {
        aux[k] = array[k];
    }

    int i = l;
    int j = m + 1;

    for (int k = l; k <= r; k++) {
        if (i > m) {
            array[k] = aux[j++];
        } else if (j > r) {
            array[k] = aux[i++];
        } else if (aux[j] < aux[i]) {
            array[k] = aux[j++];
        } else {
            array[k] = aux[i++];
        }
    }
}