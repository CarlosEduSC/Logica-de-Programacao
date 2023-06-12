#include <stdio.h>

int main () {

    int nota100,nota50,nota20,nota10,nota5,nota2,moeda1,moeda050,moeda025,moeda010,moeda005,moeda001;
    double N;

    scanf ("%lf",&N);

    nota100 = N/100;
    nota50 = (N-(nota100*100))/50;
    nota20 = (N-(nota100*100)-(nota50*50))/20;
    nota10 = (N-(nota100*100)-(nota50*50)-(nota20*20))/10;
    nota5 = (N-(nota100*100)-(nota50*50)-(nota20*20)-(nota10*10))/5;
    nota2 = (N-(nota100*100)-(nota50*50)-(nota20*20)-(nota10*10)-(nota5*5))/2;
    moeda1 = (N-(nota100*100)-(nota50*50)-(nota20*20)-(nota10*10)-(nota5*5)-(nota2*2))/1;
    moeda050 = (N-(nota100*100)-(nota50*50)-(nota20*20)-(nota10*10)-(nota5*5)-(nota2*2)-(moeda1*1))/0.50;
    moeda025 = (N-(nota100*100)-(nota50*50)-(nota20*20)-(nota10*10)-(nota5*5)-(nota2*2)-(moeda1*1)-(moeda050*0.50))/0.25;
    moeda010 = (N-(nota100*100)-(nota50*50)-(nota20*20)-(nota10*10)-(nota5*5)-(nota2*2)-(moeda1*1)-(moeda050*0.50)-(moeda025*0.25))/0.10;
    moeda005 = (N-(nota100*100)-(nota50*50)-(nota20*20)-(nota10*10)-(nota5*5)-(nota2*2)-(moeda1*1)-(moeda050*0.50)-(moeda025*0.25)-(moeda010*0.10))/0.05;
    moeda001 = (N-(nota100*100)-(nota50*50)-(nota20*20)-(nota10*10)-(nota5*5)-(nota2*2)-(moeda1*1)-(moeda050*0.50)-(moeda025*0.25)-(moeda010*0.10)-(moeda005*0.05))/0.01;

    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n",nota100);
    printf ("%d nota(s) de R$ 50.00\n",nota50);
    printf ("%d nota(s) de R$ 20.00\n",nota20);
    printf ("%d nota(s) de R$ 10.00\n",nota10);
    printf ("%d nota(s) de R$ 5.00\n",nota5);
    printf ("%d nota(s) de R$ 2.00\n",nota2);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n",moeda1);
    printf ("%d moeda(s) de R$ 0.50\n",moeda050);
    printf ("%d moeda(s) de R$ 0.25\n",moeda025);
    printf ("%d moeda(s) de R$ 0.10\n",moeda010);
    printf ("%d moeda(s) de R$ 0.05\n",moeda005);
    printf ("%d moeda(s) de R$ 0.01\n",moeda001);

    return 0;
}