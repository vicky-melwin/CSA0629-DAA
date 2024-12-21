#include <stdio.h>

void printPascal(int n) {
    for (int line = 0; line < n; line++) {
        // Print leading spaces for pyramid shape
        for (int space = 0; space < n - line - 1; space++) {
            printf(" ");
        }

        // Calculate and print values in the row
        int val = 1;
        for (int i = 0; i <= line; i++) {
            printf("%d ", val);
            val = val * (line - i) / (i + 1);
        }
        printf("\n");
    }
}

int main() {
    int rows = 5;
    printPascal(rows);
    return 0;
}

