#include <stdio.h>

int main() {
    int numero, inv;

    scanf("%d", &numero);
    while(numero != 0) {
        inv = numero % 10;
        printf("%d", inv);
        numero = numero/10;
    }

    printf("\n");

}
