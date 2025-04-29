#include <stdio.h>
#include <math.h>

int potencia(int b, int e){
  if (e < 1) {
        printf("Erro: o expoente deve ser um inteiro maior ou igual a 1.\n");
        return -1;
    }
    return pow(b, e);
}


int main(){

    int base, expoente;

    printf("numero : ");
    scanf("%d", &base);
    printf("\nexpoente : ");
    scanf("%d", &expoente);
    printf("\nPotencia de [%d]^%d : %d", base, expoente, potencia(base, expoente));

}
