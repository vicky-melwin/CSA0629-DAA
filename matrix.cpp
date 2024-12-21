#include <stdio.h>

void strassenMatrixMultiplication(int a[2][2], int b[2][2], int c[2][2]) {
    int p1, p2, p3, p4, p5, p6, p7;
    
    p1 = (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
    p2 = (a[1][0] + a[1][1]) * b[0][0];
    p3 = a[0][0] * (b[0][1] - b[1][1]);
    p4 = a[1][1] * (b[1][0] - b[0][0]);
    p5 = (a[0][0] + a[0][1]) * b[1][1];
    p6 = (a[1][0] - a[0][0]) * (b[0][0] + b[0][1]);
    p7 = (a[0][1] - a[1][1]) * (b[1][0] + b[1][1]);
    
    c[0][0] = p1 + p4 - p5 + p7;
    c[0][1] = p3 + p5;
    c[1][0] = p2 + p4;
    c[1][1] = p1 - p2 + p3 + p6;
}

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int c[2][2];

    strassenMatrixMultiplication(a, b, c);

    printf("Resultant Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
