#include <stdio.h>

int main () {

    int N,i=1,j=2,k=3,linhas;

    scanf ("%d",&N);

    for (linhas=0;linhas < N;linhas++) {

        printf ("%d %d %d PUM\n",i,j,k);

        i+=4;
        j+=4;
        k+=4;
    }

    return 0;
}