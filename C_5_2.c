#include <stdio.h>

void selection_sort(int array[], int n) {
    int i, j, min_index, temp;
    for (i = 0; i < n-1; i++) {
        min_index = i;
        for (j = i+1; j < n; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    selection_sort(array, n);
    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
