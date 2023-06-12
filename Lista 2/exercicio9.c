#include <stdio.h>

int main () {

    int codigoPeca1,codigoPeca2,numeroPecas1,numeroPecas2;
    float valorPeca1,valorPeca2,valorPagar;

    scanf ("%d%d%f",&codigoPeca1,&numeroPecas1,&valorPeca1);
    scanf ("%d%d%f",&codigoPeca2,&numeroPecas2,&valorPeca2);


    valorPagar = (numeroPecas1*valorPeca1)+(numeroPecas2*valorPeca2);

    printf ("VALOR A PAGAR: R$ %.2f\n",valorPagar);

    return 0;
}