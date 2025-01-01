#include <stdio.h>
int linear_search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr1[] = {56, 89, 7, 13, 75, 23, 8, 12};
    int arr2[] = {89, 45, -23, 45, 0, 44, 2};
    int arr3[] = {45, 67, 56, -1, 34, -2, 100};
    int key1 = 75, key2 = 0, key3 = 90;
    int pos = linear_search(arr1, 8, key1);
    printf("Element %d %s at position %d\n", key1, (pos != -1) ? "found" : "not found", pos + 1);
    pos = linear_search(arr2, 7, key2);
    printf("Element %d %s at position %d\n", key2, (pos != -1) ? "found" : "not found", pos + 1);
    pos = linear_search(arr3, 7, key3);
    printf("Element %d %s\n", key3, (pos != -1) ? "found" : "not found");
    return 0;
}

