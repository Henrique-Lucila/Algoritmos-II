/******************************************************************************
14. Escreva um programa em C que faz o seguinte:
Crie um vetor de 10 posições, preencha cada posição com o valores de 1 até 10.
Some todos os elementos do vetor e armazene o resultado em uma variável.
Escreva uma função chamada calcularResultado que recebe três parâmetros inteiros: a soma dos
elementos do vetor, o primeiro valor do vetor, e o último valor do vetor.
A função deve retornar a seguinte expressão: resultado = soma + (primeiroValor * 5) + (ultimoValor * 2).
No main, imprima o resultado dessa função.
*******************************************************************************/
#include <stdio.h>

int calcularResultado(int soma, int primeiroValor, int ultimoValor){
    return soma + (primeiroValor * 5) + (ultimoValor * 2);
}

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int soma = 0;
    
    for(int i = 0; i < 10; i++){
        soma += vetor[i];
    }
    
    int resultado = calcularResultado(soma, vetor[0], vetor[9]);
    
    printf("Resultado: %d", resultado);
    
    return 0;
}

