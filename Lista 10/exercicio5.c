/*Faça um programa que leia uma string e troque todos os caracteres para caracteres
maiúsculos.

Exemplo:

Entrada: teste
Saída: TESTE*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

    char string[99];
    int i;

    printf ("\nDigite uma frase: ");
    fgets (string,99,stdin);

    printf ("\n==========//==========\n");

    for (i=0;i < 99;i++) {
        string[i] = toupper(string[i]);
    }

    printf ("\n%s\n",string);

    return 0;
}