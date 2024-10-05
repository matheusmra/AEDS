#include <stdio.h>

int printarMenu(){
    printf("\nMENU DE OPCOES");
    printf("\n1 - MEDIA ENTRE OS NUMEROS");
    printf("\n2 - DIFERENCA DO MAIOR PELO MENOR");
    printf("\n3 - PRODUTO ENTRE OS NUMEROS DIGITADOS");
    printf("\n4 - DIVISAO DO PRIMEIRO PELO SEGUNDO");
}
int maior(int n1, int n2){
    if(n1 > n2){
    return n1;
    }else{
    return n2;
    }
}
int menor(int n1, int n2){
    if(n1 > n2){
    return n2;
    }else{
    return n1;
    }
}

void op1(int n1, int n2){
    int media = 0;
    media = (n1+n2)/2;
    printf("Media = %d", media);
    getchar();
}

void op2(int n1, int n2){
    int maior1 = maior(n1,n2);
    int menor1 = menor(n1,n2);
    int resultado = maior1-menor1;
    printf("%d", resultado);
    getchar();

}

void op3(int n1, int n2){
    int resultado = n1*n2;
    printf("%d", resultado);
    getchar();

}

void op4(int n1, int n2){
    if(n1 > 0){
    int resultado = n1/n2;
    printf("%d", resultado);
    }else{
    printf("ERRO");
    }
    getchar();
}

int main(){
    int op = 0, n1 = 0, n2 = 0;
    scanf("%d %d", &n1, &n2);
    do {
        printarMenu(); // Chama a fun��o que exibe as op��es

        printf("\nOpcao = ");
        scanf("%d", &op);
        getchar(); // Limpar o buffer de entrada

        // Executar a op��o escolhida
        switch (op) {
            case 0: break;
            case 1: op1(n1, n2); break;
            case 2: op2(n1, n2); break;
            case 3: op3(n1, n2); break;
            case 4: op4(n1, n2); break;
            default:
                printf("\nERRO: OPCAO INVALIDA\n\n");
                break;
        } // fim switch

    } while (op != 0);

    printf("\nAperte ENTER para terminar!\n");
    getchar();

    return 0;
} // Fim da fun��o principal




