#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"
void pMatriz (int n, int matriz [][n]){ // PREENCHE A MATRIZ (LETRA A)
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            matriz [i] [j] = rand()%100;
        }
    }
}

void iMatriz (int n, int matriz [][n]){ // IMPRIME A MATRIZ (LETRA C)
    printf("\nImprimindo matriz\n");
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            printf("%d \t", matriz [i][j]);
        }
        printf("\n");
    }
}

void sMatriz (int n, int matriz [][n], int matriz2 [][n], int matriz3 [][n]){ // SOMA MATRIZES (LETRA B)
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            matriz3 [i][j] = matriz [i][j] + matriz2 [i][j];
        }
    }
}
