/*
 Estudo Dirigido 04 - v0.0. - 03 / 09 / 2024
 Author: Matheus de Almeida Moreira

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o ed04 ed04.c
 Windows: gcc -o ed04 ed04.c
 Para executar em terminal (janela de comandos):
 Linux : ./ed04
 Windows: ed04
*/

// dependencias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// Função para mostrar o menu de opções
void menuOpcoes() {
    printf("\nEscolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Exercicio 0411\n");
    printf("  2 - Exercicio 0412\n");
    printf("  3 - Exercicio 0413\n");
    printf("  4 - Exercicio 0414\n");
    printf("  5 - Exercicio 0415\n");
    printf("  6 - Exercicio 0416\n");
    printf("  7 - Exercicio 0417\n");
    printf("  8 - Exercicio 0418\n");
    printf("  9 - Exercicio 0419\n");
    printf(" 10 - Exercicio 0420\n");
    printf(" 11 - Exercicio 04E1\n");
    printf(" 12 - Exercicio 04E2\n");
} // fim menuOpcoes()
// Função para testar se o caractere digitado é menor que m (minusculo)
int contarM(char v1[]) {
    int contagemM = 0;
    for(int i = 0; i < strlen(v1); i++)
    {
        if(( 64 < v1[i]) && (v1[i] < 77)){
            contagemM++;
        }
        }
    return contagemM;
}
//Função para contar total de letras menor que M e m
int contarm(char v1[]) {
    int contagem = 0;
    for(int i = 0; i < strlen(v1); i++ )
    {
        if( ( 96 < v1[i]) && (v1[i] < 109))
        {
            contagem++;
        }
    }
    return contagem;
}
void printarmenorm(char v1[]){
    for(int i = 0; i < strlen(v1); i++ )
    {
        if( ( 96 < v1[i]) && (v1[i] < 109))
        {
            printf("A letra: [%c] eh minuscula e menor que 'm'\n", v1[i]);
        }
    }
}

void printarmenorM(char v1[]){
    for(int i = 0; i < strlen(v1); i++ )
    {
        if( ( 64 < v1[i]) && (v1[i] < 77))
        {
            printf("A letra: [%c] eh maiuscula e menor que 'm'\n", v1[i]);
        }
    }
}

int contarmaiorM(char v1[]) {
    int contagemM = 0;
    for(int i = 0; i < strlen(v1); i++)
    {
        if((  77 < v1[i]) && (v1[i] < 91)){
            contagemM++;
        }
        }
    return contagemM;
}
//Função para contar total de letras menor que M e m
int contarmaiorm(char v1[]) {
    int contagem = 0;
    for(int i = 0; i < strlen(v1); i++ )
    {
        if( (109 < v1[i]) && (v1[i] < 123))
        {
            contagem++;
        }
    }
    return contagem;
}
//Função para testar se é numero impar
int impar(char v1[]) {
    int total = 0;
    for(int i = 0; i < strlen(v1); i++)
    {
        if((47 < v1[i] && v1[i] < 58 && v1[i] % 2 !=0)){
            total++;
        }
        }
    return total;
}
void printarmaiorm(char v1[]){
    for(int i = 0; i < strlen(v1); i++ )
    {
        if( ( 109 < v1[i]) && (v1[i] < 123))
        {
            printf("A letra: [%c] eh minuscula e maior que 'm'\n", v1[i]);
        }
    }
}

void printarmaiorM(char v1[]){
    for(int i = 0; i < strlen(v1); i++ )
    {
        if( ( 77 < v1[i]) && (v1[i] < 91))
        {
            printf("A letra: [%c] eh maiuscula e maior que 'M'\n", v1[i]);
        }
    }
}

void verchar(char v1[]){
    for(int i = 0; i < strlen(v1); i++){
        if( ( 32 < v1[i]) && (v1[i] < 48) || (57 < v1[i] && (v1[i]) < 65) || (90 < v1[i]) && (v1[i] < 97) || (122 < v1[i]) && (v1[i] < 127))
        {
            printf("O caracter: [%c] nao eh uma letra ou digito\n", v1[i]);
        }
    }

}


