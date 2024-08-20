/*
 0217 - v0.0. - 20 / 08 / 2023
 Author: Matheus de Almeida Moreira - 848813

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 0217 0217.c
 Windows: gcc -o 0217 0217.c
 Para executar em terminal (janela de comandos):
 Linux : ./0217
 Windows: 0217
*/
#include <stdio.h>

void verificarNumeros(int numero1, int numero2) {
    if (numero1 % 2 != 0 && numero1 < 0 && numero2 % 2 == 0 && numero2 > 0) {
    printf("O primeiro numero: %d eh impar e negativo e o Segundo numero: %d eh par e positivo.", numero1, numero2);
}   else{
    printf("ERRO! O programa foi feito para identificar se o primeiro numero eh impar e o segundo par");}
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
