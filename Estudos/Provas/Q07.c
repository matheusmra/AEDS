#include <stdio.h>

#include <string.h>

int dnarna(const char nucleo[]){
    int t = 0,u = 0, dna = 0;
    for(int i = 0; i < strlen(nucleo); i++){
    if(nucleo[i] == 'T'){
            t++;
        }else if(nucleo[i] == 'U'){
            u++;
        }
    }
    if(t > 0 && u == 0){
            return 1;
        }else if(t == 0 && u > 0){
            return 2;
        }else if(t == 0 && u == 0){
            return 0;
        }else{
            return 3;
        }

}

void verifica(int v1){
    if(v1 == 1){
        printf("DNA");
    }else if(v1 == 2){
        printf("RNA");
    }else if(v1 == 0){
        printf("Indefinido");
    }else{
        printf("ERRO");
    }


}

int main(){
    char string[100];
    scanf("%s", string);
    int resultado = dnarna(string);
    verifica(resultado);



}
