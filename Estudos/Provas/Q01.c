#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int f_01(char p[]){
    int x =0, y = 0;
    bool r = false, s = false, t = false;
    bool u = false, v = false, w = false;
    for(x = 0; x < strlen(p); x++){
        r = ('a'<= p[x] && p[x] <= 'z');
        s = ('A'<= p[x] && p[x] <= 'Z');
        t = ('0'<= p[x] && p[x] <= '9');
        u = (r || s) && !w;
        v = !u && t;
        w = !v;
        if(u) y=y+1;
        else if(v) y=y-1;
    }
    return y;

}

int main(){
    printf("%d", f_01("5aP4+0_8r4nK0"));

}
