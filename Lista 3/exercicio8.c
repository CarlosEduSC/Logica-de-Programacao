#include <stdio.h>

int main () {

    int N,horas,minutos,segundos;

    scanf ("%d",&N);

    horas = N/3600;
    minutos = (N-(horas*3600))/60;
    segundos = N-(horas*3600)-(minutos*60);

    printf ("%d:%d:%d\n",horas,minutos,segundos);

    return 0;
}