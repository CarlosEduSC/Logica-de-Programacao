#include <stdio.h>

int main () {

    double N1,N2,N3,N4,media,notaExame,mediaFinal;

    scanf ("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);

    media = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;

    printf ("Media: %.1f\n",media);

    if (media >= 7.0)
        printf ("Aluno aprovado.\n");

    else if (media < 5.0)
        printf ("Aluno reprovado.\n");

    else if (media >= 5.0 && media <= 6.9) {
        printf ("Aluno em exame.\n");

        scanf ("%lf",&notaExame);

        printf ("Nota do exame: %.1f\n",notaExame);

        mediaFinal = (media+notaExame)/2;

        if (mediaFinal >= 5.0) {
            printf ("Aluno aprovado.\n");

            printf ("Media final: %.1f\n",mediaFinal);
        
        } else if (mediaFinal <= 4.9) {
            printf ("Aluno reprovado.\n");

            printf ("Media final: %.1f\n",mediaFinal);
        }
    }

    return 0;
}