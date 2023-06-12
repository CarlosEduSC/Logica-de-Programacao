#include <stdio.h>

int main () {

    int num=1,mult,N;

    scanf ("%d",&N);

    while (num <= 10) {

        mult = num*N;

        printf ("%d x %d = %d\n",num,N,mult);

        num++;
    }

    return 0;
}