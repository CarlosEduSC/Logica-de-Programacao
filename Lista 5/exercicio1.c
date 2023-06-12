#include <stdio.h>

int main () {

    int codigo,quantidade;
    double valor,total;

    scanf ("%d%d",&codigo,&quantidade);

    switch (codigo) {

        case 1:
            valor = 4.00;
            total = quantidade*valor;

            printf ("Total: R$ %.2f\n",total);

            break;

        case 2:
            valor = 4.50;
            total = quantidade*valor;

            printf ("Total: R$ %.2f\n",total);

            break;

        case 3:
            valor = 5.00;
            total = quantidade*valor;

            printf ("Total: R$ %.2f\n",total);

            break;

        case 4:
            valor = 2.00;
            total = quantidade*valor;

            printf ("Total: R$ %.2f\n",total);

            break;

        case 5:
            valor = 1.50;
            total = quantidade*valor;

            printf ("Total: R$ %.2f\n",total);

            break;
    }

    return 0;
}