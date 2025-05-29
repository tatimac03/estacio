/*
 <<<<PROGRAMA PARA ALERTA DE PARAMETROS DE SEGURANCA>>>>>
tres parametros utilizado:
* temperatura
* umidade
* estoque
>>> Mensagem de alerta quando um parametro for alcancado.

*/

#include<stdio.h>


 int main(){

    printf("<<<<PARAMETROS DE SEGURANCA>>>>\n\n");

    // Declaracao das variaveis 
    float temperatura;
    float umidade;
    int estoque; 

    printf("Informe a Temperatura (ºC): ");
    scanf(" %f", &temperatura);
    printf("Informe a Umidade: ");
    scanf(" %f", &umidade);
    printf("Informe o estoque: ");
    scanf(" %d", &estoque);

    /*// Para verificar se as leituras funcionaram, você pode adicionar:
    printf("\n--- Dados Coletados ---\n");
    printf("Temperatura: %.2f ºC\n", temperatura);
    printf("Umidade: %.2f\n", umidade);
    printf("Estoque: %.2f\n", estoque);
    /*/ 


    /* conferindo os parametros fornecidos com os de seguranca
       emitindo os alertas necessarios 
    */
    printf("\n--- Verificando Parametros ---\n");
    printf("Temperatura informada: %.2f ºC\n", temperatura);

    if (temperatura < 37.5 ){
        printf("<<<<< TEMPERATURA FORA DA FAIXA DE RISCO >>>>>\n\n");
    }
    else if (temperatura > 37.5 && temperatura <40.0 ){
        printf("<<<< TEMPERATURA DENTRO DA FAIXA DE RISCO >>>>>\n\n");
    }
    else  {
        printf(" <<<<<< ATENCAO ALERTA DE RISCO >>>>>\n\n");
    }
    
    printf("Umidade informada: %.2f%%\n", umidade);

    if (umidade >= 30.0 && umidade < 50.0 ){
        printf("<<<<< UMIDADE IDEAL >>>>>\n\n");
    
    }
    else if (umidade > 50.0){
        printf("<<<<< ALERTA : UMIDADE ALTA >>>>>\n\n");
    }
    else {
        printf("<<<<< ALERTA : UMIDADE MUITO BAIXA >>>>>\n\n");
    }

    printf("Estoque informado: %d\n", estoque);

    if (estoque > 1500){
        printf(">>>>> ESTOQUE NORMAL >>>>\n");
    }
    else  if (estoque < 1500 && estoque > 800) {
        printf(">>>>> ESTOQUE FICANDO BAIXO>>>>>\n");

    }
    else {
        printf("<<<<< ATENCAO ESTOQUE BAIXO >>>>>");
    }

    return 0;
}