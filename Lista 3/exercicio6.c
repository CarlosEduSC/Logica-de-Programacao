#include <stdio.h>

int main () {

    int tempoGasto,velocidadeMedia;
    float litrosNecessarios,kmPercorridos;

    scanf ("%d%d",&tempoGasto,&velocidadeMedia);

    kmPercorridos = tempoGasto*velocidadeMedia;
    litrosNecessarios = kmPercorridos/12;

    printf ("%.3f\n",litrosNecessarios);

    return 0;
}