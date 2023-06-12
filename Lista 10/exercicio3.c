/*Faça um programa para contar quantos caracteres “a” existe em uma string fornecida
pelo usuário.

Exemplo:

Entrada: o dia esta nublado
Saída: 3
*/

#include <stdio.h>
#include <string.h>

int main () {

    char string[99];
    int i,tam,cont=0;

    printf ("\nDigite uma frase: ");
    fgets (string,99,stdin);

    tam = strlen(string);
    if (string[tam-1] == '\n')
        string[tam-1] = 0;

    for (i=0;i < 99;i++) {
        
        if (string[i] == 'a' || string[i] == 'A')
            cont++;
    }
    printf ("\n==========//==========\n");

    printf ("\nTamanho: %d\n",cont);

    return 0;
}