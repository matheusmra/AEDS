// 999999 AED1

#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

#include <math.h>

#include <string.h>

#define MAX_STRING 10
/* Funcao inteira para

dizer a quantidade de diferencas

entre duas cadeias de caracteres.

@return quantidade de diferencas;

  -1, em caso de erro
@param c1 - primeira cadeia de caracteres

@param c2 - primeira cadeia de caracteres

*/

int diferenca(const char *c1, const char *c2) {
    int total = 0;
    while (*c1 && *c2){
        if (*c1 != *c2){
            total++;
        }
        c1++;
        c2++;
    }

    total += abs(strlen(c1) - strlen(c2));
    return total;
}

/*

Funcao inteira para

dizer qual par possui a menor quantidade

de diferencas.

@return 1, se par (c1,c2);

   2, se par (c2,c3);
   3, se par (c1,c3);
   0, caso empate
@param c1, primeira cadeia de caracteres

@param c2, segunda cadeia de caracteres

@param c3, terceira cadeia de caracteres

*/

int menor_diferenca(const char *c1, const char *c2, const char *c3) {
    int r1 = diferenca(c1, c2);
    int r2 = diferenca(c1, c3);
    int r3 = diferenca(c2, c3);

    if (r1 < r2 && r1 < r3) {
        return 1;
    } else if (r2 < r1 && r2 < r3) {
        return 2;
    } else if (r3 < r1 && r3 < r2) {
        return 3;
    }else{
    return 0;
    }
}

int main(void) {
    char c1[MAX_STRING], c2[MAX_STRING], c3[MAX_STRING];
    int total = 0;
    scanf("%s %s %s", c1, c2, c3);
    if (strcmp(c1, c2) == 0 || strcmp(c1, c3) == 0 || strcmp(c2, c3) == 0) {
        printf("%s %s %s\n", c1, c2, c3);
    }
    total = menor_diferenca(c1, c2, c3);
    if (total == 1) {
        printf("%s %s\n", c1, c2);
    } else if (total == 2) {
        printf("%s %s\n", c1, c3);
    } else if (total == 3) {
        printf("%s %s\n", c2, c3);
    }

    return 0;
}
