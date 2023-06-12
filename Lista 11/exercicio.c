/*Crie uma struct chamado TPessoa para armazenar os seguintes dados: 

codigo (inteiro)
nome (string)
sexo (char)
idade (inteiro)
altura (real)
peso (real)

Faça um programa para ler uma quantidade indeterminada de pessoas (solicitar o valor 'n'
para o usuário; declarar um vetor chamado cadastro de TPessoa com um tamanho constante
TAM e controlar o uso do vetor com a variável 'n'). 
O menu do programa deve apresentar as seguintes opções: 

a) Cadastro de uma pessoa (as 'n' pessoas devem ser cadastradas antes de qualquer
outra operação);

b) Alterar os dados de uma pessoa (informada pelo usuário através do código.);
* Dentro da opção de Alterar, será necessário incluir um novo menu solicitando qual
dos campos se deseja alterar (identificar os campos por número como opções do
menu) e o usuário pode escolher somente um campo por vez, mas o menu deve
permanecer enquanto o usuário não escolher a opção de sair do modo de edição.

c) Excluir uma pessoa (deixar todos os campos vazios através do código informado
pelo usuário).

d) Mostrar os dados de apenas uma pessoa (informada pelo usuário através do
código);

e) Mostrar os dados de todos os cadastros;*/

#include <stdio.h>
#include <string.h>

struct TPessoa {

    int codigo;
    char nome[99];
    int idade;
    float altura;
    float peso;
};

void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

int main () {

int n,i,j,codigo,alterar,tam;
char opcao;

printf ("\nQuantas pessoas serao cadastradas? ");
scanf ("%d",&n);
flush_in ();

printf ("\n==========//==========\n");

struct TPessoa usuarios[n];

for (i=0;i < n;i++) {
    
    usuarios[i].codigo = i+1;

    printf ("\nO codigo deste usuario sera: %d\n",usuarios[i].codigo);

    printf ("\nDigite o nome do usuario: ");
    fgets (usuarios[i].nome,99,stdin);

    printf ("\nDigite a idade do usuario: ");
    scanf ("%d",&usuarios[i].idade);

    printf ("\nDigite a altura do usuario: ");
    scanf ("%f",&usuarios[i].altura);

    printf ("\nDigite o peso do usuario: ");
    scanf ("%f",&usuarios[i].peso);
    flush_in();

    printf ("\n==========//==========\n");
}

printf ("\nA - Alterar os dados de um usuario;\n");

printf ("\nB - Excluir uma pessoa;\n");

printf ("\nC - Mostrar os dados de apenas uma pessoa;\n");

printf ("\nD - Mostrar os dados de todos os cadastros;\n");

printf ("\nE - Sair do programa.\n\n");

printf ("\nEscolha uma das opcoes acima (A,B,C,D,E): ");
scanf ("%c",&opcao);

printf ("\n==========//==========\n");

switch (opcao) {

    case 'A':
    case 'a':
        printf ("\nDigite o codigo do usuario: ");
        scanf ("%d",&codigo);

        printf ("\n==========//==========\n");

        for (i=0;i < n;i++) {

            if (usuarios[i].codigo == codigo) {

                do {

                    printf ("\n1 - Nome;\n");

                    printf ("\n2 - Idade;\n");

                    printf ("\n3 - Altura;\n");

                    printf ("\n4 - Peso;\n");

                    printf ("\n5 - Sair.\n");

                    printf ("\nEscolha qual dado deseja alterar: ");
                    scanf ("%d",&alterar);
                    flush_in();

                    switch (alterar) {

                        case 1:
                            printf ("\nDigite o novo nome: ");
                            fgets (usuarios[i].nome,99,stdin);
                            break;

                        case 2:
                            printf ("\nDigite a nova idade: ");
                            scanf ("%d",&usuarios[i].idade);
                            break;

                        case 3:
                            printf ("\nDigite a nova altura: ");
                            scanf ("%f",&usuarios[i].altura);
                            break;

                        case 4:
                            printf ("\nDigite o novo peso: ");
                            scanf ("%f",&usuarios[i].peso);
                            break;

                        case 5: break;

                        default:
                            printf ("\nOpcao invalida!");

                    }
                } while (alterar != 5);
            }
        }
        break;

    case 'B':
    case 'b':
        printf ("\nDigite o codigo do usuario: ");
        scanf ("%d",&codigo);

        printf ("\n==========//==========\n");

        for (i=0;i < n;i++) {

            if (usuarios[i].codigo == codigo) {
                
                tam = strlen (usuarios[i].nome);

                for (j=0;j < tam;j++)
                    usuarios[i].nome[j] = ' ';

                usuarios[i].idade = 0;

                usuarios[i].altura = 0;

                usuarios[i].peso = 0;
            
                printf ("\nOs dados do usuario %d foram excluidos!\n",usuarios[i].codigo);
            }
        }


        break;

    case 'C':
    case 'c':
        printf ("\nDigite o codigo do usuario: ");
        scanf ("%d",&codigo);

        printf ("\n==========//==========\n");
        
        for (i=0;i < n;i++) {

            if (usuarios[i].codigo == codigo) {

                printf ("\nCodigo do usuario: %d\n",usuarios[i].codigo);

                printf ("\nNome do usuario: %s",usuarios[i].nome);

                printf ("\nIdade do usuario: %d\n",usuarios[i].idade);

                printf ("\nAltura do usuario: %.2f\n",usuarios[i].altura);

                printf ("\nPeso do usuario: %.2f\n",usuarios[i].peso);

            }
        }
        break;

    case 'D':
    case 'd':
        for (i=0;i < n;i++) {
            printf ("\nCodigo do usuario: %d\n",usuarios[i].codigo);

            printf ("\nNome do usuario: %s",usuarios[i].nome);

            printf ("\nIdade do usuario: %d\n",usuarios[i].idade);

            printf ("\nAltura do usuario: %.2f\n",usuarios[i].altura);

            printf ("\nPeso do usuario: %.2f\n",usuarios[i].peso);

            printf ("\n==========//==========\n");
        }
        break;

    case 'E':
    case 'e': break;

    default:
        printf ("\nA opcao escolhida eh invalida!\n");
}

return 0;
}