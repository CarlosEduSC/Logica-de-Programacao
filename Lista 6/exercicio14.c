#include <stdio.h>

int main () {

    int N,i,fatorial;

    scanf ("%d",&N);

    for(fatorial = 1; N > 1; N = N - 1) {      
      fatorial = fatorial * N;
  }
    
    printf ("%d\n",fatorial);

    return 0;
}