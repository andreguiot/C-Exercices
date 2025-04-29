#include <stdio.h>

int lerNumeroPositivo() {
    int num;
    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);
        if (num <= 0) {
            printf("Por favor, digite um numero positivo.\n");
        }
    } while (num <= 0);
    return num;
}

int SomaDivisores(int num) {
    int soma = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int i, numero;


    for (i = 0; i < 5; i++) {
        numero = lerNumeroPositivo();
        int soma = SomaDivisores(numero);
        printf("Soma dos divisores de %d (exceto ele mesmo): %d\n", numero, soma);
    }

    return 0;
}
