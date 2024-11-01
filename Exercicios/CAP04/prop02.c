#include <stdio.h>


double media(double nota1, double nota2){
    double resultado = 0.0;
    resultado = (nota1+nota2)/2;
    return resultado;
}
void testar(double resultado){
    if(resultado >=0 && resultado <= 3){
    printf("REPROVADO");
    }else{
    if(resultado > 3 && resultado <= 7){
    printf("EXAME");
    }else{
    if(resultado > 7 && resultado <=10){
    printf("APROVADO");
        }
        }
    }
}

int main(){
    double nota1 = 0.0, nota2 = 0.0;
    scanf("%lf %lf", &nota1, &nota2);
    double resultado = media(nota1, nota2);
    testar(resultado);


}
