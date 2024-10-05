#include <stdio.h>

double media(double nota[], int notas){
    double med = 0.0;
    for(int i = 0; i < notas; i++){
    med += nota[i];
    }
    med = med/4.0;
    return med;
}

int main(){
    double notas[4] = {0.0, 0.0, 0.0, 0.0};
    for(int i = 0; i < 4; i++){
        scanf("%lf", &notas[i]);
    }
    double resultado = media(notas,4);
    if(resultado >= 7){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
}
