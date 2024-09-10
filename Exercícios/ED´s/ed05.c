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
// Fun��o para mostrar o menu de op��es
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

// Fun��o para testar se o caractere digitado � menor que M
int contarM(char v1[]) {
    int contagemM = 0;
    for(int i = 0; i < strlen(v1); i++)
    {
        if(( 64 < v1[i]) && (v1[i] < 77)){
            contagemM++;
        }
        }
    return contagemM;
}//Fim fun��o
// Fun��o para contar alfanumerico
int contaralfanum(char v1[]) {
    int total = 0;
    for(int i = 0; i < strlen(v1); i++)
    {
        if((47 < v1[i] && v1[i] < 58) || (64 < v1[i] && v1[i] < 91) || (96 < v1[i] && v1[i] < 123)){
            total++;
        }
        }
    return total;

}
//Fun��o para contar total de letras menor que m
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
}//Fim fun��o

//Fun��o para contar total de letras maior que M
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

//Fun��o para contar total de letras maior que m
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

//Fun��o para testar se � numero impar
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

//Fun��o para printar se o caracter digitado � minusculo e menor que a letra m.
void printarmenorm(char v1[]){
    for(int i = 0; i < strlen(v1); i++ )
    {
        if( ( 96 < v1[i]) && (v1[i] < 109))
        {
            printf("A letra: [%c] eh minuscula e menor que 'm'\n", v1[i]);
        }
    }
}//Fim da fun��o

//Fun��o para printar se o caracter digitado � maiusculo e menor que a letra M.
void printarmenorM(char v1[]){
    for(int i = 0; i < strlen(v1); i++ )
    {
        if( ( 64 < v1[i]) && (v1[i] < 77))
        {
            printf("A letra: [%c] eh maiuscula e menor que 'm'\n", v1[i]);
        }
    }
}

//Fun��o para printar letras que s�o maiusculas e maiores que m.
void printarmaiorm(char v1[]){
    for(int i = 0; i < strlen(v1); i++ )
    {
        if( ( 109 < v1[i]) && (v1[i] < 123))
        {
            printf("A letra: [%c] eh minuscula e maior que 'm'\n", v1[i]);
        }
    }
}
//Fim

//Fun��o para printar letra maiuscula e maior que M
void printarmaiorM(char v1[]){
    for(int i = 0; i < strlen(v1); i++ )
    {
        if( ( 77 < v1[i]) && (v1[i] < 91))
        {
            printf("A letra: [%c] eh maiuscula e maior que 'M'\n", v1[i]);
        }
    }
}
//Fim
//Fun��o para verificar se n�o � letra ou digito
void verchar(char v1[]){
    for(int i = 0; i < strlen(v1); i++){
        if( ( 32 < v1[i]) && (v1[i] < 48) || (57 < v1[i] && (v1[i]) < 65) || (90 < v1[i]) && (v1[i] < 97) || (122 < v1[i]) && (v1[i] < 127))
        {
            printf("O caracter: [%c] nao eh uma letra ou digito\n", v1[i]);
        }
    }

}
//Fun��o para verificar se � Letra ou digito
void alfanum(char v1[]) {
    for(int i = 0; i < strlen(v1); i++)
    {
        if((47 < v1[i] && v1[i] < 58) || (64 < v1[i] && v1[i] < 91) || (96 < v1[i] && v1[i] < 123)){
            printf("\n(%c) eh simbolo alfanumerico",v1[i]);
        }
        }

}
void printar(char v1[]) {
    for (int i = 0; i < strlen(v1); i++) {
        char c = v1[i];

        // Verificar se � min�scula e menor que 'm'
        if (c > 96 && c < 109) {
            printf("A letra: [%c] eh minuscula e menor que 'm'\n", c);
        }

        // Verificar se � mai�scula e menor que 'M'
        if (c > 64 && c < 77) {
            printf("A letra: [%c] eh maiuscula e menor que 'M'\n", c);
        }

        // Verificar se � min�scula e maior que 'm'
        if (c > 109 && c < 123) {
            printf("A letra: [%c] eh minuscula e maior que 'm'\n", c);
        }

        // Verificar se � mai�scula e maior que 'M'
        if (c > 77 && c < 91) {
            printf("A letra: [%c] eh maiuscula e maior que 'M'\n", c);
        }

        // Verificar se n�o � letra ou d�gito
        if ((c > 32 && c < 48) || (c > 57 && c < 65) || (c > 90 && c < 97) || (c > 122 && c < 127)) {
            printf("O caracter: [%c] nao eh uma letra ou digito\n", c);
        }

        // Verificar se � alfanum�rico
        if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123)) {
            printf("(%c) eh simbolo alfanumerico\n", c);
        }
    }
}
//Fun��o para separar em outra cadeia
void separarDigitos(const char *v1, char *v2) {
    int j = 0;
    for (int i = 0; i < strlen(v1); i++) {
        if  ((96 < v1[i]) && (v1[i] < 109)) {
            v2[j++] = v1[i];
        }
    }
    v2[j] = '\0';
}

