#include <stdio.h>


int Verifica(){
    int positivo;
    scanf("%d", &positivo);
    while(positivo < 0){
        printf("Valor invalido. \n Por favor, informe apenas numeros postivos : ");
        scanf("%d", &positivo);
    }
    return positivo;
}



int SomaDivisores(int n){
    int soma = 0;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            soma += i;
            }

        }
    return soma;
    }


int main(){
    int num[5], divisores[5];

    printf("Escreva 5 numeros inteiros positivos : ");
    for(int i=0; i<5; i++){
        num[i] = Verifica();
        divisores[i] = SomaDivisores(num[i]);
    }
     for (int i = 0; i < 5; i++) {
        printf("A soma dos divisores de %d e: %d\n", num[i], divisores[i]);
    }
    return 0;
}
