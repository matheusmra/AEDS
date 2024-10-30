#include <stdio.h>


int soma(int arranjo[], int tam){
    int total = 0;
    for(int i = 0; i < tam; i++){
        total += arranjo[i];
    }
    return total;
}

int media(int arranjo[], int tam){
    int total = 0;
    for(int i = 0; i < tam; i++){
        total += arranjo[i];
    }
    return total/tam;
}

int search(int arranjo[], int tam, int media){
    int total = 0;
    for(int i = 0; i < tam; i++){
        if(arranjo[i] == media){
            total++;
        }
    }
    if(total > 0){
    return total;
    }else{
    return -1;
    }
}

int main(){
    int n = 0;
    scanf("%d", &n);
    int arranjo[n];
    if(n <= 100){
        for(int i = 0; i < n; i++){
            scanf("%d", &arranjo[i]);
        }
    }
    int somatotal = soma(arranjo,n);
    int mediatotal = media(arranjo,n);
    int procurado = search(arranjo,n,mediatotal);
    printf("%d", n);
    printf(" %d", somatotal);
    printf(" %d", procurado);

}
