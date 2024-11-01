double reajuste(double salario){
    if(salario <= 300){
        salario = salario * 1.35;
        printf("Salario com reajuste de 35 porcento = %.2f", salario);
    }else{
        salario = salario * 1.15;
        printf("Salario com reajuste de 15 porcento = %.2f", salario);
    }

}

int main(){
    double salario = 0.0;
    scanf("%lf", &salario);
    reajuste(salario);

}
