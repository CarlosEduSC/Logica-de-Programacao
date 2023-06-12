#include <stdio.h>

int main (){
    
    int impar[5],par[5],i,valor,j = 0,k = 0,z;

    for (i = 0; i < 15; i++){
        
        scanf ("%i", &valor);
    
        if (valor % 2 == 0){
            par[j] = valor;
            j++;
        
        } else if (valor % 2 == 1 || valor % 2 == -1){
            impar[k] = valor;
            k++;
        }
        
        if (j == 5 || k == 5){
            
            if (j == 5){
                
                for (z = 0; z < 5; z++){
                    
                    printf ("par[%i] = %i\n", z, par[z]);
                }
                
                j = 0;
                z = 0;
            
            } else if (k == 5){
                
                for (z = 0; z < 5; z++){
                    
                    printf ("impar[%i] = %i\n", z, impar[z]);
                }

                k = 0;
                z = 0;
            }
        }
    }
    
    z = 0;
    
    if (j < 5 || k < 5){
        
        if (k < 5) {
            
            for (z=0;z < k;z++) {
                
                printf ("impar[%i] = %i\n", z, impar[z]);
            }
        }
        
        z = 0;
        
        if(j < 5) {
                
                for (z = 0; z < j; z++) {
                    
                    printf ("par[%i] = %i\n", z, par[z]);
                }
            } 
    }
    
    return 0;
}