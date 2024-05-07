
#include <stdio.h>

int main() {
    int N, i;
    float notas[100], soma = 0.0, maior, menor, media;

    //Preenchimento do vetor
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%f", &notas[i]);
    }

   //Processamento do vetor
    maior = menor = notas[0];

    for(i = 0; i < N; i++) {
        if(notas[i] > maior) {
            maior = notas[i];
        }
        if(notas[i] < menor) {
            menor = notas[i];
        }
        soma += notas[i];
    }

    media = soma / N;

    printf("%.1f", maior);
    printf(" %.1f", menor);
    printf(" %.1f", media);

}
