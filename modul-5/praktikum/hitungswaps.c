#include <stdio.h>

int bubble_sort_swaps(int arr[], int n) {
    int i, j, temp, count_swaps = 0;
    int swapped;

    for (i = 0; i < n-1; i++) {
        swapped = 0; 

        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count_swaps++;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
    return count_swaps;
}

int main() {
    int n, i;
    
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int swaps = bubble_sort_swaps(arr, n);

    printf("%d\n", swaps);

    return 0;
}
