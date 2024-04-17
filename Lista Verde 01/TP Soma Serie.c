#include <stdio.h>

int main() {
    int n, i;
    float S;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        S += (2.0 * i - 1) / i;
    }

    printf("%.2lf", S);
}
