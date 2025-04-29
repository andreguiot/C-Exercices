#include <stdio.h>
#define tamanho 2

typedef struct{

    char nome[40];
    int codgproduto;
    int qtdestoque;
    float preco;

}produto;

int main(){

    produto p[tamanho];
    float valor_total[tamanho];

    for (int i=0; i<tamanho; i++){

        printf("\n\nInforme o nome do produto %d : ", i+1);
        fgets(p[i].nome, 40, stdin);

        printf("\nCodigo do produto : ");
        scanf("%d", &p[i].codgproduto);

        printf("\nQuantidade em estoque : ");
        scanf("%d", &p[i].qtdestoque);

        printf("\nPreco : ");
        scanf("%f", &p[i].preco);
        getchar();
    }
    for (int i=0; i<tamanho; i++){
        valor_total[i] = p[i].preco * p[i].qtdestoque;
        printf("\nO valor total do produto %s eh %.2f ", p[i].nome, valor_total[i]);
    }
}
