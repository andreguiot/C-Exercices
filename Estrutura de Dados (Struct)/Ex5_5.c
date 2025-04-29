#include <stdio.h>
#define TAMANHO 3

typedef struct{

    char nome[40];
    int matricula;
    int codg_disc;
    int nt1, nt2;

}alunos;

int main(){

    alunos garotada[TAMANHO];
    float media[TAMANHO];

    for(int i=0; i<TAMANHO; i++){

        printf("\nInforme o nome do Aluno %d : ", i+1);
        fgets(garotada[i].nome, 40, stdin);

        printf("\nInforme a sua matricula : ");
        scanf("%d", &garotada[i].matricula);
        getchar();

        printf("\nInforme o Codigo da Disciplina : ");
        scanf("%d", &garotada[i].codg_disc);
        getchar();

        printf("\nInforme a Nota 1 : ");
        scanf("%d", &garotada[i].nt1);
        getchar();

        printf("\nInforme a Nota 2 : ");
        scanf("%d", &garotada[i].nt2);
        getchar();
    }

    for(int i=0; i<TAMANHO; i++){
        media[i] = ((garotada[i].nt1*1) + (garotada[i].nt2*2))/3;
    }

    for(int i=0; i<TAMANHO; i++){
        printf("Media final do Aluno %s : \n", garotada[i].nome);
        printf("%.2f", media[i]);
    }

}
