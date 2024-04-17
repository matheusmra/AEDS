#include <stdio.h>

int main() {
    int votos[7] = {0};
    int voto, total = 0;
    do {
        scanf("%d", &voto);
        if(voto >= 1 && voto <= 6) {
            votos[voto]++;
            total++;
        }
    } while(voto != 0);

    printf("%d ",votos[1]);
    printf("%d ",votos[2]);
    printf("%d ",votos[3]);
    printf("%d ",votos[4]);
    printf("\n%d\n", votos[5]);
    printf("%.2f%", (double) votos[6] / total * 100);

}
