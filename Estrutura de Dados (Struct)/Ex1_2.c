#include <stdio.h>


int main(){

typedef struct{

     int hora;
     int minuto;
     int segundo;
}horario;

typedef struct{

    int dia;
    int mes;
    int ano;
}data;

typedef struct{
    horario tempo;
    data date;
}compromisso;


    return 0;
}
