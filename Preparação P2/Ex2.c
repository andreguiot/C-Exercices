#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int n[5];

    // Abre o arquivo em modo de escrita ("w")
    fp = fopen("numeros.txt", "w");

    if (fp == NULL) {
        printf("Erro durante a abertura.\n");
        exit(1);
    }

    // Loop para coletar os números e escrevê-los no arquivo
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero para escrever no arquivo: ");
        scanf("%d", &n[i]); // Lê o número do usuário
        fprintf(fp, "%d\n", n[i]); // Escreve o número no arquivo
    }

    fclose(fp); // Fecha o arquivo
    printf("Os numeros foram escritos no arquivo com sucesso!\n");

    return 0;
}
