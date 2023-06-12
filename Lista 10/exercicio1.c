/*) Faça um programa para concatenar as duas strings abaixo. A segunda string deve ser
concatenada na primeira.

Exemplo: string1: lua                   string2: cheia

Após concatenar: string1: luacheia      string2: cheia
*/

#include <stdio.h>
#include <string.h>

int main () {

    char str1[10]="lua ";
    char str2[10]="cheia";

    printf ("\nString 1: %s\n",str1);

    printf ("\nString 2: %s\n",str2);

    strcat(str1,str2);

    printf ("\n==========//==========\n");

    printf ("\nConcatenacao da String 1 com a String 2: %s\n",str1);

    return 0;
}