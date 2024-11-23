/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void){
    
    struct ficha_de_aluno{
        char nome[50];
        char disciplina[30];
        double nota_prova1;
        double nota_prova2;
    };
    
    struct ficha_de_aluno aluno;
    
    printf("Cadastro de aluno\n\n");
    
    printf("Nome do aluno: ");
    fgets(aluno.nome, 50, stdin);
    
    printf("Disciplina: ");
    fgets(aluno.disciplina, 30, stdin);
    
    printf("Informe a primeira nota: ");
    scanf("%lf", &aluno.nota_prova1);
    
    printf("Informe a segunda nota: ");
    scanf("%lf", &aluno.nota_prova2);
    
    printf("\n Lendo os dados da struct\n\n");
    printf("Nome: %s", aluno.nome);
    printf("Disciplina: %s", aluno.disciplina);
    printf("Nota da prova P1: %.2f\n", aluno.nota_prova1);
    printf("Nota da prova P2: %.2f\n", aluno.nota_prova2);

    return 0;
}
