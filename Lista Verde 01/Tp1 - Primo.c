#include<stdio.h>
int main(){
    int x;
    int count=0;
    scanf("%d", &x);
    for(int i = 1; i<=x; i++){
        if((x%i)==0){
            count++;

        }

    }
    if(count==2){
    printf("Primo");
    }
    else{
    printf("Nao primo");
    }

}
