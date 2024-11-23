/******************************************************************************
2. Analise o código de programa abaixo, execute em seu computador e comente cada linha, explicando o
código.
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <locale.h>

// Criação da estrutura Carro, com os atributos modelo, ano e preco
typedef struct {
    char modelo[50];
    int ano;
    double preco;
} Carro;

// Função para modificar o preço do carro
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco;
}

// Função para imprimir os dados do carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo); // Imprime o modelo
    printf("Ano: %d\n", c->ano); // imprime o ano
    printf("Preço: R$ %.2lf\n", c->preco); // imprime o preço
}

int main() {
    // Configuração da localidade para português
    setlocale(LC_ALL, "portuguese");
    // Declaração e inicialização de um carro (carro1)
    Carro carro1;
    
    // Definindo os valores dos atributos de carro1
    strcpy(carro1.modelo, "XyZ"); // Define o modelo
    carro1.ano = 2020; // Define o ano
    carro1.preco = 90000.00; // Define o preço

    // Imprime os dados antes da modificação
    printf("Dados antes da modificação:\n");
    imprimirCarro(&carro1);

    // Modifica o preço do carro
    modificarPreco(&carro1, 115000.00);

    // Imprime os dados após a modificação
    printf("\nDados após a modificação do preço:\n");
    imprimirCarro(&carro1);

    return 0;
}

