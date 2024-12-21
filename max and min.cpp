#include <stdio.h>
#include <stdlib.h>

void findMthMaxNMin(int arr[], int n, int M, int N) {
    if (M <= 0 || N <= 0 || M > n || N > n) {
        printf("Illegal input\n");
    
	   return;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int MthMax = arr[n - M];
    int NthMin = arr[N - 1];
    printf("Sum: %d, Difference: %d\n", MthMax + NthMin, MthMax - NthMin);
}

int main() {
    int n, M, N;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter M (M-th maximum): ");
    scanf("%d", &M);
    printf("Enter N (N-th minimum): ");
    scanf("%d", &N);
    findMthMaxNMin(arr, n, M, N);
    return 0;
}
