/*
 0214 - v0.0. - 20 / 08 / 2023
 Author: Matheus de Almeida Moreira - 848813

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o 0214 0214.c
 Windows: gcc -o 0214 0214.c
 Para executar em terminal (janela de comandos):
 Linux : ./0214
 Windows: 0214
*/
#include<stdio.h>
void verificarIntervaloFechado(int numero) {
    if (numero >= 20 && numero <= 60) {
        printf("%d faz parte do intervalo de 20 e 60.", numero);
    }else{
        printf("%d nao faz parte do intervalo.", numero);}
}
int main(){
    int n;
    scanf("%d", &n);
    verificarIntervaloFechado(n);
}
