#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* Jogo para adivinhar o numero
*/
int main(){

    //Declaracao das variaveis 
    int opcao;
    int numero_secreto;
    int palpite;
    int regras;
    int tentativas;

    // Menu de opcoes para o usuario.

    printf("-----Menu Principal.-----\n");
    printf("1 - Iniciar Jogo.\n");
    printf("2 - ver Regras.\n");
    printf("3 - Sair.\n");
    printf("Escolha uma opcao: ");
    scanf(" %d", &opcao);

    switch (opcao){
        case 1:
             srand(time(0));
             numero_secreto = rand() % 11 + 10; // gerador de numero aleatorio de 0 a 20
             // printf("numero secreto, %d\n", numero_secreto);
             int tentativas = 0; // inicializa as contagens para tentativas
             const int max_tentativas = 3 ; // define a quantidade maxima de tentativas
             // inicio do loop 
             for (tentativas = 1; tentativas <= max_tentativas; tentativas++){
                printf("Tentativa %d de %d.\n", tentativas, max_tentativas); // informacao ao usuario de numeros de tentativas 
                printf("Escolha um numero entre 0 e 20: ");
                scanf(" %d", &palpite);

                if (palpite == numero_secreto) {
                    printf("Parabens! Voce acertou o numero secreto %d!\n", numero_secreto);
                    break;// saida do loop, usuario acertou o numero secreto
                }
                else if (palpite < numero_secreto){
                    printf("Seu palpite foi baixo. Tente outra vez!");
                }
                else {
                    printf("Seu palpite foi alto. Tente outra vez!");

                }
             }
        if (palpite != numero_secreto) {
             printf("Voce alcancou o limite de %d tentativas. o numero serecto era %d", max_tentativas, numero_secreto);
             }
             
       
      
        break;
    }

}
