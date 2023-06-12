#include <stdio.h>

int main () {

    int N[20],M[20],i,j,k;

    for (i=0;i <= 9;i++) {
        
        scanf ("%d",&M[i]);
    }

    for (j=10;j < 20;j++) {

        scanf ("%d",&M[j]);
    }

    for (k=0,j=19;k <= 9,j >= 10;k++,j--) {

        N[k] = M[j];
    }

    for (k=10,i=9;k <= 19,i >= 0;k++,i--) {

        N[k] = M[i];
    }

    for (k=0;k < 20;k++) {
        
        printf ("N[%d] = %d\n",k,N[k]);
    }

    return 0;
}