#include <stdio.h>

int nota(int nt[3], char c){
    int soma = 0;

    if(c == 'A' || c == 'a'){
        for(int i=0;i<3;i++){
            soma += nt[i];
        }
    return (soma/3);
   }
    if(c == 'P' || c == 'p'){
        for(int i=0;i<3;i++){
            switch(i){
                case 0:
                    soma += (nt[i] * 5);
                    break;
                case 1:
                    soma += (nt[i] * 3);
                    break;
                case 2:
                    soma + (nt[i] * 2);
                    break;
            }
        }
    return soma/(10);
   }
}




int main(){

    int nt[3], x;
    char letra;

    printf("Informe as 3 notas dos alunos : ");
    for(int i=0;i<3;i++){
        printf("\nNota %d : ", i+1);
        scanf("%d", &nt[i]);
    }
    printf("Informe o tipo de media : ");
    scanf(" %c", &letra);

    x= nota(nt, letra);
}
