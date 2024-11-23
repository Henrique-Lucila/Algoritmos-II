// Henrique Biciato Lucila
#include <stdio.h>

float mediaTurma(int numAlunos) {
    int nota, soma = 0;

    for (int i = 0; i < numAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &nota);
        soma += nota;
    }

    // Retorna a média da turma
    return (float)soma / numAlunos;
}


float mediaEscola(int numTurmas) {
    float somaMedias = 0.0;
    int numAlunos;

    for (int i = 0; i < numTurmas; i++) {
        printf("\nDigite o número de alunos da turma %d: ", i + 1);
        scanf("%d", &numAlunos);

        float media = mediaTurma(numAlunos);
        printf("Média da turma %d: %.2f\n", i + 1, media);
        somaMedias += media; // Soma a média de cada turma para calcular a média da escola
    }

    // Retorna a média geral da escola
    return somaMedias / numTurmas;
}

int main() {
    int numTurmas;

    printf("Digite o número de turmas na escola: ");
    scanf("%d", &numTurmas);

    float mediaGeral = mediaEscola(numTurmas);
    printf("\nMédia geral da escola: %.2f\n", mediaGeral);

    return 0;
}


