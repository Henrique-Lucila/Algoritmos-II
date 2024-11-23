// Henrique Biciato Lucila
#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int a, b;

    printf("Digite dois números: ");
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("Soma: %d", soma(a, b));
    
    return 0;
}
