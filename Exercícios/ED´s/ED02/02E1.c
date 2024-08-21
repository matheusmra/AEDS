#include <stdio.h>

// Implementação do procedimento
void ex02E1(void) {
    char a = 'a', b = 'b', c='c';
        // identificacao
    printf( "\nExercicio 02E1:\n\n" );
    printf("Digite tres valores literais (caracteres):");
    scanf(" %c %c %c", &a, &b, &c);
    if ((a == b) || (a == c)) {
        printf("%c eh igual a pelo menos um dos outros valores.\n", a);
    } else if ((a > b && a < c) || (a < b && a > c)) {
        printf("%c esta entre %c e %c.\n", a, b, c);
    } else {
        printf("%c nao esta entre %c e %c.\n", a, b, c);
    }
}
int main(){
    ex02E1();
}
