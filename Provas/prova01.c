/*
 Prova 01 - v0.0. - 09 / 10 / 2024
 Author: Matheus de Almeida Moreira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o prova01 prova01.c
 Windows: gcc -o prova01 prova01.c
 Para executar em terminal (janela de comandos):
 Linux : ./prova01
 Windows: prova01
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
void question01(char v1){
    if(v1 == 'a' || v1 == 'A'){
        printf("A) %d = %d\n",(4/(2*2)/1), (4/2+2/4));
    }else if(v1 == 'b' || v1 == 'B'){
        printf("B) %d = %d\n", ((4/2)+(4/2)), (2-(4/2)+2*(4/2/2)));
    }else if(v1 == 'c' || v1 == 'C'){
        printf("C) %d = %d\n", ((4+2)*2/4), (4*2*2/4));
    }else if(v1 == 'd' || v1 == 'D'){
        printf("D) %d = %d\n", (((4+2)/4)+(4*(4/2)/2)), ((2+2*4)/(2+4)+2));
    }

}

int p01() {
// identificacao
    printf( "\nExercicio 01:\n\n" );
    opcoes01();
    char v1 = 'a';
    scanf("%c", &v1);
    question01(v1);
    getchar();
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}

int f_02a (int x) {
    int y = 0, z = 0, p = x;
    while (p > 4) {
        if (p % 10 % 2 == 0) {
            y = y + p % 10 - 1;
        } else {
            z = z / 10 + p % 10 + 1;
        }
        p = p / 10;
    }
    return (y + z);
}

void testar02(char v1){
    if(v1 == 'a' || v1 == 'A'){
    printf("A) 17 == %d\n   (CORRETA)", f_02a(567890));
    }else if(v1 == 'b' || v1 == 'B'){
    printf("B) 31 != %d\n   (ERRADA)", f_02a(567890));
    }else if(v1 == 'c' || v1 == 'C'){
    printf("C) 48 != %d\n   (ERRADA)", f_02a(567890));
    }else if(v1 == 'd' || v1 == 'D'){
    printf("D) 63 != %d\n   (ERRADA)", f_02a(567890));
    }else{
        printf("\nOP invalida");
    }
}

void opcoes02(){
    printf("A) 17");
    printf("\nB) 31");
    printf("\nC) 48");
    printf("\nD) 63\n");

}



void p02() {
// identificacao
    printf( "\nExercicio 02:\n\n" );
    opcoes02();
    char v1 = 'a';
    scanf("%c", &v1);
    testar02(v1);
    getchar();
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}

int f_03(char *text){
    int a = 0, x = 0, t = strlen(text);
    if( t > 0){
        a = (text[0]-48+text[t-1]-48);
        for(x=0; x<t-2;x++){
            text[x]=text[x+1];
        }
        text[x]='\0';
        a = a + f_03 (text);
    }
    return (a);
}

void opcoes03 (){
    printf("\na) 7");
    printf("\nb) 14");
    printf("\nc) 18");
    printf("\nd) 21");
}

void testar03(char v1, char text[]){
    if(v1 == 'a' || v1 == 'A'){
    printf("A) 7 != %d\n   (INCORRETA)", f_03(text));
    }else if(v1 == 'b' || v1 == 'B'){
    printf("B) 14 != %d\n   (INCORRETA)", f_03(text));
    }else if(v1 == 'c' || v1 == 'C'){
    printf("C) 18 != %d\n   (INCORRETA)", f_03(text));
    }else if(v1 == 'd' || v1 == 'D'){
    printf("D) 21 == %d\n   (CORRETA)", f_03(text));
    }else{
        printf("\nOP invalida");
    }
}

void p03() {
// identificacao
    printf( "\nExercicio 03:\n\n" );
    opcoes03();
    char text[] = "123456";
    char v1 = 'a';
    printf("\nEscolha a letra:");
    scanf("%c", &v1);
    testar03(v1,text);
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}

int f_04(int a, int b){
    while(a>0 && b>0 && a>= b){
        a =a - b;
        if(a < b){
            a = a+b;
            b = a-b;
            a = a-b;
        }
    }
    return (a);
}
void opcoes04 (){
    printf("\na) 12");
    printf("\nb) 8");
    printf("\nc) 6");
    printf("\nd) 4");
}
void testar04(char v1){
    if(v1 == 'a' || v1 == 'A'){
    printf("A) 12 != %d\n   (INCORRETA)", f_04(54,24));
    }else if(v1 == 'b' || v1 == 'B'){
    printf("B) 8 != %d\n   (INCORRETA)", f_04(54,24));
    }else if(v1 == 'c' || v1 == 'C'){
    printf("C) 6 == %d\n   (CORRETA)", f_04(54,24));
    }else if(v1 == 'd' || v1 == 'D'){
    printf("D) 4 != %d\n   (INCORRETA)", f_04(54,24));
    }else{
        printf("\nOP invalida");
    }
}

void p04() {
// identificacao
    printf( "\nExercicio 04:\n\n" );
    opcoes04();
    char v1 = 'a';
    printf("\nEscolha a letra:");
    scanf("%c", &v1);
    testar04(v1);
    getchar();
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}

void opcoes05 (){
    printf("\na) f_05( 7) = 128");
    printf("\nb) f_05( 8) = 164");
    printf("\nc) f_05( 9) = 208");
    printf("\nd) f_05( 10) = 252");
}

int f_05(int n) {
    int s = 0, z = 0;
    while (n > 0) {
        z = z + 4;
        if (z % 5 == 0) {
            n = n + 1; // Isso pode fazer o loop não terminar
        } else {
            s = s + z;
        }
        n = n - 1; // Decrementa n
    }
    return s;
}


void p05() {
    // Identificação
    printf("\nExercicio 05:\n\n");
    opcoes05();
    char v1 = 'a';
    int a = 7, b = 8, c = 9, d = 10;
    printf("\nEscolha a letra:");
    scanf("%c", &v1);
    if(v1 == 'a' || v1 == 'A'){
    printf("A = %d\n   (INCORRETA)", f_05(a));
    }else if(v1 == 'b' || v1 == 'B'){
    printf("B = %d\n   (INCORRETA)", f_05(b));
    }else if(v1 == 'c' || v1 == 'C'){
    printf("C = %d\n   (INCORRETA)", f_05(c));
    }else if(v1 == 'd' || v1 == 'D'){
    printf("D = %d\n   (CORRETA)", f_05(d));
    }else{
        printf("\nOP invalida");
    }
    getchar();
    // Encerrar
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}


void p06() {
// identificacao
    printf( "\nExercicio 06:\n\n" );
    // programa
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}




void p07() {
// identificacao
    printf( "\nExercicio 07:\n\n" );
    // encerrar
    getchar();
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex0917




void p08() {
// identificacao
    printf( "\nExercicio 08:\n\n" );
    // encerrar
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
