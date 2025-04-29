#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[40];
    int matricula;
    int p1, p2, p3;
} aluno;

int main() {
    aluno alunos[5];
    int maior_nota = 0, maior_media = 0, menor_media = 100; // Valores iniciais adequados
    char fracassado_nome[40], mito[40], fracassado2[40];
    int media_geral[5];

    printf("Entre com os dados dos 5 alunos:\n");

    for (int i = 0; i < 5; i++) {
        printf("Nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, 40, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; // Remove o \n do final

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); // Limpa o buffer

        printf("Digite a nota da P1: ");
        scanf("%d", &alunos[i].p1);
        getchar();

        printf("Digite a nota da P2: ");
        scanf("%d", &alunos[i].p2);
        getchar();

        printf("Digite a nota da P3: ");
        scanf("%d", &alunos[i].p3);
        getchar();
    }

    // Inicializa valores para referência
    strcpy(fracassado_nome, alunos[0].nome);
    strcpy(mito, alunos[0].nome);
    strcpy(fracassado2, alunos[0].nome);

    for (int i = 0; i < 5; i++) {
        // Calcula a média de cada aluno
        media_geral[i] = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3) / 3;

        // Verifica maior nota da P1
        if (alunos[i].p1 > maior_nota) {
            maior_nota = alunos[i].p1;
            strcpy(fracassado_nome, alunos[i].nome);
        }

        // Verifica maior e menor média
        if (media_geral[i] > maior_media) {
            maior_media = media_geral[i];
            strcpy(mito, alunos[i].nome);
        }
        if (media_geral[i] < menor_media) {
            menor_media = media_geral[i];
            strcpy(fracassado2, alunos[i].nome);
        }
    }

    printf("\nO aluno com maior nota na P1 foi: %s\n", fracassado_nome);
    printf("O aluno com maior média geral foi: %s\n", mito);
    printf("O aluno com menor média geral foi: %s\n", fracassado2);

    printf("\nResultado dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        if (media_geral[i] >= 6) {
            printf("Aluno %s: Aprovado\n", alunos[i].nome);
        } else {
            printf("Aluno %s: Reprovado\n", alunos[i].nome);
        }
    }

    return 0;
}
