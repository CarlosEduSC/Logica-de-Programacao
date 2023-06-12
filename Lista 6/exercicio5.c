#include <stdio.h>

int main () {

    int num[5],i,pares=0,impares=0,positivos=0,negativos=0;

    scanf ("%d%d%d%d%d",&num[0],&num[1],&num[2],&num[3],&num[4]);

    for (i=0;i < 5;i++) {

        if (num[i]%2 == 0)
            pares += 1;

        else 
            impares += 1;
        
        if (num[i] > 0)
            positivos += 1;

        else if (num[i] < 0)
            negativos += 1;        
    }

    printf ("%d valor(es) par(es)\n",pares);

    printf ("%d valor(es) impar(es)\n",impares);

    printf ("%d valor(es) positivo(s)\n",positivos);

    printf ("%d valor(es) negativo(s)\n",negativos);

    return 0;
}