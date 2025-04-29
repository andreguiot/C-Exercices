#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char titulo[30], texto[60];

    printf("Digite o titulo do arquivo: ");
    fgets(titulo, 30, stdin);

    titulo[strcspn(titulo, "\n")] = '\0';

    fp = fopen(titulo, "w");
    if (fp == NULL) {
        printf("ERRO NA ABERTURA\n");
        exit(1);
    }

    printf("Digite o texto (aperte Enter para finalizar):\n");
    fgets(texto, 60, stdin);

    fprintf(fp, "%s", texto);
    fclose(fp);

    printf("Arquivo '%s' criado com sucesso!\n", titulo);

    return 0;
}
