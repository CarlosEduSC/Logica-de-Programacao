//Escreva uma função que calcule a área de uma figura retangular.

#include <stdio.h>

float calculo (float base, float altura) {

    float area;

    area = base*altura;

    return area;
}

int main () {

    float base, altura;

    printf ("\nDigite a medida da base do retangulo: ");
    scanf ("%f",&base);

    printf ("\nDigite a altura do retangulo: ");
    scanf ("%f",&altura);

    printf ("\n==========//=========\n");

    printf ("\nA area do retangulo eh: %.2f\n",calculo(base,altura));

    return 0;
}