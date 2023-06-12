#include <stdio.h>

int main () {

    int x,y,z,maior,menor,meio;

    scanf ("%d%d%d",&x,&y,&z);

    if (x > y && x > z)
       maior = x;

    else if (y > x && y > z) 
        maior = y;
    
    else if (z > x && z > y)
        maior = z;
    
    if (x < y && x < z)
        menor = x;
    
    else if (y < x && y < z)
        menor = y;
    
    else if (z < y && z < x) 
        menor = z;

    if (maior == x && menor == y)
        meio = z;

    else if (maior == x && menor == z)
        meio = y;

    else if (maior == y && menor == z)
        meio = x;

    else if (maior == y && menor == x)
        meio = z;

    else if (maior == z && menor == x)
        meio = y;

    else if (maior == z && menor == y)
        meio = x;

    printf ("%d\n",menor);

    printf ("%d\n",meio);

    printf ("%d\n",maior);

    printf ("\n");

    printf ("%d\n",x);

    printf ("%d\n",y);

    printf ("%d\n",z);

    return 0;
}