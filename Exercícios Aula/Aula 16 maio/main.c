#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"
int main()
{
    int n;
    printf("Digite o tamanho da matriz");
    scanf("%d", &n);
    int matriz [n][n];
    int matriz2 [n][n];
    int matriz3 [n][n];
    pMatriz(n, matriz);
    pMatriz(n, matriz2);
    iMatriz(n, matriz);
    iMatriz(n, matriz2);
    sMatriz(n,matriz,matriz2,matriz3);
    iMatriz(n, matriz3);
}

