#include <stdio.h>
#include <math.h>

struct Complexo {
    float real;
    float imaginaria;
};

struct Complexo soma(struct Complexo z, struct Complexo w) {
    struct Complexo resultado;
    resultado.real = z.real + w.real;
    resultado.imaginaria = z.imaginaria + w.imaginaria;
    return resultado;
}

struct Complexo subtracao(struct Complexo z, struct Complexo w) {
    struct Complexo resultado;
    resultado.real = z.real - w.real;
    resultado.imaginaria = z.imaginaria - w.imaginaria;
    return resultado;
}

struct Complexo produto(struct Complexo z, struct Complexo w) {
    struct Complexo resultado;
    resultado.real = z.real * w.real - z.imaginaria * w.imaginaria;
    resultado.imaginaria = z.real * w.imaginaria + z.imaginaria * w.real;
    return resultado;
}

float modulo(struct Complexo z) {
    return sqrt(z.real * z.real + z.imaginaria * z.imaginaria);
}

int main() {
    struct Complexo z, w, resultado;
    float moduloZ, moduloW;

    printf("Digite a parte real e imaginaria de z: ");
    scanf("%f %f", &z.real, &z.imaginaria);
    printf("Digite a parte real e imaginaria de w: ");
    scanf("%f %f", &w.real, &w.imaginaria);
    resultado = soma(z, w);
    printf("\nSoma: %.2f + %.2fi\n", resultado.real, resultado.imaginaria);
    resultado = subtracao(z, w);
    printf("Subtracao: %.2f + %.2fi\n", resultado.real, resultado.imaginaria);
    resultado = produto(z, w);
    printf("Produto: %.2f + %.2fi\n", resultado.real, resultado.imaginaria);
    moduloZ = modulo(z);
    moduloW = modulo(w);
    printf("Modulo de z: %.2f\n", moduloZ);
    printf("Modulo de w: %.2f\n", moduloW);

    return 0;
}
