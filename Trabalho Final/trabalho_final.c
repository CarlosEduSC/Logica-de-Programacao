#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

struct funcionario {

    char nome[50];
    int estudo,linguas,cargo,salario;
    double produtividade;    


};



int funcionario();
int calculo_salario (int nivel, int estudo, int linguas, double produtividade);
int acima_media (int n, struct funcionario funcionarios[]);
int fatorial(int estudo);
int poliglota(int linguas);
int salario_base(int nivel);

int main () {

    int n,i,menu,calcularSalario,numFuncionario,acimaMedia;
    char nomeFuncionario[50],EouV,menu2;
    struct funcionario funcionarios[99];

    printf ("\nQuantas pessoas trabalham na empresa? ");
    scanf ("%d",&n);


    for (i=1;i <= n;i++) {

        printf ("\nDigite o nome completo do funcionarios: ");
        fgets (funcionarios[i].nome,50,stdin);
        flush_in();

        do {
            printf ("\nQual o grau de estudo do funcionario (1 à 5) ? ");
            scanf ("%d",&funcionarios[i].estudo);

            if (funcionarios[i].estudo < 1 || funcionarios[i].estudo > 5) {

                printf ("\nO grau de estudo deve de ser de 1 à 5.\n");

                printf ("\n==========//==========\n");
            }
        
        } while (funcionarios[i].estudo < 1 || funcionarios[i].estudo > 5);

        printf ("\nQuantas linguas o funcionario fala? ");
        scanf ("%d",&funcionarios[i].linguas);

        do {
            printf ("\nQual o cargo que ocupa (1⁰,2⁰,3⁰ ou 4⁰ nível) ? ");
            scanf ("%d",&funcionarios[i].cargo);

            if (funcionarios[i].cargo < 1 || funcionarios[i].cargo > 4) {

                printf ("\nO nível do cargo deve ser de 1 à 4.\n");

                printf ("\n==========//==========\n");
            }
        
        } while (funcionarios[i].cargo < 1 || funcionarios[i].cargo > 4);

        do {
            printf ("\nQual o indice de produtividade do funcionario (0 até 1.0) ? ");
            scanf ("%lf",&funcionarios[i].produtividade);

            if (funcionarios[i].produtividade < 0 || funcionarios[i].produtividade > 1.0) {

                printf ("\nO indice de produtividade deve de ser de 0 à 1.0.\n");

                printf ("\n==========//==========\n");
            }
        
        } while (funcionarios[i].produtividade < 0 || funcionarios[i].produtividade > 1.0);

        printf ("\n==========//==========\n");


        flush_in();
        printf ("\nDeseja calcular o salario do funcionario (S/N)? ");
        scanf ("%c",&calcularSalario);

        if (calcularSalario == 'S' || calcularSalario == 's') {

            funcionarios[i].salario = calculo_salario(funcionarios[i].cargo,funcionarios[i].estudo,funcionarios[i].linguas,funcionarios[i].produtividade);

            printf ("\nO salario do funcionario é: %d\n",funcionarios[i].salario);

            printf ("\n==========//==========\n");
        }
    }

    do {

        printf ("\n1 - Cadastro de novo funcionario.\n2 - Calculo de salario.\n3 - Editar e visualizar as informações de um funcionario.\n4 - Sair.\n");

        printf ("\nEscolha uma das opções acima: ");
        scanf ("%d",&menu);

        printf ("\n==========//==========\n");

        switch (menu) {

            case 1:
                n+=1;

                printf ("\nDigite o nome completo do funcionarios: ");
                fgets (funcionarios[n].nome,50,stdin);
                flush_in();

                do {
                    printf ("\nQual o grau de estudo do funcionario (1 à 5) ? ");
                    scanf ("%d",&funcionarios[i].estudo);

                    if (funcionarios[n].estudo < 1 || funcionarios[n].estudo > 5) {

                        printf ("\nO grau de estudo deve de ser de 1 à 5.\n");

                        printf ("\n==========//==========\n");
                    }
                
                } while (funcionarios[i].estudo < 1 || funcionarios[n].estudo > 5);

                printf ("\nQuantas linguas o funcionario fala? ");
                scanf ("%d",&funcionarios[n].linguas);

                do {
                    printf ("\nQual o cargo que ocupa (1⁰,2⁰,3⁰ ou 4⁰ nível) ? ");
                    scanf ("%d",&funcionarios[n].cargo);

                    if (funcionarios[n].cargo < 1 || funcionarios[n].cargo > 4) {

                        printf ("\nO nível do cargo deve ser de 1 à 4.\n");

                        printf ("\n==========//==========\n");
                    }
                
                } while (funcionarios[n].cargo < 1 || funcionarios[n].cargo > 4);

                do {
                    printf ("\nQual o indice de produtividade do funcionario (0 até 1.0) ? ");
                    scanf ("%lf",&funcionarios[n].produtividade);

                    if (funcionarios[n].produtividade < 0 || funcionarios[n].produtividade > 1.0) {

                        printf ("\nO indice de produtividade deve de ser de 0 à 1.0.\n");

                        printf ("\n==========//==========\n");
                    }
                
                } while (funcionarios[n].produtividade < 0 || funcionarios[n].produtividade > 1.0);

                printf ("\n==========//==========\n");


                flush_in();
                printf ("\nDeseja calcular o salario do funcionario (S/N)? ");
                scanf ("%c",&calcularSalario);

                if (calcularSalario == 'S' || calcularSalario == 's') {

                    funcionarios[n].salario = calculo_salario(funcionarios[n].cargo,funcionarios[n].estudo,funcionarios[n].linguas,funcionarios[n].produtividade);

                    printf ("\nO salario do funcionario é: %d\n",funcionarios[n].salario);

                    printf ("\n==========//==========\n");
                }
                break;

            
            case 2:
                printf("\n=================== FUNCIONÁRIOS ===================\n");

                printf ("\nPara sair digite 0\n");

                for (i=1;i <= n;i++) {
                    printf ("\nFuncionario %d\n",i);
                    fputs (funcionarios[i].nome, stdout);
                }

                printf ("\n==========//==========\n");


                printf ("\nQual funcionario que deseja calcular (digite o numero dele)? ");
                scanf ("%d",&numFuncionario);

                if (numFuncionario == 0) {

                    printf ("\n==========//==========\n");
                    break;
                        
                } else {
                    funcionarios[numFuncionario].salario = calculo_salario(funcionarios[numFuncionario].cargo,funcionarios[numFuncionario].estudo,funcionarios[numFuncionario].linguas,funcionarios[numFuncionario].produtividade);

                    printf ("\nO salario do funcionario é: %d\n",funcionarios[numFuncionario].salario);

                    printf ("\n==========//==========\n");
                }
                break;

                case 3:
                     printf("\n=================== FUNCIONÁRIOS ===================\n");

                printf ("\n0 - Sair\n");

                for (i=1;i <= n;i++) {
                    printf ("\nFuncionario %d\n",i);
                    fputs (funcionarios[i].nome, stdout);
                }

                printf ("\n==========//==========\n");


                printf ("\nQual funcionario que deseja editar ou visualizar (digite o numero dele)? ");
                scanf ("%d",&numFuncionario);

                if (numFuncionario == 0)
                    break;
                        
                else {
                    
                    do {

                        flush_in();
                        printf ("\nDeseja sair, visualizar ou editar as informações desse funcionario (S/V/E)? ");
                        scanf ("%c",&EouV);

                        if (EouV == 'e' || EouV == 'E') {

                            do {

                                printf ("\na) Nome\nb) Grau de estudo\nc) Quantidade de linguas falada\nd) Cargo que ocupa\ne) Indice de produtividade\nf) Salario\ng) Sair\n");

                                printf ("\n==========//==========\n");

                                flush_in ();
                                printf ("\nEscolha uma das opções acima: ");
                                scanf ("%c",&menu2);

                                switch (menu2) {

                                    case 'a':
                                    case 'A':
                                        flush_in ();
                                        printf ("\nQual o novo nome? ");
                                        scanf ("%s",&funcionarios[numFuncionario].nome);
                                        printf ("\n==========//==========\n");
                                        break;

                                    case 'b':
                                    case 'B':
                                        do {
                                            
                                            printf ("\nQual o novo grau de estudo (1 à 5)? ");
                                            scanf ("%d",&funcionarios[numFuncionario].estudo);
                                            
                                            if (funcionarios[numFuncionario].estudo < 1 || funcionarios[numFuncionario].estudo > 5) {

                                                printf ("\nO grau de estudo deve de ser de 1 à 5.\n");
                                            }
                                            printf ("\n==========//==========\n");
                                        
                                        } while (funcionarios[numFuncionario].estudo < 1 || funcionarios[numFuncionario].estudo > 5);
                                        break;

                                    case 'c':
                                    case 'C':
                                        printf ("\nQual a quantidade de linguas faladas agora? ");
                                        scanf ("%d",&funcionarios[numFuncionario].linguas);
                                        printf ("\n==========//==========\n");
                                        break;

                                    case 'd':
                                    case 'D':
                                        do {

                                            printf ("\nQual o novo nivel (1 à 4)? ");
                                            scanf ("%d",&funcionarios[numFuncionario].cargo);

                                            if (funcionarios[numFuncionario].cargo < 1 || funcionarios[numFuncionario].cargo > 4) {

                                                printf ("\nO nível do cargo deve ser de 1 à 4.\n");
                                            }
                                            printf ("\n==========//==========\n");

                                        } while (funcionarios[numFuncionario].cargo < 1 || funcionarios[numFuncionario].cargo > 4);
                                        break;

                                    case 'e':
                                    case 'E':
                                        do {
                                            
                                            printf ("\nQual o novo indice de produtividade (0 à 1.0)? ");
                                            scanf ("%lf",&funcionarios[numFuncionario].produtividade);
                                            printf ("\n==========//==========\n");

                                        } while (funcionarios[numFuncionario].produtividade < 0 || funcionarios[numFuncionario].produtividade > 1.0);
                                        break;

                                    case 'f':
                                    case 'F':
                                        printf ("\nQual o novo salario do funcionario? ");
                                        scanf ("%d",&funcionarios[numFuncionario].salario);
                                        printf ("\n==========//==========\n");
                                        break;

                                    case 'g':
                                    case 'G':
                                        printf ("\n==========//==========\n");
                                        break;

                                    default:
                                        printf ("\nA opção é invalida!\n");
                                        printf ("\n==========//==========\n");
                                }
                            } while (menu2 != 'g' || menu2 != 'G');
                        
                        } else if (EouV == 'v' || EouV == 'V') {

                            do {

                                printf ("\na) Nome\nb) Grau de estudo\nc) Quantidade de linguas falada\nd) Cargo que ocupa\ne) Indice de produtividade\nf) Salario\ng) Sair\n");

                                printf ("\n==========//==========\n");

                                flush_in ();
                                printf ("\nEscolha uma das opções acima: ");
                                scanf ("%c",&menu2);

                                switch (menu2) {

                                    case 'a':
                                    case 'A':
                                        printf ("\nNome do funcionario:\t");
                                        puts (funcionarios[numFuncionario].nome);
                                        printf ("\n==========//==========\n");
                                        break;

                                    case 'b':
                                    case 'B':
                                        printf ("\nGrau de estudo do funcionario: %d\n",funcionarios[numFuncionario].estudo);
                                        printf ("\n==========//==========\n");
                                        break;

                                    case 'c':
                                    case 'C':
                                        printf ("\nQuantidade de linguas falada pelo funcionario: %d\n",funcionarios[numFuncionario].linguas);
                                        printf ("\n==========//==========\n");
                                        break;

                                    case 'd':
                                    case 'D':
                                        printf ("\nNivel do cargo que ocupa o funcionario: %d\n",funcionarios[numFuncionario].cargo);
                                        printf ("\n==========//==========\n");
                                        break;

                                    case 'e':
                                    case 'E':
                                        printf ("\nIndice de produtividade do funcionario: %.1lf\n",funcionarios[numFuncionario].produtividade);
                                        printf ("\n==========//==========\n");
                                        break;

                                    case 'f':
                                    case 'F':
                                        printf ("\nSalario do funcionario: %d\n",funcionarios[numFuncionario].salario);
                                        printf ("\n==========//==========\n");
                                        break;

                                    case 'g':
                                    case 'G':
                                        break;

                                    default:
                                        printf ("\nA opção é invalida!\n");
                                        printf ("\n==========//==========\n");
                                }
                            } while (menu2 != 'g' || menu2 != 'G');
                            break;
                        }
                    } while (EouV != 'S' || EouV != 's');
                }
                break;

            case 4:
                break;

            default:
                printf ("\nOpcao invalida!\n");

        }

    } while (menu != 5);




    return 0;
}



