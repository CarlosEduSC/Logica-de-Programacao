#include <stdio.h>

int main () {

    int N,posicao1,posicao,menor,i;

    scanf ("%d",&N);

    int X[N];

    for (i=0;i < N;i++) {

        scanf ("%d",&X[i]);

        if (i == 0) {
            
            menor = X[i];
            posicao = i;

        } else if (X[i] < menor) {

            menor = X[i];
            posicao = i;
            posicao1 = posicao;
        }
    }

    printf ("Menor valor: %d\n",menor);

    printf ("Posicao: %d\n",posicao1);

    return 0;
}