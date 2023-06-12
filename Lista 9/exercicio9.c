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

        for (i=1,l=5;i < 11;i++) {
            for (j=0;j < 5;j++) {

                if (j < i && j < l) {
                    soma+= M[i][j];
                }
            }

            if (i > 5) {
                l--;
            }
        }

        printf ("%.1f\n",soma);
    
    } else if (O == 'M') {

        for (i=1,k=0,l=5;i < 12;i++,l++) {
            for (j=0;j < 5;j++) {

                if (j < i && j < l) {
                    soma+= M[i][j];
                    k++;
                }
            }

            if (i > 5) {
                l--;
            }
        }

        media = soma/k;

        printf ("%.1f\n",media);
    }

    return 0;
}