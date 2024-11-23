/******************************************************************************
13. Escreva um algoritmo em C que utilize uma função para calcular a média de três números inteiros
fornecidos pelo usuário. A função deve ter a seguinte assinatura: float calcularMedia(int num1, int num2,
int num3);
O algoritmo deve imprimir a média com duas casas decimais.
*******************************************************************************/
#include <stdio.h>

float calcularMedia(int num1, int num2, int num3){
    return (num1 + num2 + num3) / 3.0;
}

int main()
{
    int n1, n2, n3;
    
    printf("Digite o 1° número: ");
    scanf("%d", &n1);
    
    printf("Digite o 2° número: ");
    scanf("%d", &n2);
    
    printf("Digite o 3° número: ");
    scanf("%d", &n3);
    
    float media = calcularMedia(n1, n2, n3);
    
    printf("\nMédia: %.2f", media);
    
    return 0;
}

