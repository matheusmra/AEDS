#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int vetor[n];
    for(int i=0; i<n; i++){
        scanf("%d",&vetor[i]);
    }
    int maior=0;
    int pos;
    for(int i=0; i<n; i++){
        if(vetor[i] >= maior){
            maior = vetor[i];
            pos = i;
        }
    }
    printf("%d %d",maior,pos);
}
