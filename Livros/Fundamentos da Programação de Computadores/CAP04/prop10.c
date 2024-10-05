#include <stdio.h>


double consumidor(double pf){
    double resultado = 0.0;
    if(pf <= 12000){
        resultado = pf + (pf * 0.05);
    }else if(pf > 12000 && pf <= 25000){
        resultado = pf + (pf * 0.10) + (pf * 0.15);
     }else{
        resultado = pf + (pf * 0.15) + (pf * 0.20);
     }
     return resultado;

}


int main(){
    double carro = 0.0;
    scanf("%lf", &carro);
    printf("CUSTO DE FABRICA = %.2f", carro);
    printf("\nPRECO CONSUMIDOR = %.2f", consumidor(carro));

}
