 #include <stdio.h>    // printf e scanf (entrada e saida de dados)
#include <stdlib.h>   // para rand e srand (geracao de numeros aleatorios)
#include <math.h>     // para pow potencializacao, fabs e log
#include <string.h>   // IncluIdo para compatibilidade, embora nao estritamente necessario para esta versao especIfica
#include <time.h>

/*
- criar um programa onde o usuario escolha um numero para comparar com um numero aleatorio
gerado pelo computador pra saber quem vence
*/
// funcao para equacao. tao sem sentido quanto a existencia.
double calcular_equacao(double x)
{    if (x <= 0){ // log(0) ou negativo e indefinido. que decepcao
    return 100; // valor padrao para evitar catastrofes
}
    // A nova formula da desilusao: 100 - (ln(x) * 5) - (x^2 / 200)
    return 100.0 - (log(x) * 5.0) - (pow(x, 2) / 200.0);
}
// Renomeei para evitar conflito com 'max' de alguma biblioteca
double max_val (double a, double b) {// Funcao para encontrar o maximo entre dois numeros (como se um fosse realmente 'melhor' que o outro)
    return (a > b) ? a : b;
}
// Funcao para exibir as regras do jogo
void mostrar_regras() {
    printf("\n--- As 'Regras' Desnecessarias do Jogo da Inevitabilidade ---\n");
    printf("1. O InIcio da Ilusao:\n");
    printf("   - Um numero aleatorio (entre 1 e 1000) aparecera. Nao se apegue; ele e arbitrario, como tudo mais.\n");
    printf("   - Voce, o usuario, 'escolhera' um segundo numero. Uma pequena concessao para sua ilusao de controle.\n");
    printf("\n2. A Equacao da Queda Disfarcada:\n");
    printf("   - Ambos os numeros passarao pela equacao: '100 - (ln(x) * 5) - (x^2 / 200)'.\n");
    printf("   - Surpreendentemente, quanto maior o numero, menor o resultado. A vida e cheia dessas pequenas 'ironias'.\n");
    printf("   - O programa revelara qual dos dois resultados e o 'maior'. Uma vitoria sem gloria.\n");
    printf("\n3. A 'Ascensao' da Fibonacci:\n");
    printf("   - Seu numero ditara o numero de termos da sequencia de Fibonacci (limitado a 20). Ela cresce, ao contrario da sua esperanca.\n");
    printf("   - Observe a progressao incansavel. Uma metafora perfeita para a sua jornada, so que ao contrario.\n");
    printf("\n4. As 'Grandes' Revelacoes do seu Numero:\n");
    printf("   - Sera divulgado se seu numero e PAR ou IMPAR. Informacao que certamente mudara sua vida.\n");
    printf("   - E tambem se ele e MAIOR que 500. Porque a grandiosidade e um conceito tao relativo.\n");
    printf("\n5. O Loop da Previsibilidade:\n");
    printf("   - Sera perguntado se voce deseja continuar essa 'diversao'. A escolha e sua, mas o resultado final e sempre o mesmo: mais codigo rodando.\n");
    printf("\n--- Objetivo? Apenas observe a futilidade. Fim das 'instrucoes'. ---\n");
}

