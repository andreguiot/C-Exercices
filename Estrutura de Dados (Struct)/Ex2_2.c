#include <stdio.h>

typedef struct {
    char nome[40];
    int idade;
    char endereco[50];
} pessoa;

int main() {
    pessoa ser;

    printf("Informe seu nome: \n");
    fgets(ser.nome, 40, stdin);

    printf("Informe sua idade: \n");
    scanf("%d", &ser.idade);
    getchar();

    printf("Informe seu endereco: \n");
    fgets(ser.endereco, 50, stdin);

    printf("\nDados fornecidos:\n");
    printf("Nome: %sIdade: %d\nEndereco: %s", ser.nome, ser.idade, ser.endereco);

    return 0;
}
