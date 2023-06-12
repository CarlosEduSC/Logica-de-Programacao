#include <stdio.h>

int main () {

    int i,positivos=0;
    double media,num[6],soma=0;

    scanf ("%lf%lf%lf%lf%lf%lf",&num[0],&num[1],&num[2],&num[3],&num[4],&num[5]);

    for (i=0;i < 6;i++) {

        if (num[i] > 0) {
            positivos += 1;
            soma += num[i];
        }
    }

    media = soma/positivos;

    printf ("%d valores positivos\n",positivos);

    printf ("%.1f\n",media);

    return 0;
}