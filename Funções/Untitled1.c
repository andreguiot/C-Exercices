
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char titulo[30];
    char palavras[1000][50];
    int contador = 0;

    printf("Digite o título do arquivo: ");
    fgets(titulo, sizeof(titulo), stdin);
    titulo[strcspn(titulo, "\n")] = '\0';

    fp = fopen(titulo, "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo '%s'. Verifique se ele existe.\n", titulo);
        exit(1);
    }

    while (fscanf(fp, "%s", palavras[contador]) != EOF) {
        contador++;
        if (contador >= 1000){
            printf("Limite máximo de palavras atingido.\n");
            break;
        }
    }
    fclose(fp);

    for (int i = 0; i < contador; i++) {
        printf("%s\n", palavras[i]);
    }

    return 0;
}
