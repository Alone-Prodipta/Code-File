//pascal triangle
#include <stdio.h>

int main() {
    int n, i, j, val;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf("  "); // double space for better triangle shape
        }

        val = 1;
        for (j = 0; j <= i; j++) {
            printf("%4d", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}