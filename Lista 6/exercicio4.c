#include <stdio.h>

int main () {

    int num[5],i,pares=0;

    scanf ("%d%d%d%d%d",&num[0],&num[1],&num[2],&num[3],&num[4]);

    for (i=0;i < 5;i++) {

        if (num[i]%2 == 0) {
            pares += 1;
        }
    }

    printf ("%d valores pares\n",pares);

    return 0;
}