#include <stdio.h>
#include <math.h>

int main () {

    int N,i,quadrado;

    scanf ("%d",&N);

    for (i=2;i <= N;i+=2) {

        quadrado = pow(i,2);

        printf ("%d^2 = %d\n",i,quadrado);
    }

    return 0;
}