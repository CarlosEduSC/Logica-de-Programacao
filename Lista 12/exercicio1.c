/*Escreva uma função que retorne a soma dos n primeiros números naturais (inteiros
positivos), dado o valor de n como parâmetro.*/

#include <stdio.h>

int calculo(int n) {

    int soma=0,i;

    for (i=1;i <= n;i++) {
        soma+= i;
    }

    return soma;
}

int main () {

    int n;

    printf ("\nDigite a quantidade de numeros a serem somados: ");
    scanf ("%d",&n);

    printf ("\n==========//==========\n");

    printf ("\nO total da soma eh: %d\n",calculo(n));

    return 0;
}