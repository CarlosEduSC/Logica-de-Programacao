#include <stdio.h>

int main (){
    
    int  i, j,k,linhas=12;
    char op;
    double M[12][12], soma = 0, media = 0;

    scanf(" %c",&op);
    
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            
            scanf("%lf",&M[i][j]);
        }
    }

    if(op == 'S'){
        
        for(i=0;i < 12;i++){
            for (j=0;j < 12;j++) {

                if (j >= linhas && i > 0) {
                    soma+= M[i][j];
                }
            }

            linhas--;
        }
        
        printf("%.1f\n",soma);
    
    } else if(op == 'M'){
        
        for(i=0,k=0;i < 12;i++){
            for (j=0;j < 12;j++) {

                if (j >= linhas && i > 0) {
                    soma+= M[i][j];
                    k++;
                }
            }
            linhas--;
        }

        media = soma/k;
        
        printf("%.1f\n",media);
    }
    return 0;
}