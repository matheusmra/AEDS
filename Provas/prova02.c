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
void menuOpcoes()
{
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
void question01(int n, char text[])
{
    for(int x = n/2; x < n; x++)
    {
        text[n+1]=text[x];
        text[x] = text[n-x];
        text[n-x] = text[n+1];
        text[n+1] = '\0';
    }

}
void opcoes01()
{
    printf("A) patso");
    printf("\nB) patos");
    printf("\nC) posta");
    printf("\nD) potsa");
}

int p01()
{
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

void p_02(int v, int m, int n, int a[])
{
    int z = 0;
    for(int x = 1; x <=v; x++)
    {
        for(int y = n - 1; y >= 1; y--)
        {
            z=a[y];
            a[y] = a[y-1];
            a[y-1] = z;
        }
    }
    printf("\nAlternativa correta: (C) = ");
    for(int i = 0; i < 10; i++)
    {
        printf(" %d", a[i]);
    }



}

void opcoes02()
{
    printf("A) p:(n), q:(x>m+1)");
    printf("\nB) p:(n), q:(x>m-1)");
    printf("\nC) p:(n-1), q:(x>m)");
    printf("\nD) p:(n-1), q:(x>=m)\n");

}



void p02()
{
// identificacao
    printf( "\nExercicio 02:\n\n" );
    opcoes02();
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    p_02(3,0,10,a);
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}

int f_03(int n, int m[][n])
{
    int z = 0;
    for(int x = 0; x <n; x++)
    {
        for(int y =0; y < n; y++)
        {
            if(x-y<0 && x+1<n-y)
            {
                z = z+m[x][y];
            }
        }
    }
    return (z);
}

void opcoes03 ()
{
    printf("\na) 9");
    printf("\nb) 13");
    printf("\nc) 15");
    printf("\nd) 17");
}


void p03()
{
// identificacao
    printf( "\nExercicio 03:\n\n" );
    opcoes03();
    int m[][5] = {{1,2,3,4,5},{2,1,4,5,3},{3,4,5,2,1},{4,5,1,3,2},{5,3,2,1,4}};
    printf("\nAlternativa correta: (B) = %d", f_03(5,m));
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}

int f_04(int m, char * text1, int n, char * text2)
{
    int result = 0;
    if(text1 && text1[m] != '\0' && text2 && text2[n] != '\0')
    {
        if(text1[m] != text2[n])
            result = 0 + f_04 (m+1, text1,n,text2);
        else
            result = 1 + f_04(m+1,text1,n+1,text2);
    }
    return result;
}
void opcoes04 ()
{
    printf("\na) 5");
    printf("\nb) 4");
    printf("\nc) 3");
    printf("\nd) 2");
}


void p04()
{
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

void opcoes05 ()
{
    printf("\na) (3,15/16)");
    printf("\nb) (3,31/32)");
    printf("\nc) (3,63/64)");
    printf("\nd) (3,124/128)");
}

struct s_Fraction
{
    int x, y, z;
};
struct s_Fraction f_05(double a)
{
    struct s_Fraction f = {0,0,0};
    int y = 2;
    if(a > 0)
    {
        f.x = (int)a;
        a = (a-f.x);
    }
    f.y = (int)(a*128);
    f.z = 128;
    while(y <= 64)
        if(f.y%y==0 && f.z%y==0)
        {
            f.y=f.y/y;
            f.z=f.z/y;
        }
        else
            y = y*2;
    return (f);


};

void p05()
{
    // Identificação
    printf("\nExercicio 05:\n\n");
    opcoes05();
    struct s_Fraction a = f_05(3.94);
    printf("\nAlternativa correta: (A) = (%d,%d/%d)\n", a.x, a.y, a.z);
    // Encerrar
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}

int f_06(const char *nome_arquivo, int arr[], int n, int m)
{
    FILE *arquivo = fopen(nome_arquivo, "w");
    int soma = 0;
    int cont = 0;
    for (int i = 0; i < n && soma + arr[i] < m; i++)
    {
        soma += arr[i];
        cont++;
    }
    fprintf(arquivo, "Quantidade de valores somados: %d\n", cont);
    fprintf(arquivo, "Valores somados:\n");
    for (int i = 0; i < cont; i++)
    {
        fprintf(arquivo, "%d ", arr[i]);
    }
    fprintf(arquivo, "\n");

    fclose(arquivo);
    return cont;
}

void p06()
{
// identificacao
    printf( "\nExercicio 06:\n" );
    // programa
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int m = 0;
    printf("\nDigite o limite da soma:\n");
    scanf("%d", &m);
    int qtd = f_06("DADOS.TXT", arr, size, m);
    printf("Quantidade de valores somados antes de atingir o limite: %d\n", qtd);
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}



int f_07(const char *name)
{
    FILE *f = fopen(name, "r");
    if(f!=NULL)
    {
        int rows = 0, cols = 0;
        fscanf(f,"%d", &rows);
        fscanf(f,"%d", &cols);
        int maior = 0;
        int menor = 1000, maiori = 0, maiorj = 0, menori = 0, menorj =0;
        int matriz[rows][cols];
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                fscanf(f, "%d", &matriz[i][j]);
                if(matriz[i][j] > maior)
                {
                    maior = matriz[i][j];
                    maiori = i;
                    maiorj = j;
                }
                if(matriz[i][j] < menor)
                {
                    menor = matriz[i][j];
                    menori = i;
                    menorj = j;
                }

            }
        }
        if(maiori == menori || maiorj == menorj)
        {
            return 1;
        }
        else
        {
            return -1;
        }
        fclose(f);
    }
}

void p07()
{
    printf("\nExercicio 07:\n\n");
    int n = f_07("MATRIZ.txt");
    printf("%d", n);
    printf("\nAperte ENTER para continuar!\n");
    getchar();
}


struct s_Park
{
    int he;
    int me;
    int se;
    int hs;
    int ms;
    int ss;
};

struct s_Park soma(struct s_Park c1)
{
    struct s_Park result;
    result.ss = c1.ss - c1.se;
    result.ms = c1.ms - c1.me;
    result.hs = c1.hs - c1.he;
    if (result.ss < 0)
    {
        result.ss += 60;
        result.ms -= 1;
    }
    if (result.ms < 0)
    {
        result.ms += 60;
        result.hs -= 1;
    }
    return result;
}

int total(struct s_Park result)
{
    int totalMinutos = result.hs * 60 + result.ms;
    int t = totalMinutos / 15;
    if (totalMinutos < 15)
    {
        t = 0;
    }
    return t;
}

void p08()
{
// identificacao
    int n = 0;
    printf( "\nExercicio 08:\n\n" );
    struct s_Park car;
    struct s_Park tempoPermanencia;
    car.he = 10;
    car.me = 30;
    car.se = 0;
    car.hs = 12;
    car.ms = 45;
    car.ss = 0;
    tempoPermanencia = soma(car);
    int totl = total(tempoPermanencia);
    int valor = 5 * totl; //Defini o valor que será cobrado a cada 5 minutos;
    printf("Tempo de permanencia: %d horas, %d minutos, %d segundos\n", tempoPermanencia.hs, tempoPermanencia.ms, tempoPermanencia.ss);
    printf("\nTotal a pagar: R$%d", valor );
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
}


// Função principal
int main(void)
{
    int opcao;

    do
    {
        menuOpcoes(); // Chama a função que exibe as opções

        printf("\nOpcao = ");
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer de entrada

        // Executar a opção escolhida
        switch (opcao)
        {
        case 0:
            break;
        case 1:
            p01();
            break;
        case 2:
            p02();
            break;
        case 3:
            p03();
            break;
        case 4:
            p04();
            break;
        case 5:
            p05();
            break;
        case 6:
            p06();
            break;
        case 7:
            p07();
            break;
        case 8:
            p08();
            break;
        default:
            printf("\nERRO: OPCAO INVALIDA\n\n");
            break;
        } // fim switch

    }
    while (opcao != 0);

    printf("\nAperte ENTER para terminar!\n");
    getchar();

    return 0;
} // Fim da função principal
