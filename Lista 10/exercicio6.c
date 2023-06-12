/*Faça um programa para ler uma string e mostrar o seu conteúdo de forma invertida.

Exemplo:

Entrada: teste
Saída: etset
*/

#include <stdio.h>
#include <string.h>

int main () {

    char string[99];
    char string2[99];
    int i,j=0;

    printf ("\nDigite uma frase: ");
    fgets (string,99,stdin);

    for (i=strlen(string)-1;i >= 0;i--) {
        string2[j] = string[i];
        j++;
    }

    printf ("\n==========//==========\n");

    printf ("\nA frase invertida eh: %s",string2);

    return 0;
}