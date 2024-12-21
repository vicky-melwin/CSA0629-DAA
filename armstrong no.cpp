#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    
    return sum == num;
}

int main() {
    int num1 = 153, num2 = 419;

    printf("Input: %d -> Output: %s\n", num1, isArmstrong(num1) ? "True" : "False");
    printf("Input: %d -> Output: %s\n", num2, isArmstrong(num2) ? "True" : "False");

    return 0;
}

