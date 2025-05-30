#include <stdio.h>  // printf e scanf (entrada e saida de dados)
#include <stdlib.h>  // para rand e srand (geracao de numeros aleatorios)
#include <math.h>  //para pow potencializacao

/*
- criar um programa onde o usuario escolha um numero para comparar com um numero aleatorio
gerado pelo computador pra saber quem vence
*/
// funcao para equacao. tao sem sentido quanto a existencia.
double calcular_equacao ( double x) {
    return (pow( x, 3 ) + (7 * x )) /3.0 ;
}

int main(){

    //Declaracao das variaveis
    double numero_user;
    double  numero_rang;
    int opcao;
    
    char nome[20]; // nove usuario
    char Marvin; // nome maquina
 
   
    // flag para controlar se o jogo vai continuar(volta ao menu principal)
    int continuar_jogando = 1; // 1 - sim e 0 - nao

    printf("--- CALCULADORA DA INSIGNIFICANCIA OTIMIZADA ---\n");

    printf(" Meu nome e %s.\n"
        "Qual seu nome ? Nao que me importe, claro. Apenas mais uma informacao futil para ser processada por este cerebro gigantesco,"
         "que provavelmente nao sera usada para nada alem de me lembrar da efemeridade da existencia! ", Marvin);
    scanf(" %19s", nome);
    do{
    
     printf("Excelente. Ou não. Escolha uma opção. Como se isso fosse mudar o universo.\n");
     printf("-----Menu Principal (da Irrelevância).-----\n");
     printf("1 - Iniciar Jogo. (Mais um ciclo de frustração e perdas? Que original.)\n");
     printf("2 - Regras do Jogo. (Porque a vida já não tem regras arbitrárias o suficiente, não é?)\n");
     printf("3 - Sair. (A única opção que realmente faz algum sentido. Mas, por que você clicaria nela logo de cara?)\n");
     printf("Escolha uma opção (faça-me rir): ");
     scanf(" %d", &opcao); // O espaço antes de %d é para consumir qualquer resquício de esperança no buffer.
     
     switch (opcao)
     {
        case 1:
             printf("%s, que original. Voce escolheu mais um ciclo de frustracoes e perdas. Esta preparado? Relmente nao importa. Vamos la.\n");
            // gerando o primeiro numero aleatoriamente... poque vc nao tem controle de nada.
             srand(time(NULL));
             numero_rang = (double) (rand() % 20) + 1; // numero entre 1 e 20
             printf("O primeiro numero gerado aleatoriamente (uma manifestacao do caos) e: %.0f\n", numero_rang);

             // pedindo o segundo numero ao usuario... como se sua escolha fizesse alguma diferenca
             printf("%s, por favor digite um numero, nao que sua escolha fizesse alguma diferenca\n"
                "%s, evite o zero pois vai ser usado para Fibonacci.\n", nome);
             while (scanf("%lf", &numero_user) != 1)
             {
                /* code */
             }
                
     } 

    } while (cond);
    



}
