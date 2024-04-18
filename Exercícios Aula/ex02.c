#include<stdio.h>
int main(){
    int n, somat = 0, somalinha = 0;
    printf("Digite o numero de linhas e colunas: ");
    scanf("%d", &n);
    int matriz[n][n];
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            printf("Digite o conteudo da linha %d e coluna %d", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i<n; i++){
        printf("Linha %d ", i);
    for(int j =0; j<n; j++){
        printf("%d \t", matriz[i][j]);
    }
        printf("\n");
    }
    //soma diagonal principal
    int dp=0;
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                dp = dp + matriz[i][j];
            }
        }
    }
    //soma diagonal secundaria
    int ds=0;
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j == n - 1){
                ds = ds + matriz[i][j];
            }
        }
    }
    //soma triangulo inferior
    int tf=0;
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i>j){
                tf = tf + matriz[i][j];
            }
        }
    }
    //maior elemento
    int maior= matriz[0][0];
    int l, col;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(matriz[i][j] > maior){}
            maior = matriz[i][j];
            l = i;
            col = j;
        }
    }
    printf("Soma da diagonal principal: %d", dp);
    printf("\nSoma da diagonal secundaria: %d", ds);
    printf("\nSoma do triangulo inferior: %d", tf);
    printf("\nO maior elemento eh:%d e sua posicao eh:%d %d",maior ,l , col);
}
