/*
 0216 - v0.0. - 20 / 08 / 2023
 Author: Matheus de Almeida Moreira - 848813

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 0216 0216.c
 Windows: gcc -o 0216 0216.c
 Para executar em terminal (janela de comandos):
 Linux : ./0216
 Windows: 0216
*/
#include <stdio.h>

void verificarNumeros(int numero1, int numero2) {
    if (numero1 % 2 == 0 && numero2 % 2 != 0) {
    printf("O primeiro numero: %d eh par e o Segundo numero: %d eh impar.", numero1, numero2);
}   else{
    printf("O programa foi feito para identificar se o primeiro numero eh par e o segundo impar");}
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
