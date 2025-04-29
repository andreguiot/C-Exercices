#include <stdio.h>

float mediaAritmetica(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 5 + n2 * 3 + n3 * 2) / (5 + 3 + 2);
}


float mediaHarmonica(float n1, float n2, float n3) {
    return 3.0 / ((1.0 / n1) + (1.0 / n2) + (1.0 / n3));
}
float calcularMedia(float n1, float n2, float n3, char tipo) {
    if (tipo == 'A') {
        return mediaAritmetica(n1, n2, n3);
    } else if (tipo == 'P') {
        return mediaPonderada(n1, n2, n3);
    } else if (tipo == 'H') {
        return mediaHarmonica(n1, n2, n3);
    } else {
        printf("Letra invalida. Escolha A, P ou H.\n");
        return -1;
    }
}

int main() {
    float n1, n2, n3;
    char tipo;

    printf("Digite as tres notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite a letra (A - Aritmetica, P - Ponderada, H - Harmonica): ");
    getchar();  // Limpa o buffer
    tipo = getchar();

    float media = calcularMedia(n1, n2, n3, tipo);

    if (media != -1) {
        printf("A media calculada e: %.2f\n", media);
    }

    return 0;
}
