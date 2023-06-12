#include <stdio.h>

int main () {

    int X,i;
    
    scanf ("%d",&X);

    for (i=0;i <= 10;i+=2) {

        if (X%2 == 0)
            X+=1;

        X+=i;

        printf ("%d\n",X);

        X-=i;
    }

    return 0;
}