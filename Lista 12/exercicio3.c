//Escreva uma função que calcule a área de uma circunferência.

#include <stdio.h>
#include <math.h>

float calculo (float raio) {

    float resul;

    resul = 3.14 * pow(raio,2);

    return resul;
}

int main () {

    float raio;

    printf ("\nDigite o raio da circunferencia: ");
    scanf ("%f",&raio);

    printf ("\n==========//==========\n");

    printf ("A area da circunferencia eh: %.2f\n",calculo(raio));

    return 0;
}