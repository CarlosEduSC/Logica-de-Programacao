#include <stdio.h>

int main () {

    int num[6],i,positivos=0;

    scanf ("%d%d%d%d%d%d",&num[0],&num[1],&num[2],&num[3],&num[4],&num[5]);

    for (i=0;i < 6;i++) {

        if (num[i] > 0) {
            positivos += 1;
        }
    }

    printf ("%d valores positivos\n",positivos);

    return 0;
}