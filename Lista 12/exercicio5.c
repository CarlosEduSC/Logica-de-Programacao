//Escreva uma função que calcule a área de uma figura retangular.

#include <stdio.h>

float calculo (float base, float altura) {

    float area;

    area = (base*altura)/2;

    return area;
}

int main () {

    float base,altura;

    printf ("\nDigite a medida da base do triangulo: ");
    scanf ("%f",&base);

    printf ("\nDigite a altura do triangulo: ");
    scanf ("%f",&altura);

    printf ("\n==========//==========\n");

    printf ("\nA area do triangulo eh: %.2f\n",calculo(base,altura));

    return 0;
}