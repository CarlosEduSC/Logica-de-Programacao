#include <stdio.h>
#include <math.h>

int main () {

    double A,B,C,maior,menor,meio;

    scanf ("%lf%lf%lf",&A,&B,&C);

    if (A > B && A > C)
        maior = A;

    else if (B > A && B > C)
        maior = B;

    else if (C > A && C > B)
        maior = C;

    if (A < B && A < C)
        menor = A;

    else if (B < A && B < C)
        menor = B;

    else if (C < A && C < B)
        menor = C;

    if (A < B && A > C || A > B && A < C)
        meio = A;

    else if (B < A && B > C || B > A && B < C)
        meio = B;

    else if (C < A && C > B || C > A && C < B)
        meio = C;

    else if (A == B && C > A) {
        maior = C;
        meio = A;
        menor =B;

    } else if (A == B && C < A) {
        maior = A;
        meio = B;
        menor = C;

    } else if (A == C && B < A) {
        maior = A;
        meio = C;
        menor = B;

    } else if (A == C && B > A) {
        maior = B;
        meio = A;
        menor = C;
    
    } else if (B == C && B > A) {
        maior = B;
        meio = C;
        menor = A;
    
    } else if (B == C && B < A) {
        maior = A;
        meio = B;
        menor = C;
    
    } else if (A == B && B == C) {
        maior = A;
        meio = B;
        menor = C;
    }

    if (maior >= meio+menor)
        printf ("NAO FORMA TRIANGULO\n");
    
    else {  
        if (pow(maior,2) == pow(meio,2)+pow(menor,2))
            printf ("TRIANGULO RETANGULO\n");

        if (pow(maior,2) > pow(meio,2)+pow(menor,2))
            printf ("TRIANGULO OBTUSANGULO\n");

        if (pow(maior,2) < pow(meio,2)+pow(menor,2))
            printf ("TRIANGULO ACUTANGULO\n");

        if (A == B && B == C)
            printf ("TRIANGULO EQUILATERO\n");

        if (A == B && B != C || A != B && B == C || A == C && A != B)
            printf ("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}