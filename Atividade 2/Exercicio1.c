// Henrique Biciato Lucila
#include <stdio.h>

int primo(int num){
    if (num < 2){
        return 0; // Números primos não podem ser menor que 2
    }
    
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0){
            return 0; // Se for par, não é primo
        }
    } 
    return 1; //é primo
}

int somaPrimos(int n){
    int soma = 0;
    int qtd_primo = 0;
    int num = 2;
    
    while (qtd_primo < n){
        if (primo(num)){
            soma += num;
            qtd_primo++;
        }
        num++;
    }
    return soma;
}

int main()
{
    int n;
    
    printf("Digite quantos números primos serão somados: ");
    scanf("%d", &n);
    
    int resultado = somaPrimos(n);
    printf("A soma dos %d primeiros números primos é: %d", n, resultado);

    return 0;
}