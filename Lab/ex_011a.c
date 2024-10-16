#include <stdio.h>
#include <stdlib.h>

#define valueOf(p) (*(p))
#define addressOf(p) (&(p))
#define TAM_MAX 80

#define set(p,x) valueOf(addressOf(p))=x
#define get(p) valueOf(addressOf(p))

void metodo_01(){
    printf("\nMetodo 01\n");
    int a = 5;
    double b = 0.15;
    printf("a = %d", a);
    printf("\na = %d", valueOf(addressOf(a)));
    printf("\nb = %lf", valueOf(addressOf(b)));
    valueOf(addressOf(a)) = 10;
    printf("\na = %d", valueOf(addressOf(a)));
    set(a,20);
    printf("\na = %d\n", get(a));

}
void str_cpy(char * s, char * text){
    int x=0;
    while(text[x] != '\0'){
        s[x] = text[x];
        x = x +1;
    }
}

#define str_set(s,text) str_cpy(s,text)
#define str_get(s) &(s[0])
void metodo_02(void){
    printf("\nMetodo 02");
    char s[TAM_MAX];
    str_set(s,"abcde");
    printf("\ns = %s", str_get(s));
}
typedef
    struct s_int_array{
        int capacity;
        int length  ;
        int *data   ;
    }
int_array;
void metodo_03(void){
    printf("\n\nMetodo 03");
    int k = 0;
    int_array array;
    array.data     = malloc ( 10 * sizeof(int) );
    if( array.data ){
        array.capacity = 10;
        array.length   =  0;
    }
    k = 1;
    printf("\n");
    do
    {
        array.data[array.length] = k;
        array.length             = array.length+1;
        k = k + 1;
    }
    while ( array.length < 5);
    for(k = 0; k < array.length; k++){
        printf( "%2d: %d\n", k , array.data[k] );
    }
}

int arr_length (int_array *array){
    int x = 0;
    if (array){
        x = array->length;
    }


}

void arr_set ( int_array *array, int x, int value ){
    if(array && 0 <= x && x <array->capacity)
        array->data[x]  = value;
}
void metodo_04(void){
    printf("\nMetodo 04");
    int k = 0;
    int_array array;
    array.data     = malloc ( 10 * sizeof(int) );
    if( array.data ){
        array.capacity = 10;
        array.length   =  0;
    }
    k = 1;
    printf("\n");
    do
    {
        arr_set(addressOf(array),arr_length(addressOf(array)), k);
        array.length = arr_length(addressOf(array))+1;
        k = k + 1;
    }
    while ( arr_length(addressOf(array)) < 5);
    for(k = 0; k < arr_length(addressOf(array)); k++){
        printf( "%2d: %d\n", k , array.data[k] );
    }
}

void metodo_05(void){
    printf("\nMetodo 05");
    int k = 0;
    int_array array;
    int_array *ref_array = addressOf(array);
    array.data     = malloc ( 10 * sizeof(int) );
    if( array.data ){
        array.capacity = 10;
        array.length   =  0;
    }
    k = 1;
    printf("\n");
    do
    {
        arr_set(ref_array,arr_length(ref_array), k);
        array.length = arr_length(ref_array)+1;
        k = k + 1;
    }
    while ( arr_length(ref_array) < 5);
    for(k = 0; k < arr_length(ref_array); k++){
        printf( "%2d: %d\n", k , array.data[k] );
    }
}


void metodo_06(void){
    printf("\nMetodo 06");
    int k = 0;
    int_array *ref_array
    = malloc ( 1 * sizeof(int_array) );
    if ( ref_array ){
        ref_array->data     = malloc ( 10 * sizeof(int) );
    if( ref_array->data ){
        ref_array->capacity = 10;
        ref_array->length   =  0;
    }
    k = 1;
    printf("\n");
    do
    {
        arr_set(ref_array,ref_array->length, k);
        ref_array->length = ref_array->length+1;
        k = k + 1;
    }
    while ( ref_array->length < 5);
    for(k = 0; k < ref_array->length; k++){
        printf( "%2d: %d\n", k , ref_array->data[k] );
    }
}
}

int main(void){
    metodo_01();
    metodo_02();
    metodo_03();
    metodo_04();
    metodo_05();
    metodo_06();
}
