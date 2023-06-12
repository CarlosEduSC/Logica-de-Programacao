/*Faça um programa semelhante ao anterior, mas agora o caractere também deve ser
fornecido pelo usuário.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

    char string[99];
    char caractere;
    int i,cont=0;

    printf ("\nDigite uma frase: ");
    fgets (string,99,stdin);

    printf ("\nEscolha o caractere a ser contado: ");
    scanf ("%c",&caractere);

    caractere = toupper(caractere);

    printf ("\n==========//==========\n");

    for (i=0;i < 99;i++) {
        
        if (string[i] == caractere) 
            cont++;
    }

    printf ("\nQuantidade de %c na frase: %d\n",caractere,cont);

    return 0;
}