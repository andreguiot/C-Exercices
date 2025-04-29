#include <stdio.h>
#include <string.h>
#define NUM_CARROS 5

struct Carro {
    char marca[16];
    int ano;
    float preco;
};

int main() {
    struct Carro carros[NUM_CARROS];
    float p;
    int i;

    printf("Digite os dados dos %d carros:\n", NUM_CARROS);
    for (i = 0; i < NUM_CARROS; i++) {
        printf("\nCarro %d:\n", i + 1);

        printf("Marca: ");
        getchar();
        fgets(carros[i].marca, sizeof(carros[i].marca), stdin);
        carros[i].marca[strcspn(carros[i].marca, "\n")] = '\0'; // Remove o \n do final

        printf("Ano: ");
        scanf("%d", &carros[i].ano);

        printf("Preco: ");
        scanf("%f", &carros[i].preco);
    }
    do {
        printf("\nDigite o valor p (ou 0 para sair): ");
        scanf("%f", &p);
        if (p != 0) {
            printf("\nCarros com preco menor que %.2f:\n", p);
            int encontrou = 0;
            for (i = 0; i < NUM_CARROS; i++) {
                if (carros[i].preco < p) {
                    printf("Marca: %s, Ano: %d, Preco: %.2f\n", carros[i].marca, carros[i].ano, carros[i].preco);
                    encontrou = 1;
                }
            }
            if (!encontrou) {
                printf("Nao ha carros com preco inferior a %.2f.\n", p);
            }
        }
    } while (p != 0);

    printf("Programa encerrado.\n");

    return 0;
}
