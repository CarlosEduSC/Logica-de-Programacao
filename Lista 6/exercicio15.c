#include <stdio.h>

int main () {

    int idade,i=0;
    double media,soma=0;

    do {

        scanf ("%d",&idade);

        if (idade > 0) {
            soma+=idade;
            i+=1;
        }

    } while (idade > 0);

    media = soma/i;


    printf ("%.2f\n",media);

    return 0;
}