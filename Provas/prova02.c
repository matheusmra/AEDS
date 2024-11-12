/*
 Prova 02 - v0.0. - 12 / 11 / 2024
 Author: Matheus de Almeida Moreira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o prova02 prova02.c
 Windows: gcc -o prova02 prova02.c
 Para executar em terminal (janela de comandos):
 Linux : ./prova02
 Windows: prova02
*/

// dependencias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
// Tamanho max string
const int TAM_STR = 80;
// Função para mostrar o menu de opções
void menuOpcoes() {
    printf("\nEscolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Questao 01\n");
    printf("  2 - Questao 02\n");
    printf("  3 - Questao 03\n");
    printf("  4 - Questao 04\n");
    printf("  5 - Questao 05\n");
    printf("  6 - Questao 06\n");
    printf("  7 - Questao 07\n");
    printf("  8 - Questao 08\n");
}
void question01(int n, char text[]){
    for(int x = n/2; x < n; x++){
        text[n+1]=text[x];
        text[x] = text[n-x];
        text[n-x] = text[n+1];
        text[n+1] = '\0';
    }

}
void opcoes01(){
    printf("A) patso");
    printf("\nB) patos");
    printf("\nC) posta");
    printf("\nD) potsa");
}

int p01() {
// identificacao
    printf( "\nExercicio 01:\n\n" );
    opcoes01();
    char p1[]= "pasto";
    question01(5,p1);
    printf("\nAlternativa correta: (C) = %s\n", p1);
    getchar();
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}

void p_02(int v, int m, int n, int a[]){
    int z = 0;
    for(int x = 1; x <=v; x++){
    for(int y = n - 1; y >= 1; y--){
        z=a[y];
        a[y] = a[y-1];
         a[y-1] = z;
    }
    }
    printf("\nAlternativa correta: (C) = ");
    for(int i = 0; i < 10; i++){
    printf(" %d", a[i]);
    }



}

void opcoes02(){
    printf("A) p:(n), q:(x>m+1)");
    printf("\nB) p:(n), q:(x>m-1)");
    printf("\nC) p:(n-1), q:(x>m)");
    printf("\nD) p:(n-1), q:(x>=m)\n");

}



void p02() {
// identificacao
    printf( "\nExercicio 02:\n\n" );
    opcoes02();
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    p_02(3,0,10,a);
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}

int f_03(int n, int m[][n]){
    int z = 0;
    for(int x = 0; x <n; x++){
        for(int y =0; y < n; y++){
            if(x-y<0 && x+1<n-y){
                z = z+m[x][y];
            }
        }
    }
    return (z);
}

void opcoes03 (){
    printf("\na) 9");
    printf("\nb) 13");
    printf("\nc) 15");
    printf("\nd) 17");
}


void p03() {
// identificacao
    printf( "\nExercicio 03:\n\n" );
    opcoes03();
    int m[][5] = {{1,2,3,4,5},{2,1,4,5,3},{3,4,5,2,1},{4,5,1,3,2},{5,3,2,1,4}};
    printf("\nAlternativa correta: (B) = %d", f_03(5,m));
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}

int f_04(int m, char * text1, int n, char * text2){
    int result = 0;
    if(text1 && text1[m] != '\0' && text2 && text2[n] != '\0'){
        if(text1[m] != text2[n])
            result = 0 + f_04 (m+1, text1,n,text2);
        else
            result = 1 + f_04(m+1,text1,n+1,text2);
    }
    return result;
}
void opcoes04 (){
    printf("\na) 5");
    printf("\nb) 4");
    printf("\nc) 3");
    printf("\nd) 2");
}


void p04() {
// identificacao
    printf( "\nExercicio 04:\n\n" );
    opcoes04();
    char p1[] = "pista";
    char p2[] = "despistar";
    printf("\nAlternativa correta: (A) = %d", f_04(0,p2,0,p1));
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}

void opcoes05 (){
    printf("\na) (3,15/16)");
    printf("\nb) (3,31/32)");
    printf("\nc) (3,63/64)");
    printf("\nd) (3,124/128)");
}

struct s_Fraction{
    int x, y, z;
};
struct s_Fraction f_05(double a){
    struct s_Fraction f = {0,0,0};
    int y = 2;
    if(a > 0){
        f.x = (int)a;
        a = (a-f.x);
    }
    f.y = (int)(a*128);
    f.z = 128;
    while(y <= 64)
    if(f.y%y==0 && f.z%y==0){
        f.y=f.y/y;
        f.z=f.z/y;
    }
    else
        y = y*2;
    return (f);


};

