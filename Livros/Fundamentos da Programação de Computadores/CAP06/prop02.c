#include <stdio.h>


int main(){
    int n = 7;
    int vet[n];
    int total2 = 0, total3 = 0, total23 = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i < n; i++){
        if(vet[i]%3==0 && vet[i]%2==0){
            total23++;
            printf("\n%d EH MULTIPLO DE 2 e 3", vet[i]);
        }else if(vet[i]%2==0){
            total2++;
            printf("\n%d EH MULTIPLO DE 2", vet[i]);
        }else if(vet[i]%3==0){
            total3++;
            printf("\n%d EH MULTIPLO DE 3", vet[i]);
        }

    }

    printf("\nTOTAL DE NUMEROS MULTIPLOS DE 2 = %d", total2);
    printf("\nTOTAL DE NUMEROS MULTIPLOS DE 3 = %d", total3);
    printf("\nTOTAL DE NUMEROS MULTIPLOS DE 2 e 3 = %d", total23);

}
