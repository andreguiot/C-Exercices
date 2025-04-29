#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;
    int total_vogais = 0;


    arquivo = fopen("malvado.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' ||
            caractere == 'o' || caractere == 'u' || caractere == 'A' ||
            caractere == 'E' || caractere == 'I' || caractere == 'O' ||
            caractere == 'U') {
            total_vogais++;
        }
    }

    fclose(arquivo);

    printf("Total de vogais no arquivo: %d\n", total_vogais);

    return 0;
}
