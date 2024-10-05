#include <stdio.h>


int main(){
    int n = 6;
    int vet[n];
    int totalp = 0, totali = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i < n; i++){
        if(vet[i]%2==0){
            totalp++;
            printf("\n%d EH PAR", vet[i]);
        }else{
            totali++;
            printf("\n%d EH IMPAR", vet[i]);
        }

    }

    printf("\nTOTAL DE NUMEROS PARES = %d", totalp);
    printf("\nTOTAL DE NUMEROS IMPARES = %d", totali);

}
