#include <stdio.h>

struct Horario {
    int hora;
    int minutos;
    int segundos;
};
struct Data {
    int dia;
    int mes;
    int ano;
};
struct Compromisso {
    struct Data data;
    struct Horario horario;
    char descricao[100];
};
int main() {
    struct Compromisso meuCompromisso;
    meuCompromisso.data.dia = 20;
    meuCompromisso.data.mes = 1;
    meuCompromisso.data.ano = 2025;

    meuCompromisso.horario.hora = 15;
    meuCompromisso.horario.minutos = 30;
    meuCompromisso.horario.segundos = 0;
    strcpy(meuCompromisso.descricao, "Reunião com a equipe");
    printf("Compromisso:\n");
    printf("Data: %d/%d/%d\n", meuCompromisso.data.dia, meuCompromisso.data.mes, meuCompromisso.data.ano);
    printf("Horário: %d:%d:%d\n", meuCompromisso.horario.hora, meuCompromisso.horario.minutos, meuCompromisso.horario.segundos);
    printf("Descrição: %s\n", meuCompromisso.descricao);

    return 0;
}
