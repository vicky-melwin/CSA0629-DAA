#include <stdio.h>

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int max_sum_with_conditions(int nums[], int size) {
    int max_sum = -1;
    int digit_sums[1000] = {0}; 

    for (int i = 0; i < size; i++) {
        int digit_sum = sum_of_digits(nums[i]);
        if (digit_sums[digit_sum] != 0) {
            if (digit_sums[digit_sum] + nums[i] > max_sum) {
                max_sum = digit_sums[digit_sum] + nums[i];
            }
        }
        if (nums[i] > digit_sums[digit_sum]) {
            digit_sums[digit_sum] = nums[i];
        }
    }

    return max_sum;
}

int main() {
    int nums[] = {18, 42, 33, 81};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Maximum Sum: %d\n", max_sum_with_conditions(nums, size));
    return 0;
}

