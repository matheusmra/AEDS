#include <stdio.h>
#include <math.h>
#include <string.h>

int verificarcadeia(char cadeia[]){
    int soma = 0, somacubo = 0;
    for(int i = 0; i < strlen(cadeia); i++){
        soma += cadeia[i];
    }
    for(int i = 0; i < strlen(cadeia); i++){
        soma += cadeia[i];
        somacubo += pow(cadeia[i], 3);
    }
    soma = pow(soma,2);
     printf("%d", somacubo);
      printf("\n%d", soma);
    if(soma == somacubo){
        return 1;
    }else{
        return 0;
    }


}

int main(){
    char string[100];
    scanf("%s", string);
    int total = verificarcadeia(string);
    if(total == 1){
        printf("\nSucesso");
    }else{
        printf("\nErro");
    }

}