/*CALCULO DE SALARIO*/

int calculo_salario (int nivel, int estudo, int linguas, double produtividade){
    
    double salario;
    
    if(produtividade > 0.7)
        salario = (salario_base(nivel) + (fatorial(estudo)*100) + (poliglota(linguas)*100) + (salario_base(nivel)*produtividade));
    
    else if(produtividade <= 0.7 && produtividade >= 0.4)
        salario = (salario_base(nivel) + (fatorial(estudo)*100) + (poliglota(linguas)*100));
    
    else
        salario = (salario_base(nivel) + (fatorial(estudo)*100) + (poliglota(linguas)*100) - (salario_base(nivel)*(0.4 - produtividade)));
    
    return salario;
}


/*FUNCIONARIOS QUE GUANHAM ACIMA DA MÉDIA*/

int acima_media (int n, struct funcionario funcionarios[99]) {

    int i,cont=0,soma=0;
    double media;

    for (i=1;i < n;i++) {

        soma+= funcionarios[i].salario;
    }

    media = soma/n;

    for (i=1;i < n;i++) {

        if (funcionarios[i].salario > media) {

            cont++;
        }
    }

    return cont;
}


/*FATORIAL DO GRAU DE ESTUDO*/

int fatorial(int estudo) {

    int fatorial;

    for(fatorial=1; estudo > 1; estudo--) {
        fatorial = fatorial * estudo;
    }

    return fatorial;
}


/*LINGUAS FALADAS ELEVADO A0 CUBO*/

int poliglota(int linguas) {

    int resultado;

    resultado = pow(linguas,3);

    return resultado;
}


/*SALARIO BASE*/

int salario_base(int nivel) {

    int salario;

    switch (nivel) {

        case 1:
            salario = 1000;
            break;

        case 2:
            salario = 1500;
            break;    

        case 3:
            salario = 2000;
            break;

        case 4:
            salario = 2500;
            break;   
    }

    return salario;
}