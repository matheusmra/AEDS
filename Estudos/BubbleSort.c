#include <stdio.h>

void bubbleSortRecursivo(int *v, int n){
    if(n<2){
    return;
    }
    for(int i = 0; i < n-1; i++){
        if(v[i]>v[i+1]){
            int aux = v[i];
            v[i] = v[i+1];
            v[i+1]=aux;
        }
    }
    bubbleSortRecursivo(v, n-1);
}

void printar(int *v,int tam){
    printf("NUMEROS FORA DE ORDEM");
    for(int i = 0; i<tam; i++){
        printf("\n%d", v[i]);
        printf("\n");
    }

}

void printarResultado(int *v,int tam){
    printf("\nNUMEROS ORDENADOS:");
    for(int i = 0; i<tam; i++){
        printf("\n%d", v[i]);
        printf("\n");
    }

}

int main(){
    int vetor[] = {5,10,20,30,4,1,2};
    int tamanho = 7;
    printar(vetor,tamanho);
    bubbleSortRecursivo(vetor, tamanho);
    printarResultado(vetor, tamanho);

}