void metodo04E2(const char *cadeia1, const char *cadeia2)
{
  int cont1 = 0;
  int tam1 = strlen(cadeia1);
  int cont2 = 0;
  int tam2 = strlen(cadeia2);
  for( int i = 0; i < tam1; i=i+1 )
  {
    if( isdigit(cadeia1[i]) )
    {
      cont1 = cont1 + 1;
    }
  }
  for( int j = 0; j < tam2; j=j+1 )
  {
    if( isdigit(cadeia2[j]) )
    {
      cont2 = cont2 + 1;
    }
  }
         if( cont1 > cont2 ) {
    printf("%s\n" , "A primeira cadeia possui maior quantidade de digitos do que a segunda");
  } else if( cont2 > cont1 ) {
    printf("%s\n" , "A segunda cadeia possui maior quantidade de digitos do que a primeira");
  } else {
    printf("%s\n" , "A primeira e a segunda cadeia tem quantidades iguais de digitos");
  }
}

// Fun��o para o exerc�cio 0411
// - ler a quantidade de valores reais;
// - ler dois valores reais para definir um intervalo fechado;
// - ler tantos valores reais quanto a quantidade, um de cada vez e
// - contar quantos desses valores est�o dentro do intervalo, e quantos est�o fora dele

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
} // fim exercicio0411

// Fun��o para o exerc�cio 0412
// - ler uma sequ�ncia de caracteres do teclado;
// - contar e mostrar a quantidade de letras min�sculas menores que 'm'.
// DICA: Definir uma fun��o para determinar se um caractere � letra mai�scula.
// Exemplo: sequ�ncia = AaKkLmM0*Nx
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
}// Fim da fun��o ex0412

// Fun��o para o exerc�cio 0413
// - ler uma sequ�ncia de caracteres do teclado;
// - mostrar a quantidade de letras min�sculas menores que 'm',
// - definir e usar uma fun��o para receber uma cadeia de caracteres como par�metro e contar a quantidade desejada.
// Exemplo: sequ�ncia = AaKkLmM0*Nx
void ex0413() {
// identificacao
    printf( "\nExercicio 0413:\n\n" );
    // vari�veis
    char cadeia[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    contarm(cadeia);
    // Testar se o caractere � minusculo e menor que m
    printarmenorm(cadeia);
    printf("O total de letras minusculas menores que 'm' eh: %d ", contarm(cadeia));
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
    return 0;

}// Fim da fun��o ex0413

// Fun��o para o exerc�cio 0414
// - ler uma sequ�ncia de caracteres do teclado;
// - mostrar as letras min�sculas menores que 'm',
// - definir e usar uma fun��o para receber uma cadeia de caracteres como par�metro e separar em outra cadeia de caracteres os s�mbolos desejados.
// DICA: Usar concatena��o para juntar a uma cadeia inicialmente vazia cada s�mbolo encontrado que satisfizer a condi��o.
// Exemplo: sequ�ncia = AaKkLmM0*Nx
void ex0414() {
// identificacao
    printf( "\nExercicio 0414:\n\n" );
    // vari�veis
    char cadeia[80], cadeia2[80];
    // programa
    printf( "Digite uma palavra: " );
    scanf( "%s" , cadeia);
    getchar();
    printf( "\n" );
    separarDigitos(cadeia, cadeia2);
    printf("Digitos separados: %s\n", cadeia2);
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();

}// Fim da fun��o ex0414

// Fun��o para o exerc�cio 0415
// - ler uma sequ�ncia de caracteres do teclado;
// - mostrar a quantidade de letras (tanto mai�sculas, quanto min�sculas) menores que 'M' e 'm' contadas por uma fun��o definida para receber uma cadeia de caracteres como par�metro.
// Exemplo: sequ�ncia = AaKkLmM0*Nx
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

}// Fim da fun��o ex0415

