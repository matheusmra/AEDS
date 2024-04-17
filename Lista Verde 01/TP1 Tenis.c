#include <stdio.h>

int main() {
    //ENTRADA
    char resultado;
    int v = 0, i;
    //PROCESSAMENTO
    for(i = 0; i < 6; i++) {
        scanf(" %c", &resultado);
        if(resultado == 'V') {
            v++;
        }
    }
    //SAIDA
    if(v >= 5) {
        printf("1\n");
    } else if(v >= 3) {
        printf("2\n");
    } else if(v >= 1) {
        printf("3\n");
    } else {
        printf("-1\n");
    }
}
