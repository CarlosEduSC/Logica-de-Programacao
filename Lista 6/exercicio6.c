#include <stdio.h>

int main () {

    int X,i=1;

    scanf ("%d",&X);

    if (X%2 == 0) {
        
        while (i < X) {
            
            printf ("%d\n",i);

            i+=2;
        }
    }

    else if (X%2 != 0) {
        
        while (i <= X) {
            
            printf ("%d\n",i);

            i+=2;
        }
    }

    return 0;
}