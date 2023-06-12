/*Faça um programa semelhante ao anterior, mas agora as duas strings devem ser
digitadas pelo usuário e depois concatenadas e atribuídas a uma terceira string. Exibir o
tamanho de todas elas após a concatenação

Exemplo: string1: lua               string2: nova

Após concatenar: string1: lua       string2: nova       string3: lua nova

Tamanhos: 3 4 8
*/

#include <stdio.h>
#include <string.h>
#define TAM 99

int main () {

    char str1[TAM];
    char str2[TAM];
    char str3[TAM];
    int tam1,tam2,tam3;

    printf ("\nDigite a primeira palavra (colocando um espaco ao final): ");
    fgets (str1,99,stdin);   

    printf ("\nDigite a segunda palavra: ");
    fgets (str2,99,stdin);

    tam1 = strlen (str1);
    if (str1[tam1-1] == '\n')
        str1[tam1-1] = 0;

    strcat (str1,str2);

    strcpy (str3,str1);

    tam2 = strlen (str2);
    tam3 = strlen (str3);

    printf ("\n==========//==========\n");

    printf ("\nJuncao das duas palavras: %s\n",str3);

    printf ("\nTamanhos: %d, %d, %d\n",tam1-1,tam2-1,tam3-1);

    return 0;
}