#include <stdio.h>
#include <math.h>

float distance(float x1, float x2, float y1, float y2) {
    float distancia;
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return distancia;
}

float main() {
    float x1, x2, y1, y2, retorno;

    printf("Informe o ponto 1 (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Informe o ponto 2 (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    retorno = distance(x1, x2, y1, y2);
    printf("A distância entre esses dois pontos é: %f\n", retorno);

    return 0.0;
}
