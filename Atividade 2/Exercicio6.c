// Henrique Biciato Lucila
#include <stdio.h>

int maiorNumero(int a, int b) {
    if(a > b){
        return a;
    } else{
        return b;
    }
}

int main() {
    int a, b;

    printf("Digite dois números: ");
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("Maior número digitado: %d", maiorNumero(a, b));
    
    return 0;
}
