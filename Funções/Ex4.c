#include <stdio.h>

void Absoluto(int num[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (num[i] < 0) {
            num[i] = num[i] * -1;
        }
    }
}

int main() {
    int n[5];
    for (int i = 0; i < 5; i++) {
        printf("Escreva o Numero %d: ", i + 1);
        scanf("%d", &n[i]);
    }


    Absoluto(n, 5);
    printf("Numeros absolutos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", n[i]);
    }

    return 0;
}