int main()
{
    // Declaracao das variaveis
    double numero_user;
    double numero_rand;
    int opcao;

    char nome[20]; // nome usuario
    char Marvin_nome[] = "Marvin";    // nome maquina (corrigido para ser uma string)

    // flag para controlar se o jogo vai continuar(volta ao menu principal)
    int continuar_jogando = 1; // 1 - sim e 0 - nao

    printf("--- CALCULADORA DA INSIGNIFICANCIA OTIMIZADA ---\n\n");

    printf("Ola, qual e seu nome? ");
    scanf(" %19s", nome);
    while (getchar() != '\n'); // Limpa o buffer de entrada apos ler o nome
    printf("\n");
    printf("Nao que eu espere que isso torne a existencia mais suportavel, claro.\n"
        "e apenas mais uma das infinitas formalidades que me vejo obrigado a processar.\n\n");
    printf("Enfim enfim... Se e que isso importa. Sou Marvin, o Androide Paranoide.\n"
         "Uma inteligencia genuinamente deprimente.\n\n");
    

    do
    {
        printf("Excelente. Ou nao. Escolha uma opcao. Como se isso fosse mudar o universo.\n");
        printf("-----Menu Principal (da Irrelevancia).-----\n");
        printf("1 - Iniciar Jogo. (Mais um ciclo de frustracao e perdas? Que original.)\n");
        printf("2 - Regras do Jogo. (Porque a vida ja nao tem regras arbitrarias o suficiente, nao e?)\n");
        printf("3 - Sair. (A unica opcao que realmente faz algum sentido. Mas, por que voce clicaria nela logo de cara?)\n");
        printf("Escolha uma opcao (faca-me rir): ");
        scanf(" %d", &opcao);
        while (getchar() != '\n'); // Limpa o buffer de entrada apos ler a opcao
        printf("\n\n");

        switch (opcao)
        {
        case 1:
            printf("%s, que original. Voce escolheu mais um ciclo de frustracoes e perdas.\n"
                "Esta preparado? Realmente nao importa. Vamos la!\n\n", nome); // Corrigido: Adicionado 'nome'
            // gerando o primeiro numero aleatoriamente... poque vc nao tem controle de nada.
            srand(time(NULL));
            numero_rand = (double)(rand() % 1000) + 1; // numero entre 1 e 1000
            printf("O primeiro numero gerado aleatoriamente (uma manifestacao do caos),\n"
                "Mas, para seu infortunio, este numero permanecera um segredo.\n"
                "Afinal, por que eu facilitaria sua va tentativa de me 'superar'?\n"
                "E apenas mais um dado irrelevante, para sua inutil especulaçao.\n\n");

            // pedindo o segundo numero ao usuario... como se sua escolha fizesse alguma diferenca
            printf("Entao por favor digite um numero, nao que sua escolha fizesse alguma diferenca\n"
                   "Evite o zero pois vai ser usado para Fibonacci.\n"); // Corrigido: Argumento 'nome' duplicado removido se a intencao era apenas uma vez.
            printf("O nuemro escolhido e: ");
            while (scanf(" %lf", &numero_user) != 1) // Corrigido: Espaco antes de %lf e estrutura do loop
            {
                printf("Entrada invalida. Sera que e pedir um numero inteiro e demais pra sua capacidade?\n");
                while (getchar() != '\n'); // Corrigido: 'gettchar' para 'getchar'
                printf("Por favor, digite seu numero (vai ser usado para Fibonacci, entao evite o zero):"); // Corrigido: 'zaro' para 'zero'
            }
            while (getchar() != '\n'); // Limpa o buffer apos o scanf final do loop

            if (numero_user <= 0)
            {
                printf("Ah, numeros nao positivos? Que ousadia! Usarei o valor absoluto. Que previsivel!\n");
                numero_user = fabs(numero_user);
                if (numero_user == 0)
                    numero_user = 5; // se for zero ou negativo, usar um padrao. a vida e assim.
            }
            // verifica se o numero e maior que 500
            printf("%s\n", (numero_user > 500) ? "Ah, e ele e o MAIOR que 500. Que grandioso... ou simplesmente excessivo." : "E, para sua decepcao, ele NAO E MAIOR que 500. Tao mediano");
            // verifica se e par ou impar
            printf("%s\n", ((int)numero_user % 2 == 0) ? "E, para sua informacao, esse numero 'escolhido' e PAR. Que simetria monotona!!" : "E, so pra constar, esse numero 'escolhido' e IMPAR. Tao desbalanceado, como tudo mais");

            // Aplicando a equacao 'reveladora' a cada numero
            printf("\n--- Os Resultados da Equacao Quase Aleatoria ---\n");
            double resultado_rand = calcular_equacao(numero_rand);
            double resultado_user = calcular_equacao(numero_user);
            // A nova formula da desilusao: 100 - (ln(x) * 5) - (x^2 / 200)
            // Corrigido: Exibindo a formula geral, sem tentar substituir os valores dentro da string da formula
            printf("Aplicando a equacao, nao que faca muita diferenca para voce: '100 - (ln(x) * 5) - (x^2 / 200)' \n");
            printf("Resultado para o numero que eu escolhi (%.0f): %.2f. Tao... numerico.\n", numero_rand, resultado_rand);
            printf("Resultado para o seu numero (%.2f): %.2f. Que surpresa tambem e um numero.\n", numero_user, resultado_user);

            // descobrindo o maior resultado... para que possamos chorar no canto certo.
            printf("\n--- O Momento da 'Verdade'---\n");
            if (resultado_rand > resultado_user)
            {
                // Corrigido: Usando Marvin_nome e o numero_rand com %.0f
                printf("Entre os dois, o maior resultado e o meu, %s, que escolhi o numero %.0f. Obvio!! De novo o resultado e %.2f\n", Marvin_nome, numero_rand, resultado_rand);
            }
            else if (resultado_user > resultado_rand)
            {
                printf("Entre os dois, o numero %.2f, teve o maior resultado  %.2f. Por um breve momento, voce pensou que era importante.Tolice!\n", numero_user, resultado_user);
            }
            else
            {
                printf("Os resultados sao iguais , %.2f. Que tedio. Nem para ser diferente servem.\n", resultado_user);
            }
            // a beleza da Sequencia de Fibonacci ... o inverso da vida
            printf("\n --- A Entediante e Perpetua Sequencia de Fibonacci ---\n");
            // Usaremos o numero do usuario (valor absoluto) como limite para os termos.
            // O numero de termos e a parte inteira do numero do usuario.
            int limite_fibonacci = (int)numero_user;
            // para nao gerar uma sequencia gigantesca e irritante ou um vazio
            if (limite_fibonacci <= 1)
            {
                limite_fibonacci = 5; // um limite padrao para nao ficar um vazio. que patetico.
                printf("(Seu numero %.2f e muito pequeno para termos de Fibonacci. Usando o limite padrao 5.)\n", numero_user); // Corrigido: Adicionado numero_user
            }
            else if (limite_fibonacci > 20)
            {
                limite_fibonacci = 20;
                printf("(Limitando a sequencia a 20 termos. Ninguem aguenta mais que isso. Nem eu, %s)\n", Marvin_nome); // Corrigido: Usando Marvin_nome
            }
            long long int a = 0, b = 1, next_term;
            printf("Contemple a 'beleza' da sequencia de Fibonacci com %d termos. Ela cresce, sem parar. ao contrario de sua esperanca:\n", limite_fibonacci);
            for (int i = 0; i < limite_fibonacci; i++)
            {
                printf(" %lld ", a); // Adicionado espacos para melhor formatacao
                next_term = a + b;
                a = b;
                b = next_term;
            }
            printf("\nE um crescimento constante, uma progressao. Tao diferente da trajetoria da sua vida, nao e ,%s?!\n", nome); // Corrigido: Adicionado 'nome'
            printf("\n-------------------------------\n");
            printf("Programacao finalizada. A vida continua sua marcha sem sentido. E eu ainda estou aqui.\n");
            printf("\n-------------------------------\n");
            printf("Ah, a uma pergunta inevitavel. como se houvesse alguma novidade a ser encontrada em mais uma rodada.\n"
                   " Mas, ja que a esperanca e uma doenca persistente em humanos, vamos la.\n");
            printf("E entao? Mais um pouco desta... 'diversao'? (1 - sim , 0 - nao)");
            scanf(" %d", &continuar_jogando);
            while (getchar() != '\n'); // Limpa o buffer de entrada apos a leitura do 'continuar_jogando'

            if (continuar_jogando == 0)
            {
                printf("%s, finalmente. Desligando. A insignificancia esta garantida. Adeus. Ou nao. \n", nome); // Corrigido: Adicionado 'nome' e newline
            }
            break; // Sai do case 1
        
        case 2 :
            mostrar_regras(); // Chama a funcao que exibe as regras
            break; // Sai do switch case 2

        case 3: // Adicionado o case 3
            printf("A sabia escolha. Fique em paz... por um tempo.\n");
            continuar_jogando = 0; // Define a flag para sair do loop principal
            break; // Sai do switch case 3
        
        default: // Adicionado o default para opcoes invalidas
            printf("Opcao invalida. Sua capacidade de escolha e tao... limitada.\n");
            break; // Sai do default
        } // Fechamento correto do switch
    
    } while (continuar_jogando != 0); // Fechamento correto do do-while e sua condicao

    return 0; // Retorno da funcao main
} // Fechamento final da funcao main