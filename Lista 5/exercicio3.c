#include <stdio.h>
#include <math.h>

int main () {
    float valorinicial, resto, imposto28, imposto18, imposto8, total, restoinicial;
    
    scanf("%f", &valorinicial);
    
    resto = valorinicial;
    
    if(valorinicial > 4500) {
        restoinicial = valorinicial - 4500;
        imposto28 = 0.28*restoinicial;
        valorinicial -= restoinicial;
        
        resto = fmod(valorinicial, 3000);
        imposto18 = 0.18*resto;
        valorinicial -= resto;
        
        resto = fmod(valorinicial, 2000);
        imposto8 = 0.08*resto;
        total = imposto28 + imposto18 + imposto8;
        
        printf("R$ %.2f\n", total);
    
    } else if(valorinicial > 3000 && valorinicial <= 4500) {
        resto = fmod(valorinicial, 3000);
        imposto18 = 0.18*resto;
        valorinicial -= resto;
        
        resto = fmod(valorinicial, 2000);
        imposto8 = 0.08*resto;
        total = imposto18 + imposto8;
        
        printf("R$ %.2f\n", total);
    
    } else if(valorinicial > 2000 && valorinicial <= 3000){
        resto = fmod(valorinicial, 2000);
        imposto8 = 0.08*resto;
        total = imposto8;
        
        printf("R$ %.2f\n", total);
    
    }   else {
        printf("Isento\n");
    }
    return 0;
}