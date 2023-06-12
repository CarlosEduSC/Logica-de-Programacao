#include <stdio.h>

int main () {

    int i,j,k;

    for (j=7,i=1;i < 10;i+=2) {
        for (k=i+6;j == k,k >= i+4;j--,k--) {

            printf ("I=%d J=%d\n",i,j);
        }

        j+=5;
    }

    return 0;
}