void p05() {
    // Identificação
    printf("\nExercicio 05:\n\n");
    opcoes05();
    struct s_Fraction a = f_05(3.94);
    printf("\nAlternativa correta: (A) = (%d,%d/%d)\n", a.x, a.y, a.z);
    // Encerrar
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}

bool bissexto(int ano){
    bool resposta = false;
    int controle1 = ano, controle2 = ano, controle3 = ano;
    while(controle1 > 0){
        controle1 = controle1 - 400;
    }
    while(controle2 > 0){
        controle2 = controle2 - 100;
    }
    while(controle3 > 0){
        controle3 = controle3 - 4;
    }
    if(controle1 == 0){
        resposta = true;
    }else if(controle2 != 0){
        resposta = false;
    }else if(controle3 == 0){
        resposta = true;
    }
    return(resposta);
}


void p06() {
// identificacao
    printf( "\nExercicio 06:\n" );
    // programa
    int ano = 0;
    printf("\nDigite o ano:\n");
    scanf("%d", &ano);
    if (bissexto(ano)) {
        printf("%d eh um ano bissexto.\n", ano);
    } else {
        printf("%d nao eh um ano bissexto.\n", ano);
    }
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}


int sum(int num) {
    int soma = 0;
    while (num > 0) {
        soma += num % 10;
        num /= 10;
    }
    return soma;
}

int f_07(const char *name){
    FILE *f = fopen(name, "r");
        if(f!=NULL){
            int rows = 0, cols = 0;
                fscanf(f,"%d", &rows);
                fscanf(f,"%d", &cols);
            int maior = 0; int menor = 1000, maiori = 0, maiorj = 0, menori = 0, menorj =0;
            int matriz[rows][cols];
            for(int i = 0; i < rows; i++){
                for(int j = 0; j < cols; j++){
                    fscanf(f, "%d", &matriz[i][j]);
                    if(matriz[i][j] > maior){
                        maior = matriz[i][j];
                        maiori = i;
                        maiorj = j;
                    }
                    if(matriz[i][j] < menor){
                        menor = matriz[i][j];
                        menori = i;
                        menorj = j;
                    }

                }
            }
            if(maiori == menori || maiorj == menorj){
               return 1;
            }else{
                return -1;
            }
            fclose(f);
        }
}

void p07() {
    printf("\nExercicio 07:\n\n");
    int n = f_07("MATRIZ.txt");
    printf("%d", n);
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}


void opcoes08(){
    printf("\n1) Codigo original");
    printf("\n2) Codigo atualizado");
    printf("\nEscolha qual codigo voce quer testar:\n");
}

void escolha(int n){
    char v1[TAM_STR], v2[TAM_STR];
    int total1 = 0, total2 = 0;
    if(n==1){
        printf("\nDigite a primeira cadeia:\n");
        scanf("%s", &v1);
        printf("\nDigite a segunda cadeia:\n");
        scanf("%s", &v2);
        minhasolucao(v1,v2);
    }else if(n == 2){
        printf("\nDigite a primeira cadeia:\n");
        scanf("%s", &v1);
        printf("\nDigite a segunda cadeia:\n");
        scanf("%s", &v2);
        total1 = solucaoupdate(v1);
        total2 = solucaoupdate(v2);
        printar(total1,total2,v1,v2);
    }
}

void p08() {
// identificacao
    int n = 0;
    printf( "\nExercicio 08:\n\n" );
    opcoes08();
    scanf("%d", &n);
    escolha(n);
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}


// Função principal
int main(void) {
    int opcao;

    do {
        menuOpcoes(); // Chama a função que exibe as opções

        printf("\nOpcao = ");
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer de entrada

        // Executar a opção escolhida
        switch (opcao) {
            case 0: break;
            case 1: p01(); break;
            case 2: p02(); break;
            case 3: p03(); break;
            case 4: p04(); break;
            case 5: p05(); break;
            case 6: p06(); break;
            case 7: p07(); break;
            case 8: p08(); break;
            default:
                printf("\nERRO: OPCAO INVALIDA\n\n");
                break;
        } // fim switch

    } while (opcao != 0);

    printf("\nAperte ENTER para terminar!\n");
    getchar();

    return 0;
} // Fim da função principal
