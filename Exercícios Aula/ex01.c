
#include<stdio.h>


int main(){
    int nlinha, ncoluna, somat = 0, somalinha = 0;
    printf("Digite o numero de linhas: ");
    scanf("%d", &nlinha);
    printf("\nDigite o numero de colunas: ");
    scanf("%d", &ncoluna);
    int matriz[nlinha][ncoluna];
    int vetor[nlinha];
    for(int i = 0; i<nlinha; i++){
        for(int j =0; j<ncoluna; j++){
            printf("Digite o conteudo da linha %d e coluna %d", i, j);
            scanf("%d", &matriz[i][j]);
            somat = somat+matriz[i][j];

        }
    for(int i =0; i<nlinha; i++){
        for(int j = 0; j<ncoluna; j++){
            somalinha = somalinha + matriz[i][j];
        }
        vetor[i] = somalinha;
        somalinha = 0;
    }
    }
    for(int i = 0; i<nlinha; i++){
        printf("Linha %d ", i);
    for(int j =0; j<ncoluna; j++){
        printf("%d \t", matriz[i][j]);
    }
        printf("\n");

    }
    printf("\nSoma total: %d", somat);
    for(int i=0; i<nlinha; i++){
        printf("\n Soma da linha: %d", vetor[i]);
    }
}
