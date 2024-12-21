#include <stdio.h>
#include <limits.h>

void findMinMax(int arr[], int low, int high, int *min, int *max) {
    if (low == high) { // Single element
        if (*min > arr[low]) *min = arr[low];
        if (*max < arr[low]) *max = arr[low];
        return;
    }

    if (high == low + 1) { // Two elements
        if (arr[low] < arr[high]) {
            if (*min > arr[low]) *min = arr[low];
            if (*max < arr[high]) *max = arr[high];
        } else {
            if (*min > arr[high]) *min = arr[high];
            if (*max < arr[low]) *max = arr[low];
        }
        return;
    }

    int mid = (low + high) / 2;
    findMinMax(arr, low, mid, min, max);
    findMinMax(arr, mid + 1, high, min, max);
}

int main() {
    int arr[] = {23, 45, 6, 8, -9, 44, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = INT_MAX, max = INT_MIN;

    findMinMax(arr, 0, n - 1, &min, &max);
    printf("Min = %d, Max = %d\n", min, max);

    return 0;
}

