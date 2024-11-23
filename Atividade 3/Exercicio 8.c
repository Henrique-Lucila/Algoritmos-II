/******************************************************************************
8. Escreva um algoritmo em C que utiliza uma função para exibir todos os números pares de 1 até um
número fornecido pelo usuário. A função deve ter a seguinte assinatura:
void exibirPares(int numero);
Dentro do algoritmo principal (main), solicite ao usuário um número inteiro e chame a função
exibirPares, passando o número fornecido como argumento. Utilize um laço de repetição (while ou for)
dentro da função para exibir os números pares.
Exemplo: Caso o usuário digite o número 10, o algoritmo deve exibir como resposta: 2, 4, 6, 8, 10.
*******************************************************************************/
#include <stdio.h>

void exibirPares(int numero){
    
    for (int i = 1; i <= numero; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
}

int main()
{
    int n;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    exibirPares(n);
    return 0;
}