void alfanum(char v1[]) {
    for(int i = 0; i < strlen(v1); i++)
    {
        if((47 < v1[i] && v1[i] < 58) || (64 < v1[i] && v1[i] < 91) || (96 < v1[i] && v1[i] < 123)){
            printf("\n(%c) eh simbolo alfanumerico",v1[i]);
        }
        }

}

// Função para o exercício 0411
// - ler a quantidade de valores reais;
// - ler dois valores reais para definir um intervalo fechado;
// - ler tantos valores reais quanto a quantidade, um de cada vez e
// - contar quantos desses valores estão dentro do intervalo, e quantos estão fora dele

void ex0411()
{
    // identificacao
     printf("\nExercicio 0411:\n\n");

    // Programa
    double v1 = 0.0, v2 = 0.0;
    int n,totalp = 0, totalnp = 0;


    printf("Digite a quantidade de valores reais: ");
    scanf("%d", &n);

    double controle[n];

    printf("\nDigite o primeiro valor do intervalo: ");
    scanf("%lf", &v1);
    printf("\nDigite o segundo valor do intervalo: ");
    scanf("%lf", &v2);

    for(int i = 0; i < n; i++) {
        printf("Digite o valor: ");
        scanf("%lf", &controle[i]);
        if(controle[i] >= v1 && controle[i] <= v2){
            totalp++;
        }else{
        totalnp++;
        }
    }
    printf("Total de numeros dentro do intervalo: %d", totalp);
    printf("\nTotal de numeros fora do intervalo: %d", totalnp);
    getchar();
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    return 0;
} // fim exercicio0411

// Função para o exercício 0412
// - ler uma sequência de caracteres do teclado;
// - contar e mostrar a quantidade de letras minúsculas menores que 'm'.
// DICA: Definir uma função para determinar se um caractere é letra maiúscula.
// Exemplo: sequência = AaKkLmM0*Nx
void ex0412() {
    // identificacao
    printf( "\nExercicio 0412:\n\n" );
    char cadeia[80];
    int tam = 0, contagem = 0;
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    tam = strlen(cadeia);
    for(int i = 0; i < tam; i++ )
    {
        if( ( 96 < cadeia[i]) && (cadeia[i] < 109))
        {
            contagem++;
            printf("A letra: [%c] eh minuscula e menor que 'm'\n", cadeia[i]);
        }
    }
    printf("O total de letras minusculas menores que 'm' eh: %d", contagem);
    getchar();
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    return 0;
}// Fim da função ex0412

// Função para o exercício 0413
// - ler uma sequência de caracteres do teclado;
// - mostrar a quantidade de letras minúsculas menores que 'm',
// - definir e usar uma função para receber uma cadeia de caracteres como parâmetro e contar a quantidade desejada.
// Exemplo: sequência = AaKkLmM0*Nx
void ex0413() {
// identificacao
    printf( "\nExercicio 0413:\n\n" );
    // variáveis
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    contarm(cadeia);
    // Testar se o caractere é minusculo e menor que m
    printarmenorm(cadeia);
    printf("O total de letras minusculas menores que 'm' eh: %d ", contarm(cadeia));
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    return 0;

}// Fim da função ex0413

// Função para o exercício 0414
// - ler uma sequência de caracteres do teclado;
// - mostrar as letras minúsculas menores que 'm',
// - definir e usar uma função para receber uma cadeia de caracteres como parâmetro e separar em outra cadeia de caracteres os símbolos desejados.
// DICA: Usar concatenação para juntar a uma cadeia inicialmente vazia cada símbolo encontrado que satisfizer a condição.
// Exemplo: sequência = AaKkLmM0*Nx
void ex0414() {
// identificacao
    printf( "\nExercicio 0414:\n\n" );

    // programa

}// Fim da função ex0414

