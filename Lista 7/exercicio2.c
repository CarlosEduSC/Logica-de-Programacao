#include <stdio.h>

int main () {

    int N,X,in=0,out=0;

    scanf ("%d",&N);

    while (N > 0) {

        scanf ("%d",&X);

        if (X >= 10 && X <= 20)
            in+=1;

        else if (X < 10 || X > 20)
            out+=1;

        N-=1;
    }

    printf ("%d in\n",in);

    printf ("%d out\n",out);

    return 0;
}