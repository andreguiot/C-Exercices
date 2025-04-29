#include <stdio.h>


typedef struct{
    char nome[40];
    int nmat;
    char curso[40];
}aluno;


int main(){

    aluno lunos[5];

    for(int i=0; i<5; i++){
        printf("informe o nome do aluno %d : ", i+1);
        fgets(lunos[i].nome, 40, stdin);

        printf("\ninforme o numero da matricula do aluno : ");
        scanf("%d", &lunos[i].nmat);
        getchar();

        printf("\ninforme o nome do curso : ");
        fgets(lunos[i].curso, 40, stdin);
    }

    for (int i=0; i<5; i++){
        printf("------------------------------------\n");
        printf("Nome Aluno %d : %s \nNumero da matricula : %d \nCursando : %s\s", i+1, lunos[i].nome, lunos[i].nmat, lunos[i].curso);
        printf("\n-----------------------------------");

    }





}