// Fun��o para o exerc�cio 0416
// - ler uma sequ�ncia de caracteres do teclado;
// - mostrar as letras (tanto mai�sculas, quanto min�sculas) maiores que 'M' e 'm'
 //separadas por uma fun��o definida para receber uma cadeia de caracteres como par�metro.
//Exemplo: sequ�ncia = AaKkLmM0*Nx

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

}// Fim da fun��o ex0416

// Fun��o para o exerc�cio 0417
// - ler uma sequ�ncia de caracteres do teclado;
// - mostrar a quantidade de d�gitos �mpares em uma cadeia de caracteres contados por uma fun��o
 //definida para receber uma cadeia de caracteres como par�metro.
 //DICA: Considerar o valor inteiro do c�digo equivalente (type casting) para teste.
//Exemplo: sequ�ncia = A1b2C3d4E5f6
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

}// Fim da fun��o ex0417
// Fun��o para o exerc�cio 0418
// - ler uma sequ�ncia de caracteres do teclado;
// - mostrar todos os s�mbolos n�o alfanum�ricos (letras e d�gitos) em uma cadeia de caracteres
 //separados por meio de uma fun��o.
// Exemplo: sequ�ncia = (A1b2+C3d4)*E5f6
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
}// Fim da fun��o ex0418

// Fun��o para o exerc�cio 0419
// - ler uma sequ�ncia de caracteres do teclado;
// - mostrar todos os s�mbolos alfanum�ricos (letras e d�gitos) em uma cadeia de caracteres
 //separados por meio de uma fun��o.
//Exemplo: sequ�ncia = (A1b2+C3d4)*E5f6
void ex0419() {
    // identificacao
    printf( "\nExercicio 0419:\n\n" );
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

}// Fim da fun��o ex0419

// Fun��o para o exerc�cio 0420
// - ler certa quantidade de cadeias de caracteres do teclado, uma por vez;
// - mostrar e contar a quantidade de s�mbolos alfanum�ricos (letras e d�gitos) em cada palavra,
 //por meio de uma fun��o, e calcular o total acumulado de todas as palavras.
//Exemplo: sequ�ncias = { (A1b2+C3d4)*E5f6, [P&&Q]||[R&&!S], (a<b&&b<c) }

void ex0420() {
// identificacao
    printf( "\nExercicio 0420:\n\n" );


}// Fim da fun��o ex0420

// Fun��o para o exerc�cio 04E1
// - ler certa quantidade de cadeias de caracteres do teclado;
// - contar a quantidade de s�mbolos alfanum�ricos, incluindo espa�os em branco, em cada palavra,
// e calcular o total de todas as palavras, por meio de uma fun��o.
//OBS.: Para a leitura incluir espa�os em branco, usar IO_readln( ) ou fgets( ).
// Exemplo: sequ�ncia = (A1b2 + C3d4) * E5f6

void ex04E1()
{
    // identificacao
    printf( "\nExercicio 04E1:\n\n" );

} // fim exercicio04E1
// Fun��o para o exerc�cio 04E2
// - ler duas cadeias de caracteres do teclado;
// - calcular qual das duas sequ�ncias possui a maior quantidade de d�gitos,por meio de uma fun��o.
// Exemplo: sequ�ncia = { A1b2, C3d4E5 }
void ex04E2()
{
    // identificacao
    printf( "\nExercicio 04E2:\n\n" );
 // variavel
    char cadeia1[80], cadeia2[80];
    // programa
    printf( "Digite a primeira cadeia: " );
    scanf( "%s" , cadeia1);
    getchar();
    printf( "\n" );
    printf( "Digite a segunda cadeia: " );
    scanf( "%s" , cadeia2);
    getchar();
    metodo04E2(cadeia1, cadeia2);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim fun��o 04E2

// Fun��o principal
int main(void) {
    int opcao;

    do {
        menuOpcoes(); // Chama a fun��o que exibe as op��es

        printf("\nOpcao = ");
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer de entrada

        // Executar a op��o escolhida
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
} // Fim da fun��o principal
