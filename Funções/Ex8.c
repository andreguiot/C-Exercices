#include <stdio.h>


int verificarNumero(int numero) {
    if (numero > 0) {
        return 1;
    } else if (numero < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int resultado = verificarNumero(numero);
    if (resultado == 1) {
        printf("O numero %d e positivo.\n", numero);
    } else if (resultado == -1) {
        printf("O numero %d e negativo.\n", numero);
    } else {
        printf("O numero e zero.\n");
    }

    return 0;
}
