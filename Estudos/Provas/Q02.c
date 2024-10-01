#include <stdio.h>


int f_02(int a, int b){
    if(a%2==0 && b%2==0)
    return (f_02(a/2, b/2));
    else if(a%2!=0 && b%2==0)
    return(f_02(b%a,b/2));
    else if(a%2==0 && b%2!=0)
    return(f_02(a/2, a%b));
    return ((a-1)%(b-1)/2);

}

int main(){
    printf("\nf_02(30, 72) = %d\n", f_02(30,72));
}
