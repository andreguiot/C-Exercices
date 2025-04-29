#include <stdio.h>
#define MAX_ALUNOS 10

struct Aluno {
    int matricula;
    char nome[100];
    int codigoDisciplina;
    float nota1, nota2;
};

int main() {
    struct Aluno alunos[MAX_ALUNOS];
    int i, numAlunos;

    printf("Quantos alunos deseja cadastrar? (Maximo %d): ", MAX_ALUNOS);
    scanf("%d", &numAlunos);

    if (numAlunos < 1 || numAlunos > MAX_ALUNOS) {
        printf("Numero invalido de alunos. Encerrando programa.\n");
        return 1;
    }

    for (i = 0; i < numAlunos; i++) {
        printf("\nDigite os dados do aluno %d:\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        getchar(); // Para limpar o buffer antes de ler o nome
        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Codigo da disciplina: ");
        scanf("%d", &alunos[i].codigoDisciplina);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }
    printf("\nListagem final dos alunos e medias:\n");
    for (i = 0; i < numAlunos; i++) {
        float media = (alunos[i].nota1 * 1.0 + alunos[i].nota2 * 2.0) / 3.0;

        printf("\nAluno %d:\n", i + 1);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Nome: %s", alunos[i].nome);
        printf("Codigo da Disciplina: %d\n", alunos[i].codigoDisciplina);
        printf("Media Final: %.2f\n", media);
    }

    return 0;
}
