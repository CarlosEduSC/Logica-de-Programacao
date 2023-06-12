#include <stdio.h>

int main (){
    
    int coluna, i, j, k;
    char op;
    float m[12][12], soma = 0, media = 0;

    scanf("%d",&coluna);
    scanf(" %c",&op);
    
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            
            scanf("%f", &m[i][j]);
        }
    }

    if(op == 'S'){
        
        for(k = 0; k < 12; k++){
            
            soma += m[k][coluna]; 
        }
        
        printf("%.1f\n", soma);
    
    } else if(op == 'M'){
        
        for(k = 0; k < 12; k++){
            
            soma += m[k][coluna]; 
        }
        
        media = soma / 12;
        
        printf("%.1f\n", media);
    }
    return 0;
}