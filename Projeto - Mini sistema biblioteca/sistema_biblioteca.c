#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX_LIVROS 100

struct Livro {
    int codigo;
    char titulo[100];
    char autor[50];
    char editora[50];
    int anoPublicacao;
    int disponivel; // 1 para disponível, 0 para emprestado
};

// Função para cadastrar um novo livro
void cadastrarLivro() {
    FILE *file = fopen("livros.dat", "ab");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    struct Livro livro;
    printf("Digite o código do livro: ");
    scanf("%d", &livro.codigo);
    printf("Digite o título do livro: ");
    scanf(" %[^\n]", livro.titulo);
    printf("Digite o autor do livro: ");
    scanf(" %[^\n]", livro.autor);
    printf("Digite a editora do livro: ");
    scanf(" %[^\n]", livro.editora);
    printf("Digite o ano de publicação do livro: ");
    scanf("%d", &livro.anoPublicacao);
    livro.disponivel = 1;

    fwrite(&livro, sizeof(struct Livro), 1, file);
    fclose(file);

    printf("Livro cadastrado com sucesso!\n");
}

// Função para listar todos os livros
void listarLivros() {
    FILE *file = fopen("livros.dat", "rb");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    struct Livro livro;
    printf("\nLista de Livros:\n");
    while (fread(&livro, sizeof(struct Livro), 1, file)) {
        printf("Código: %d\n", livro.codigo);
        printf("Título: %s\n", livro.titulo);
        printf("Autor: %s\n", livro.autor);
        printf("Editora: %s\n", livro.editora);
        printf("Ano de Publicação: %d\n", livro.anoPublicacao);
        printf("Disponível: %s\n\n", livro.disponivel ? "Sim" : "Não");
    }

    fclose(file);
}

// Função para buscar livro pelo código
void buscarLivro() {
    FILE *file = fopen("livros.dat", "rb");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    int codigo;
    printf("Digite o código do livro: ");
    scanf("%d", &codigo);

    struct Livro livro;
    int encontrado = 0;
    while (fread(&livro, sizeof(struct Livro), 1, file)) {
        if (livro.codigo == codigo) {
            printf("Livro encontrado:\n");
            printf("Código: %d\n", livro.codigo);
            printf("Título: %s\n", livro.titulo);
            printf("Autor: %s\n", livro.autor);
            printf("Editora: %s\n", livro.editora);
            printf("Ano de Publicação: %d\n", livro.anoPublicacao);
            printf("Disponível: %s\n", livro.disponivel ? "Sim" : "Não");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Livro não encontrado!\n");
    }

    fclose(file);
}

// Função para atualizar os dados de um livro
void atualizarLivro() {
    FILE *file = fopen("livros.dat", "r+b");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    int codigo;
    printf("Digite o código do livro a ser atualizado: ");
    scanf("%d", &codigo);

    struct Livro livro;
    int encontrado = 0;
    while (fread(&livro, sizeof(struct Livro), 1, file)) {
        if (livro.codigo == codigo) {
            printf("Livro encontrado! Atualize os dados abaixo:\n");
            printf("Digite o novo título do livro: ");
            scanf(" %[^\n]", livro.titulo);
            printf("Digite o novo autor do livro: ");
            scanf(" %[^\n]", livro.autor);
            printf("Digite a nova editora do livro: ");
            scanf(" %[^\n]", livro.editora);
            printf("Digite o novo ano de publicação do livro: ");
            scanf("%d", &livro.anoPublicacao);

            fseek(file, -sizeof(struct Livro), SEEK_CUR);
            fwrite(&livro, sizeof(struct Livro), 1, file);
            printf("Livro atualizado com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Livro não encontrado!\n");
    }

    fclose(file);
}

// Função para remover um livro
void removerLivro() {
    FILE *file = fopen("livros.dat", "rb");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    FILE *tempFile = fopen("temp.dat", "wb");
    if (tempFile == NULL) {
        printf("Erro ao criar arquivo temporário!\n");
        fclose(file);
        return;
    }

    int codigo;
    printf("Digite o código do livro a ser removido: ");
    scanf("%d", &codigo);

    struct Livro livro;
    int encontrado = 0;
    while (fread(&livro, sizeof(struct Livro), 1, file)) {
        if (livro.codigo == codigo) {
            printf("Livro removido com sucesso!\n");
            encontrado = 1;
        } else {
            fwrite(&livro, sizeof(struct Livro), 1, tempFile);
        }
    }

    if (!encontrado) {
        printf("Livro não encontrado!\n");
    }

    fclose(file);
    fclose(tempFile);
    remove("livros.dat");
    rename("temp.dat", "livros.dat");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    do {
        printf("\nSistema de Biblioteca\n");
        printf("1. Cadastrar Livro\n");
        printf("2. Listar Livros\n");
        printf("3. Buscar Livro\n");
        printf("4. Atualizar Livro\n");
        printf("5. Remover Livro\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarLivro();
                break;
            case 2:
                listarLivros();
                break;
            case 3:
                buscarLivro();
                break;
            case 4:
                atualizarLivro();
                break;
            case 5:
                removerLivro();
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 6);

    return 0;
}

