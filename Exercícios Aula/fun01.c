#include <stdio.h>
#include <stdlib.h>
double soma (double,double);
double sub (double,double);
double multi (double,double);
double divisao (double,double);
double media (double,double);
void entrada(double *, double*);
int menu();
int main(){
    double num1,num2,resultado;
    int opcao;
    menu();
    do{
        opcao = menu();
        if (opcao > 0 && opcao < 6){
            entrada(&num1, &num2);
            if (opcao < 5) {
            switch (opcao) {
                case 1: resultado = soma(num1,num2);
                    break;
                case 2: resultado = sub(num1,num2);
                    break;
                case 3: resultado = multi(num1,num2);
                    break;
                case 4: resultado = divisao(num1,num2);
                    break;
                }
                printf("\t \t O resultado da operacao e: %lf\n", resultado);
    }else{
        printf("Obrigado \n");
        }
    }else{
        printf("Opcao invalida\n\n");
        }
        system("pause");
    } while(opcao !=5);
}
int menu(){
    int op;
    system("clear");
    printf("\t \t \t \t Menu de Opcoes");
    printf("\n 1) Soma");
    printf("\n 2) Subtracao");
    printf("\n 3) Multiplicacao");
    printf("\n 4) Divisao");
    printf("\n 5) Encerrar");
    printf("\nSelecione a opcao:");
    scanf("%d", &op);
    return op;
    }
void entrada(double *x, double *y){
    printf("Digite o primeiro numero:");
    scanf("%lf", x);
    printf("Digite o segundo numero:");
    scanf("%lf", y);
}
    double soma(double x, double y){
        return x+y;
    }
    double sub(double x, double y){
        return x-y;
    }
    double multi(double x, double y){
        return x*y;
    }
    double divisao(double x, double y){
        return x/y;
    }
