#include <stdio.h>

void printFactors(int n) {
    printf("Factors of %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n = 28;
    printFactors(n);
    return 0;
}
