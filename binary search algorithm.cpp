#include <stdio.h>

int binarySearch(int nums[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Target not found
}

int main() {
    int nums[] = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = binarySearch(nums, size, target);
    if (result != -1)
        printf("Target found at index %d\n", result);
    else
        printf("Target not found\n");
    return 0;
}

