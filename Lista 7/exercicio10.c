#include <stdio.h>

int main () {

    double S=1,divisao,i,j;

    for (i=2,j=1;i<=100;i++) {
        divisao = j/i;
        S+=divisao;
    }

    printf ("%.2f\n",S);
    return 0;
}