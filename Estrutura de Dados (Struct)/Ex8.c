#include <stdio.h>
#include <string.h>

#define NUM_PESSOAS 5

struct Pessoa {
    char nome[100];
    char endereco[150];
    char telefone[15];
};

void ordenarPorNome(struct Pessoa pessoas[], int n) {
    int i, j;
    struct Pessoa temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                temp = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = temp;
            }
        }
    }
}

int main() {
    struct Pessoa pessoas[NUM_PESSOAS];
    int i;

    for (i = 0; i < NUM_PESSOAS; i++) {
        printf("Digite os dados da pessoa %d:\n", i + 1);

        printf("Nome: ");
        getchar();
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

        printf("Endereco: ");
        fgets(pessoas[i].endereco, sizeof(pessoas[i].endereco), stdin);
        pessoas[i].endereco[strcspn(pessoas[i].endereco, "\n")] = '\0';

        printf("Telefone: ");
        fgets(pessoas[i].telefone, sizeof(pessoas[i].telefone), stdin);
        pessoas[i].telefone[strcspn(pessoas[i].telefone, "\n")] = '\0';

        printf("\n");
    }
    ordenarPorNome(pessoas, NUM_PESSOAS);

    printf("Dados das pessoas em ordem alfabetica:\n");
    for (i = 0; i < NUM_PESSOAS; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereco: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n", pessoas[i].telefone);
    }

    return 0;
}
