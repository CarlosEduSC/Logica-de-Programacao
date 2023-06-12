/*Escreva um programa que oferece ao usuário a possibilidade de calcular as áreas de
circunferências, retângulos e triângulos. Conforme a opção selecionada, solicite os
parâmetros necessários, acione uma das funções criadas nos exercícios anteriores,
exibindo o resultado.*/

#include <stdio.h>
#include <math.h>

float circulo (float raio) {

    float resul;

    resul = 3.14 * pow(raio,2);

    return resul;
}

float retangulo (float base, float altura) {

    float area;

    area = base*altura;

    return area;
}

float triangulo (float base, float altura) {

    float area;

    area = (base*altura)/2;

    return area;
}

int main () {

int opcao;
float base,altura,raio;

printf ("\n1 - Area de uma circunferencia;\n2 - Area de um retangulo;\n3 - Area de um triangulo.\n");

printf ("\nEscolha uma das opcoes de calculo a cima: ");
scanf ("%d",&opcao);


switch (opcao) {

    case 1:
        printf ("\nDigite o raio da circunferencia: ");
        scanf ("%f",&raio);

        printf ("\n==========//==========\n");

        printf ("A area da circunferencia eh: %.2f\n",circulo(raio));
        break;

    case 2:
        printf ("\nDigite a medida da base do retangulo: ");
        scanf ("%f",&base);

        printf ("\nDigite a altura do retangulo: ");
        scanf ("%f",&altura);

        printf ("\n==========//=========\n");

        printf ("\nA area do retangulo eh: %.2f\n",retangulo(base,altura));
        break;

    case 3:
        printf ("\nDigite a medida da base do triangulo: ");
        scanf ("%f",&base);

        printf ("\nDigite a altura do triangulo: ");
        scanf ("%f",&altura);

        printf ("\n==========//==========\n");

        printf ("\nA area do triangulo eh: %.2f\n",triangulo(base,altura));
        break;

    default:
        printf ("\nOpcao invalida!\n");
}

return 0;
}