#include <stdio.h>

struct Aluno {
    char nome[100];
    int matricula;
    char curso[50];
};

int main() {
    struct Aluno alunos[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite os dados do aluno %d:\n", i + 1);
        printf("Nome: ");
        getchar();
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        printf("Numero de matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();
        printf("Curso: ");
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);
        printf("\n");
    }

    printf("Dados dos alunos cadastrados:\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
    }

    return 0;
}
