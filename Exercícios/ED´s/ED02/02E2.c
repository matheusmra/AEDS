#include <stdio.h>

void ex02E2()
{
    // identificacao
    printf( "\nExercicio 02E2:\n\n" );

    // programa
    char a = 'a', b = 'b', c = 'c';

    printf( "Digite o primeiro caracter: " );
    scanf( "%c" , &a );
    getchar();

    printf( "Digite o segundo caracter: " );
    scanf( "%c" , &b );
    getchar();

    printf( "Digite o terceiro caracter: " );
    scanf( "%c" , &c );
    getchar();
    printf( "\n" );

    if( b != c )
    {
        if( !( ( (b < a) && (a < c) ) || ( (b > a) && ( a > c) ) ) )
        {
            printf("O caracter (%c) esta fora do intervalo ( %c : %c )\n" , a , b , c );
        } else
        {
            printf( "O caracter (%c) esta dentro do intervalo ( %c : %c )\n" , a , b , c );
        }
    }
    else
    {
        printf( "Ha dois caracteres iguais\n" );
    }

    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio02E2
int main(){
    ex02E2();
}
