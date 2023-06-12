#include <stdio.h>

int main () {

    double S=1,divisao,i,j;

    for (i=2,j=3;j<=39;i*=2,j+=2) {
        divisao = j/i;
        S+=divisao;
    }

    printf ("%.2f\n",S);
    return 0;
}