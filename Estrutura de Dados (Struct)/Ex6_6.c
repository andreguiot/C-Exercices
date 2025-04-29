#include <stdio.h>

typedef struct{

    char nome[40], sexo, cargo[30];
    int idade, CPF, datanasc, salario ;
    int codgsetor;
}funcionario;



int main(){

    funcionario employee;

    printf("\nNome do funcionario : ");
    fgets(employee.nome, 40, stdin);

    printf("\nSexo [M/F] : ");
    scanf("%c", &employee.sexo);
    getchar();

    printf("\nIdade : ");
    scanf("%d", &employee.idade);
    getchar();

    printf("\nCPF : ");
    scanf("%d", &employee.CPF);
    getchar();

    printf("\nData de Nascimento : ");
    scanf("%d", &employee.datanasc);
    getchar();

    while(1){
        printf("\nCodigo Do Setor (0-99) : ");
        scanf("%d", &employee.codgsetor);
        getchar();

        if((employee.codgsetor >=0) && (employee.codgsetor <=99)){
            break;
        }else{
            printf("Codigo invalido! \nInforme um codigo entre [0-99]");
            scanf("%d", &employee.codgsetor);
            getchar();
        }

        printf("\nCargo : ");
        fgets(employee.cargo, 30, stdin);
        getchar();

        printf("\nSalario : ");
        scanf("%d", &employee.salario);
        getchar();
    }

    printf("Seus dados : \n\n---------------------------");
    printf("Nome do funcionario : %s \nSexo : %c \nIdade : %d \nCPF : %d \nData de Nascimento : %d \nCodigo Do Setor : %d \nCargo : %s \nSalario: %d ", employee.nome,employee.sexo);


}
