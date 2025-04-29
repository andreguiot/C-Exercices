#include <stdio.h>


int main(){

    FILE *fp;
    char c;
    int qtd_linhas = 0;

    fp = fopen("arq.txt", "r");
    if(fp == NULL){
        printf("N�o foi poss�vel fazer a leitura do arquivo");
        exit(1);
    }
    while((c = fgetc(fp)) != EOF){

        if(c == '\n'){
            qtd_linhas++;
        }
    }
    printf("\nA quantidade de linhas presentes no arquivo � de : %d\n\n", qtd_linhas+1);
}
