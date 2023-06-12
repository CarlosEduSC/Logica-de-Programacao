#include <stdio.h>

int main () {

    int X,Y,i,j,somai=0,somaj=0;

    scanf ("%d%d",&X,&Y);
        
        for (i=X-1;i > Y;i--) {

            if (i%2 != 0) {
                somai += i;
            }
        }
        
        for (j=X+1;j < Y;j++) {

            if (j%2 != 0) {
                somaj += j;
            }
        }

    if (X > Y)
        printf ("%d\n",somai);

    else if (X < Y)
        printf ("%d\n",somaj);

    return 0;
}