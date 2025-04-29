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

    for (int i=0 ; i<tamanho; i++){


        printf("Informe a marca do carro : ");
        fgets(carro[i].marca, 15, stdin);

        printf("Ano : ");
        scanf("%d", &carro[i].ano);

        printf("Preco : ");
        scanf("%f", &carro[i].preco),
        getchar();

    }
    printf("\nDigite um valor comparativo : ");
    scanf("%f", &p);

    printf("Preco dos carros menores que o valor estimado : \n");

    int i=0;
    while(p!=0){

        for (int j=0; j<tamanho; j++){
            if(carro[j].preco < p){
                printf("\nInformacoes [%s] \nAno : %d \nPreco : %.2f \n", carro[j].marca, carro[j].ano ,carro[j].preco);
            }else{
                printf("Nao ha valores menor que esse preco.");
            }
        }
        printf("\nDigite outro valor para comparacao [0 para sair]: ");
        scanf("%f", &p);

        i++;
    }




    return 0;
}
