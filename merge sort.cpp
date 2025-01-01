#include <stdio.h>
void merge_sorted_arrays(int nums1[], int size1, int nums2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    while (i < size1) {
        merged[k++] = nums1[i++];
    }
    while (j < size2) {
        merged[k++] = nums2[j++];
    }
}
int main() {
    int nums1[] = {9, 8, 3, 1};
    int nums2[] = {7, 4, 0, -2};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int merged[size1 + size2];
    merge_sorted_arrays(nums1, size1, nums2, size2, merged);
    printf("Merged Array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}

