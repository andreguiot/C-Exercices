#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};
struct Funcionario {
    char nome[100];
    int idade;
    char sexo;
    char cpf[15];
    struct Data nascimento;
    int codigoSetor;
    char cargo[30];
    float salario;
};

int main() {
    struct Funcionario funcionario;
    printf("Digite os dados do funcionario:\n");

    printf("Nome: ");
    fgets(funcionario.nome, sizeof(funcionario.nome), stdin);

    printf("Idade: ");
    scanf("%d", &funcionario.idade);
    printf("Sexo (M/F): ");
    getchar();
    scanf("%c", &funcionario.sexo);
    printf("CPF: ");
    getchar();
    fgets(funcionario.cpf, sizeof(funcionario.cpf), stdin);
    printf("Data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &funcionario.nascimento.dia, &funcionario.nascimento.mes, &funcionario.nascimento.ano);

    printf("Codigo do setor (0-99): ");
    scanf("%d", &funcionario.codigoSetor);

    getchar();
    printf("Cargo: ");
    fgets(funcionario.cargo, sizeof(funcionario.cargo), stdin);

    printf("Salario: ");
    scanf("%f", &funcionario.salario);

    printf("\nDados do funcionario:\n");
    printf("Nome: %s", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %s", funcionario.cpf);
    printf("Data de Nascimento: %02d/%02d/%04d\n", funcionario.nascimento.dia, funcionario.nascimento.mes, funcionario.nascimento.ano);
    printf("Codigo do Setor: %d\n", funcionario.codigoSetor);
    printf("Cargo: %s", funcionario.cargo);
    printf("Salario: %.2f\n", funcionario.salario);

    return 0;
}
