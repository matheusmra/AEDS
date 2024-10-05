#include <stdio.h>


double reajuste(double salario){
    if(salario <= 500){
        salario = salario * 1.30;
        printf("Salario com reajuste de 30 porcento = %.2f", salario);
    }else{
        printf("Nao tem direito a reajuste");
    }

}

int main(){
    double salario = 0.0;
    scanf("%lf", &salario);
    reajuste(salario);

}
