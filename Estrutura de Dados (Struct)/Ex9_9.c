#include <stdio.h>
#define tamanho 2

typedef struct{

    char marca[15];
    int ano;
    float preco;

}car;

int main(){

    car carro[tamanho];
    float p;

    for (int i=0; i<tamanho; i++){

        printf("Marca do veiculo : ");
        fgets(carro[i].marca, 15, stdin);

        printf("\nAno : ");
        scanf("%d", &carro[i].ano);

        printf("\nPreco : ");
        scanf("%f", &carro[i].preco);

    }

    printf("Informe o preco desejavel : ");
    scanf("%f", &p);
    int i=0;
    while(1){

        if (carro[i].preco < p){
            printf("Carros com a faixa de preco menor do que a informada : \n%f", carro[i].preco);
        }

        printf("Informe valores mais baixos : ");
        scanf("%f", &p);
        if (p == 0){
            break;
        }


        i++;
    }

}
