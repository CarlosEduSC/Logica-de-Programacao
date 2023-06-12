#include <stdio.h>

int main () {

    int inicio,fim,horas;

    scanf ("%d%d",&inicio,&fim);

    switch (inicio) {

        case 1:
            if (fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 0)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 2:
            if (fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 3:
            if (fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 4:
            if (fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 5:
            if (fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;  

            break;
        
        case 6:
            if (fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 7:
            if (fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;  

            break;
        
        case 8:
            if (fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 9:
            if (fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 10:
            if (fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 11:
            if (fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;

        case 12:
            if (fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 13:
            if (fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;         

            break;
        
        case 14:
            if (fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 15:
            if (fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 16:
            if (fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 17:
            if (fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 18:
            if (fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 19:
            if (fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 20:
            if (fim == 21 || fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;

        case 21:
            if (fim == 22 || fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 22:
            if (fim == 23)
                horas = fim - inicio;

            else if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21)
                horas = inicio - fim;

            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 23:
            if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22)
                horas = 24-(inicio-fim);
            
            else if (fim == 00)
                horas = 24 - inicio;
            
            else if (inicio == fim)
                horas = 24;

            break;
        
        case 00:
            if (fim == 1 || fim == 2 || fim == 3 || fim == 4 || fim == 5 || fim == 6 || fim == 7 || fim == 8 || fim == 9 || fim == 10 || fim == 11 || fim == 12 || fim == 13 || fim == 14 || fim == 15 || fim == 16 || fim == 17 || fim == 18 || fim == 19 || fim == 20 || fim == 21 || fim == 22 || fim == 23)
                horas = inicio + fim;
            
            else if (inicio == fim)
                horas = 24;

            break;
    }

    printf ("O JOGO DUROU %d HORA(S)\n",horas);

    return 0;
}