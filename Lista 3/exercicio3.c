#include <stdio.h>
#include <math.h>

int main () {

    int a,b,c,maiorAB,maior;

    scanf ("%d%d%d",&a,&b,&c);

    maiorAB = fmax (a,b);
    maior = fmax (maiorAB,c);

    printf ("%d eh o maior\n",maior);

    return 0;
}