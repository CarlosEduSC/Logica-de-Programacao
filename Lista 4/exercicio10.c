#include <stdio.h>

int main () {

    double salario,reajuste;

    scanf ("%lf",&salario);

    if (salario >= 0 && salario <= 400) {
        reajuste = (salario*15)/100;
        salario += reajuste;
        
        printf ("Novo salario: %.2f\n",salario);
        printf ("Reajuste ganho: %.2f\n",reajuste);
        printf ("Em percentual: 15 %\n");
    
    } else if (salario >= 400.01 && salario <= 800) {
        reajuste = (salario*12)/100;
        salario += reajuste;
        
        printf ("Novo salario: %.2f\n",salario);
        printf ("Reajuste ganho: %.2f\n",reajuste);
        printf ("Em percentual: 12 %\n");
    
    } else if (salario >= 800.01 && salario <= 1200) {
        reajuste = (salario*10)/100;
        salario += reajuste;
        
        printf ("Novo salario: %.2f\n",salario);
        printf ("Reajuste ganho: %.2f\n",reajuste);
        printf ("Em percentual: 10 %\n");
    
    } else if (salario >= 1200.01 && salario <= 2000) {
        reajuste = (salario*7)/100;
        salario += reajuste;
        
        printf ("Novo salario: %.2f\n",salario);
        printf ("Reajuste ganho: %.2f\n",reajuste);
        printf ("Em percentual: 7 %\n");
    
    } else if (salario > 2000) {
        reajuste = (salario*4)/100;
        salario += reajuste;
        
        printf ("Novo salario: %.2f\n",salario);
        printf ("Reajuste ganho: %.2f\n",reajuste);
        printf ("Em percentual: 4 %\n");
    
    }

    return 0;
}