// Função para o exercício 0415
// - ler uma sequência de caracteres do teclado;
// - mostrar a quantidade de letras (tanto maiúsculas, quanto minúsculas) menores que 'M' e 'm' contadas por uma função definida para receber uma cadeia de caracteres como parâmetro.
// Exemplo: sequência = AaKkLmM0*Nx
void ex0415() {
// identificacao
    printf( "\nExercicio 0415:\n\n" );
    // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    contarM(cadeia);
    contarm(cadeia);
    printarmenorm(cadeia);
    printarmenorM(cadeia);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da função ex0415

// Função para o exercício 0416
// - ler uma sequência de caracteres do teclado;
// - mostrar as letras (tanto maiúsculas, quanto minúsculas) maiores que 'M' e 'm'
 //separadas por uma função definida para receber uma cadeia de caracteres como parâmetro.
//Exemplo: sequência = AaKkLmM0*Nx

void ex0416() {
// identificacao
    printf( "\nExercicio 0416:\n\n" );
    // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    contarmaiorM(cadeia);
    contarmaiorm(cadeia);
    printarmaiorm(cadeia);
    printarmaiorM(cadeia);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da função ex0416

// Função para o exercício 0417
// - ler uma sequência de caracteres do teclado;
// - mostrar a quantidade de dígitos ímpares em uma cadeia de caracteres contados por uma função
 //definida para receber uma cadeia de caracteres como parâmetro.
 //DICA: Considerar o valor inteiro do código equivalente (type casting) para teste.
//Exemplo: sequência = A1b2C3d4E5f6
void ex0417(void) {
// identificacao
    printf( "\nExercicio 0417:\n\n" );
    // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    impar(cadeia);
    printf("O total de numeros impares na cadeia eh: %d", impar(cadeia));
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da função ex0417
// Função para o exercício 0418
// - ler uma sequência de caracteres do teclado;
// - mostrar todos os símbolos não alfanuméricos (letras e dígitos) em uma cadeia de caracteres
 //separados por meio de uma função.
// Exemplo: sequência = (A1b2+C3d4)*E5f6
void ex0418() {
// identificacao
    printf( "\nExercicio 0418:\n\n" );
    // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    verchar(cadeia);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}// Fim da função ex0418

// Função para o exercício 0419
// - ler uma sequência de caracteres do teclado;
// - mostrar todos os símbolos alfanuméricos (letras e dígitos) em uma cadeia de caracteres
 //separados por meio de uma função.
//Exemplo: sequência = (A1b2+C3d4)*E5f6
void ex0419() {
    // identificacao
    printf( "\nExercicio 0319:\n\n" );
  // variavel
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    alfanum(cadeia);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da função ex0419

// Função para o exercício 0420
// - ler certa quantidade de cadeias de caracteres do teclado, uma por vez;
// - mostrar e contar a quantidade de símbolos alfanuméricos (letras e dígitos) em cada palavra,
 //por meio de uma função, e calcular o total acumulado de todas as palavras.
//Exemplo: sequências = { (A1b2+C3d4)*E5f6, [P&&Q]||[R&&!S], (a<b&&b<c) }

void ex0420() {
// identificacao
    printf( "\nExercicio 0420:\n\n" );


}// Fim da função ex0420

// Função para o exercício 04E1
// - ler certa quantidade de cadeias de caracteres do teclado;
// - contar a quantidade de símbolos alfanuméricos, incluindo espaços em branco, em cada palavra,
// e calcular o total de todas as palavras, por meio de uma função.
//OBS.: Para a leitura incluir espaços em branco, usar IO_readln( ) ou fgets( ).
// Exemplo: sequência = (A1b2 + C3d4) * E5f6

void ex04E1()
{
    // identificacao
    printf( "\nExercicio 03E1:\n\n" );

} // fim exercicio04E1
// Função para o exercício 04E2
// - ler duas cadeias de caracteres do teclado;
// - calcular qual das duas sequências possui a maior quantidade de dígitos,por meio de uma função.
// Exemplo: sequência = { A1b2, C3d4E5 }
void ex04E2()
{
    // identificacao
    printf( "\nExercicio 03E2:\n\n" );

} // fim função 04E2

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
            case 1: ex0411(); break;
            case 2: ex0412(); break;
            case 3: ex0413(); break;
            case 4: ex0414(); break;
            case 5: ex0415(); break;
            case 6: ex0416(); break;
            case 7: ex0417(); break;
            case 8: ex0418(); break;
            case 9: ex0419(); break;
            case 10: ex0420(); break;
            case 11: ex04E1(); break;
            case 12: ex04E2(); break;
            default:
                printf("\nERRO: OPCAO INVALIDA\n\n");
                break;
        } // fim switch

    } while (opcao != 0);

    printf("\nAperte ENTER para terminar!\n");
    getchar();

    return 0;
} // Fim da função principal
