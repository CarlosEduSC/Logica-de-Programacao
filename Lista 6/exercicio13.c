#include <stdio.h>
#include <math.h>

int main () {

    int N,i,j,k,linhas;

    scanf ("%d",&N);

    for (linhas=1;linhas <= N;linhas++) {

        i = pow(linhas,1);
        j = pow(i,2);
        k = pow(i,3);

        printf ("%d %d %d\n",i,j,k);
    }

    return 0;
}