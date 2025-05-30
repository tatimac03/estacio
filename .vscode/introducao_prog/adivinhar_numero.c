#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * Jogo para adivinhar o numero
 */
int main()
{

    // Declaracao das variaveis
    int opcao;
    int numero_secreto;
    int palpite;
    int regras;
    int tentativas; // Pode ser inicializada dentro do loop do jogo
    char nome[20];  // nome do jogador
    // flag  para controlar se o jogo deve continuar(voltar ao menu principal.)
    int continuar_jogando = 1; //  1 - significa sim e 0- significa nao

    // inicio do loop principal do jogo ( que inclui o menu principal)
    printf("Bem-vindo. Como posso chamar voce?");
    scanf(" %19s", nome);
    do{
    printf("%s escolha uma opcao.\n");
    printf("-----Menu Principal.-----\n");
    printf("1 - Iniciar Jogo.\n");
    printf("2 - Regras do Jogo.\n");
    printf("3 - Sair.\n");
    printf("Escolha uma opcao: ");
    scanf(" %d", &opcao); // espaco antes de %d consome quebras de linhas pendentes

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numero_secreto = rand() % 21; // gerador de numero aleatorio de 0 a 20
        // printf("numero secreto, %d\n", numero_secreto); // manteha cometado para o jogo real

        const int max_tentativas = 3; // define a quantidade maxima de tentativas

        printf("\nBem-vindo ao Jogo de Advinhacao!\n");
        printf("%s, estou pensando em um numero entre 0 e 20. Voce consegue adivinhar? Mas atencao so tem %d tentativas!!\n", nome, max_tentativas);

        //int tentativas = 0; // inicializa as contagens para tentativas
        int acertou = 0;
        // inicio do loop
        for (tentativas = 1; tentativas <= max_tentativas; tentativas++)
        {
            printf("Tentativa %d de %d.\n", tentativas, max_tentativas); // informacao ao usuario de numeros de tentativas
            printf("Escolha um numero entre 0 e 20: ");
            scanf(" %d", &palpite);

            if (palpite == numero_secreto)
            {
                printf("%s, Parabens! Voce acertou o numero secreto %d!\n", nome, numero_secreto);
                acertou = 1; // marca que o jogador acertou
                break;       // saida do loop, usuario acertou o numero secreto
            }
            else if (palpite < numero_secreto)
            {
                printf("%s,seu palpite foi baixo. Tente outra vez!", nome);
            }
            else
            {
                printf("%s, seu palpite foi alto. Tente outra vez!", nome);
            }
        }
        // Verifica o resultado do jogo, depois do loop de tentativas.
        if (!acertou)
        { // se acertou for 0 (falso)
            printf("\n%s, voce alcancou o limite de %d tentativas, o numero secreto era %d", nome, max_tentativas, numero_secreto);
        }
        // pergunta se o usuario quer jogar novamente apos o jogo terminar
        printf("\n%s, deseja jogar outra partida? (1 -para sim, 0 -para nao.)", nome);
        int jogar_novamente;
        scanf(" %d", &jogar_novamente);
        if (jogar_novamente == 0)
        {
            continuar_jogando = 0; // define a flag para sair do loop principal
            printf("%s, obrigada por jogar!! Ate a proxima!!\n", nome);
        }
        break; // sai do switch para o case 1

    case 2:
        printf("\n-----Regras do Jogo-----\n");
        printf("1. O computador ira escolher um numero secreto entre 10 e 20.\n");
        printf("2. Voce tera %d tentativas para adivinhar o numero.\n", 3); // Pode usar max_tentativas aqui, mas 3 é constante
        printf("3. A cada palpite, o jogo informara se o seu palpite foi muito alto ou muito baixo.\n");
        printf("4. Se acertar, voce ganha! Se acabar as tentativas, voce perde.\n");
        // Pergunta se quer voltar ao menu principal
        printf("\n%s, pressione 1 para voltar ao Menu Princilpa: ", nome);
        int voltar_menu;
        scanf(" %d", &voltar_menu);
        // Não é estritamente necessário usar 'voltar_menu' aqui se você só quer que o loop 'do-while' externo continue
        // mas é bom para dar um feedback ao usuário.
        break; // sai do switch  2

    case 3:
        printf("Saindo do Jogo!! Tchau, %s\n", nome);
        continuar_jogando = 0; // define a flag para sair do loop principal
        break;                 // sai do switch 3
    default:
        printf("Opcao invalida! Por favor, escolha 1, 2 ou 3\n");
        // Se a opção for inválida, o loop 'do-while' irá se repetir e exibir o menu novamente
        break;
    }// fim do switch
} while (continuar_jogando);
  return 0;
}
