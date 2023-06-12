#include <stdio.h>

int main (){
    
    int  i, j,k;
    char op;
    double M[12][12], soma = 0, media = 0;

    scanf(" %c",&op);
    
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            
            scanf("%lf",&M[i][j]);
        }
    }

    if(op == 'S'){
        
        for(i = 0;i < 12;i++){
            for (j=0;j < 12;j++) {

                if (j < i) {
                    soma+= M[i][j];
                }
            }
        }
        
        printf("%.1f\n", soma);
    
    } else if(op == 'M'){
        
        for(i = 0,k=0;i < 12;i++){
            for (j=0;j < 12;j++) {

                if (j < i) {
                    soma+= M[i][j];
                    k++;
                }
            }
        }

        media = soma/k;
        
        printf("%.1f\n", media);
    }
    return 0;
}