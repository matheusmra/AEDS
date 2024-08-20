/*
 0211 - v0.0. - 20 / 08 / 2023
 Author: Matheus de Almeida Moreira - 848813

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 0211 0211.c
 Windows: gcc -o 0211 0211.c
 Para executar em terminal (janela de comandos):
 Linux : ./0211
 Windows: 0211
*/
#include<stdio.h>
void verificar(int numero) {
    if (numero % 2 == 0) {
        printf("\n%d eh um numero par.", numero);
    } else {
        printf("\n%d eh um numero impar.", numero);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    verificar(n);
}
