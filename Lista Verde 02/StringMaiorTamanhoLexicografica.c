#include<stdio.h>
#include<string.h>


int main(){
    int t;
    scanf("%d", &t);
    getchar();

    char str[t][100];
    char tamanho[100]="";
    char talfabeto[100]="";


    for(int i = 0; i < t+1; i++){
        fgets(str[i], 100,stdin);

        size_t len = strlen(str[i]);
        if (len > 0 && str[i][len - 1] == '\n') {
            str[i][len - 1] = '\0';
        }
        if(strlen(str[i]) > strlen(tamanho)){
            strcpy(tamanho, str[i]);
        }
        if(strcmp(str[i], talfabeto) > 0){
            strcpy(talfabeto, str[i]);
        }
    }
    printf("%s\n", tamanho);
    printf("%s\n", talfabeto);
}
