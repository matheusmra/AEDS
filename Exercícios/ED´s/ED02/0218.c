/*
 0218 - v0.0. - 20 / 08 / 2023
 Author: Matheus de Almeida Moreira - 848813

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 0218 0218.c
 Windows: gcc -o 0218 0218.c
 Para executar em terminal (janela de comandos):
 Linux : ./0218
 Windows: 0218
*/
#include <stdio.h>

void verificarNumeros(int numero1, int numero2) {
    if (numero1 < (numero2 / 2)) {
    printf("O numero %d eh menor que a metade de %d", numero1, numero2);
}else if(numero1 == (numero2 / 2)){
    printf("O numero %d eh a metade de %d", numero1, numero2);
}else if(numero1 > (numero2 / 2)){
    printf("O numero %d eh maior que a metade de %d", numero1, numero2);
}
}
int main() {
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &n2);
    verificarNumeros(n1, n2);
    return 0;
}
