#include <stdio.h>

int main (){
    
    int n[1000], t, i;
    
    scanf("%i", &t);
    
    printf("N[%i] = %i\n", 0, 0);
    
    n[0] = 0;
    
    for(i = 1; i < 1000; i++){
        
        n[i] = 1 + n[i-1];
        
        if(n[i] == t){
            n[i] = 0;
        }
        
        printf("N[%i] = %i\n", i, n[i]);
    }
    
    return 0;
}