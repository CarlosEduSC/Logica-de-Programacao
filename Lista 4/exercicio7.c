#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {

    double A,B,C,moduloA,moduloB,moduloC,somaA,somaB,somaC,perimetro,area;

    scanf ("%lf%lf%lf",&A,&B,&C);

    moduloA = B-C;
    moduloB = A-C;
    moduloC = A-B;

    somaA = B+C; 
    somaB = A+C;
    somaC = A+B;

    if (abs(moduloA) < A && A < somaA || abs(moduloB) < B && B < somaB || abs(moduloC) < C && C < somaC) {
        perimetro = A+B+C;

        printf ("Perimetro = %.1f\n",perimetro);
    
    } else {
        area = ((A+B)*C)/2;

        printf ("Area = %.1f\n",area);
    }

    return 0;
}