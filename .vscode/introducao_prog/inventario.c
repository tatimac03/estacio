#include<stdio.h>
 // so dois produtos , nome, valor, quantidade, quantidade minima no estoque
 //volor total do estoque 

 struct Produto{
    char produto[30];
    unsigned int estoque;
    unsigned int estoque_minimo;
    float valor;
    double valor_total;

 };

 int main(){
// inventario de um estoque, operadores relacionais e estrutura de controle 
/* declarar variaveis
 * exibir as informacoes do produto 
 * comparar com o valor minimo do estoque 
 * comparar com os valores totais dos produtos (valor produto * quantidade no estoque)
 
*/
printf(" -------- INVENTARIO -----------\n");
// introducao das variaveis 
    struct Produto produtoA, produtoB;
    printf("Nome do  Pimeiro Poduto: ");
    scanf(" %s", produtoA.produto);
    printf("Valor do Poduto: ");
    scanf(" %f", &produtoA.valor);
    printf("Quantidade em Estoque do Primeiro Produto: ");
    scanf(" %u", &produtoA.estoque);
    printf("Estoque Minimo do Primeiro Produto: ");
    scanf(" %u", &produtoA.estoque_minimo);
    printf("\n\n");
    //segundo
    printf("Nome do Segundo Produto: ");
    scanf(" %s", produtoB.produto);
    printf(" Valor do Segundo Produto: ");
    scanf(" %f", &produtoB.valor);
    printf("Quantidade em Estoque do Segundo Produto: ");
    scanf(" %u", &produtoB.estoque);
    printf("Estoque Minimo do Segundo Produto: ");
    scanf(" %u", &produtoB.estoque_minimo);

    // calculo do valor total 
    int estoquebaixoA;
    int estoquebaixoB;
    double valormaiorA;

    produtoA.valor_total = produtoA.estoque * produtoA.valor;
    produtoB.valor_total = produtoB.estoque * produtoB.valor;
    
    estoquebaixoA = produtoA.estoque <= produtoA.estoque_minimo;
    estoquebaixoB = produtoB.estoque <= produtoB.estoque_minimo;

    valormaiorA = produtoA.valor_total > produtoB.valor_total;



    // impressao 
    printf("Primeiro produto\n");
    printf("Nome do Pirmeiro Produto: %s\n", produtoA.produto);
    printf("Valor do Primeiro Produto: %.2f\n", produtoA.valor);
    printf("Quantidade do Primeiro Produto: %u\n", produtoA.estoque);
    printf("Estoque Minimo do Primeiro Produto: %u\n", produtoA.estoque_minimo);
    printf("Valor Total do Primeiro Produto: %.2lf\n", produtoA.valor_total);
    printf("O Produto esta abaixo do estoque (0-f/1-v): %d", estoquebaixoA);
    printf("\n\n");

    printf("Segundo produro\n");
    printf("Nome do Segundo Produto: %s\n", produtoB.produto);
    printf("Valor do Segundo Produto: %.2f\n", produtoA.valor);
    printf("Quantidade do Segundo Produto: %u\n", produtoB.estoque);
    printf("Estoque Minimo do Segundo Produto: %u\n", produtoB.estoque_minimo);
    printf("Valor Total do Segundi Produto: %.2lf\n", produtoB.valor_total);
    printf("O estoque esta baixo(0-f/1-v): %d", estoquebaixoB);

    printf("\n\n");

    printf("O valor do total do primeiro produto e maior que o do segundo (0-f/1-v): %lf", valormaiorA);



    return 0;
 }
