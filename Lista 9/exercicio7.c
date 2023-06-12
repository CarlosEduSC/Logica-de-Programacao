#include <stdio.h>

int main () {

    double M[12][12],soma=0,media;
    char O;
    int j,i,k,l;

    scanf ("%c",&O);

    for (i=0;i < 12;i++) {
        for (j=0;j < 12;j++) {
            
            scanf ("%lf",&M[i][j]);
        }
    }

    if (O == 'S') {

        for (i=0,l=10;i < 5;i++,l--) {
            for (j=1;j < 11;j++) {

                if (j > i && j <= l) {
                    soma+= M[i][j];
                }
            }
        }

        printf ("%.1f\n",soma);
    
    } else if (O == 'M') {

        for (i=0,k=0,l=10;i < 5;i++,l--) {
            for (j=1;j < 11;j++) {

                if (j > i && j <= l) {
                    soma+= M[i][j];
                    k++;
                }
            }
        }

        media = soma/k;

        printf ("%.1f\n",media);
    }

    return 0;
}