#include <stdio.h>

double credito(double sm){
    double c = 0;
    if(sm > 400){
        c = sm * 0.30;
    }else if(sm <=400 && sm > 300){
        c = sm * 0.25;
    }else if (sm <= 300 && sm > 200){
        c = sm * 0.20;
    }else if(sm <= 200){
        c = sm * 0.10;
    }
    return c;
}


int main(){
    double saldo = 0.0;
    printf("Digite o seu saldo medio:");
    scanf("%lf", &saldo);
    printf("\nO seu credito eh de: %.2f", credito(saldo));


}
