#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char titulo[30], palavra[50];

    printf("Digite o título do arquivo : ");
    fgets(titulo, sizeof(titulo), stdin);

    // Remove o caractere de nova linha do título
    titulo[strcspn(titulo, "\n")] = '\0';

    // Abre o arquivo no modo leitura
    fp = fopen(titulo, "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo '%s'. Verifique se ele existe.\n", titulo);
        exit(1);
    }

    // Lê e imprime o conteúdo do arquivo palavra por palavra
    printf("\nConteúdo do arquivo '%s':\n", titulo);
    while (fscanf(fp, "%s", palavra) != EOF) {
        printf("%s ", palavra);
    }
    printf("\n");

    for(int i=0; i<sizeof(palavra); i++){
        printf("\n %s", palavra[i]);
    }
    fclose(fp);
    return 0;
}
