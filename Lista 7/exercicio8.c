#include <stdio.h>

int main () {

    int inter=0,gremio=0,empates=0,golsInter,golsGremio,grenais=1,opcao;

    do {

        scanf ("%d%d",&golsInter,&golsGremio);

        if (golsInter > golsGremio)
            inter++;

        else if (golsGremio > golsInter)
            gremio++;

        else if (golsInter == golsGremio)
            empates++;

        printf ("Novo grenal (1-sim 2-nao)\n");
        scanf ("%d",&opcao);

        switch (opcao) {

            case 1:
                grenais++;

            case 2:
            break;
        }
    
    } while (opcao != 2);

    printf ("%d grenais\n",grenais);

    printf ("Inter:%d\n",inter);

    printf ("Gremio:%d\n",gremio);

    printf ("Empates:%d\n",empates);

    if (inter > gremio)
        printf ("Inter venceu mais\n");

    else if (gremio > inter)
        printf ("Gremio venceu mais\n");

    else if (gremio == inter)
        printf ("Nao houve vencedor\n");

    return 0;
}