#include<stdlib.h>
#include<stdio.h>
  int main() {
    int n = 10;
    double *p = (double*) malloc(n*sizeof(double));
    double *pAux = p, *endMenor, *endMaior, menor , maior;

    srand(time(NULL));
    if(p==NULL){
      printf("sem espaço");
      return 0;
    }

    for(int i=0;i<n;i++,pAux++){
    *pAux = (float)(rand()) / (float)(RAND_MAX)*10;
    }
    maior = *p;
    menor = *p;
    endMaior = p;
    endMenor = p;
    pAux = p;
    for(int i=0;i<n;i++,pAux++){
      if(*pAux > maior){
        maior = *pAux;
        endMaior = pAux;
      }
      if(*pAux < menor) {
        menor = *pAux;
        endMaior = pAux;
      }
}
    printf("%lf %lf %lf %lf", maior, endMaior, menor, endMenor);
}
