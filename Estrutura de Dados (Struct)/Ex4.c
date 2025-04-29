#include <stdio.h>
#define NUM_ALUNOS 5

struct Aluno {
    int matricula;
    char nome[100];
    float nota1, nota2, nota3;
};

int main() {
    struct Aluno alunos[NUM_ALUNOS];
    int i, alunoMaiorNota1 = 0, alunoMaiorMedia = 0, alunoMenorMedia = 0;
    float maiorMedia, menorMedia;


    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite os dados do aluno %d:\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        getchar();
        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);

        printf("Nota da terceira prova: ");
        scanf("%f", &alunos[i].nota3);

        printf("\n");
    }

    maiorMedia = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3;
    menorMedia = maiorMedia;

    for (i = 0; i < NUM_ALUNOS; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if (alunos[i].nota1 > alunos[alunoMaiorNota1].nota1) {
            alunoMaiorNota1 = i;
        }
        if (media > maiorMedia) {
            maiorMedia = media;
            alunoMaiorMedia = i;
        }

        if (media < menorMedia) {
            menorMedia = media;
            alunoMenorMedia = i;
        }
    }

    printf("Aluno com maior nota na primeira prova:\n");
    printf("Nome: %s", alunos[alunoMaiorNota1].nome);
    printf("Matricula: %d\n", alunos[alunoMaiorNota1].matricula);
    printf("Nota: %.2f\n\n", alunos[alunoMaiorNota1].nota1);

    printf("Aluno com maior media geral:\n");
    printf("Nome: %s", alunos[alunoMaiorMedia].nome);
    printf("Matricula: %d\n", alunos[alunoMaiorMedia].matricula);
    printf("Media: %.2f\n\n", maiorMedia);

    printf("Aluno com menor media geral:\n");
    printf("Nome: %s", alunos[alunoMenorMedia].nome);
    printf("Matricula: %d\n", alunos[alunoMenorMedia].matricula);
    printf("Media: %.2f\n\n", menorMedia);

    printf("Resultado de cada aluno:\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        printf("Aluno: %s", alunos[i].nome);
        printf("Media: %.2f - %s\n", media, (media >= 6.0) ? "Aprovado" : "Reprovado");
    }

    return 0;
}

