#include <stdio.h>
#include <ctype.h>

void reverseNumber(int num) {
    int rev = 0, original = num;
    while (num != 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    printf("Reversed number: %d\n", rev);
}

int main() {
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Illegal input\n");
        return 0;
    }
    reverseNumber(num);
    return 0;
}

