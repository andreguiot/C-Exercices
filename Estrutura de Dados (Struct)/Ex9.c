#include <stdio.h>
#include <string.h>
#define NUM_ALUNOS 10
#define MEDIA_MINIMA 5.0


struct Aluno {
    char nome[100];
    int matricula;
    float mediaFinal;
};

int main() {
    struct Aluno alunos[NUM_ALUNOS];
    struct Aluno aprovados[NUM_ALUNOS], reprovados[NUM_ALUNOS];
    int i, countAprovados = 0, countReprovados = 0;

    printf("Digite os dados dos %d alunos:\n", NUM_ALUNOS);
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        getchar();
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Media Final: ");
        scanf("%f", &alunos[i].mediaFinal);
    }

    for (i = 0; i < NUM_ALUNOS; i++) {
        if (alunos[i].mediaFinal >= MEDIA_MINIMA) {
            aprovados[countAprovados++] = alunos[i];
        } else {
            reprovados[countReprovados++] = alunos[i];
        }
    }

    printf("\n--- Alunos Aprovados ---\n");
    for (i = 0; i < countAprovados; i++) {
        printf("Nome: %s, Matricula: %d, Media Final: %.2f\n",
               aprovados[i].nome, aprovados[i].matricula, aprovados[i].mediaFinal);
    }
    printf("\n--- Alunos Reprovados ---\n");
    for (i = 0; i < countReprovados; i++) {
        printf("Nome: %s, Matricula: %d, Media Final: %.2f\n",
               reprovados[i].nome, reprovados[i].matricula, reprovados[i].mediaFinal);
    }

    return 0;
}
