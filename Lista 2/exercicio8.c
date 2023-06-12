#include <stdio.h>

int main () {

    int NUMBER,horasTrabalhadas;
    float valorHora,SALARY;

    scanf ("%d%d%f",&NUMBER,&horasTrabalhadas,&valorHora);

    SALARY = horasTrabalhadas*valorHora;

    printf ("NUMBER = %d\n",NUMBER);

    printf ("SALARY = U$ %.2f\n",SALARY);

    return 0;
}