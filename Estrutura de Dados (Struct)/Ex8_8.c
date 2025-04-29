#include <stdio.h>
#include <string.h>
#define tamanho 2

typedef struct{
    char nome[40];
    char endereco[40];
    char telefone[11];
}pessoa;


int main(){

    pessoa person[tamanho];
    int ordem[tamanho];
    char x;

    printf("Informe : \n");

    for (int i=0; i<tamanho; i++){

        printf("\nNome : ");
        fgets(person[i].nome, 40, stdin);
        ordem[i] = person[i].nome;

        printf("\nEndereco : ");
        fgets(person[i].endereco, 40, stdin);


        printf("\nTelefone : ");
        fgets(person[i].telefone, 40, stdin);

    }

    int i=0;
    int caracter[tamanho], c;
    while(1){
        caracter[i] = person[i].nome[i];
        printf("%c", caracter[i]);
        if(i>=2 && caracter[i] > c){
            c = caracter[i-1];

        }

    i++;
    }







}
