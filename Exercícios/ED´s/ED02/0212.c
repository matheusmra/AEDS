/*
 0212 - v0.0. - 20 / 08 / 2023
 Author: Matheus de Almeida Moreira - 848813

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 0212 0212.c
 Windows: gcc -o 0212 0212.c
 Para executar em terminal (janela de comandos):
 Linux : ./0212
 Windows: 0212
*/
#include<stdio.h>
void verificarPareMaior(int numero) {
    if (numero % 2 == 0 && numero > 15) {
        printf("\n%d eh um numero par e maior que 15.", numero);
    } else {
        if(numero < -15){
        printf("\n%d eh um numero impar e menor que -15.", numero);
    }
}
}
int main(){
    int n;
    scanf("%d", &n);
    verificarPareMaior(n);
}
