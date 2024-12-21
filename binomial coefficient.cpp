#include <stdio.h>

int binomialCoefficient(int n, int k) {
    int dp[n + 1][k + 1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (j == 0 || j == i)
                dp[i][j] = 1;
            else if (j > i)
                dp[i][j] = 0;
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }
    return dp[n][k];
}

int main() {
    int n, k;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of k: ");
    scanf("%d", &k);
    if (k > n || n < 0 || k < 0) {
        printf("Illegal input\n");
        return 0;
    }
    printf("Binomial Coefficient of %dC%d: %d\n", n, k, binomialCoefficient(n, k));
    return 0;
}

