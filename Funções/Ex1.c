#include <stdio.h>


int menornumero(int num1, int num2){
    int men = 0;
    if(num1 < num2){
        men = num1;
    }else{
        men = num2;
    }
    return men;

}


int main(){

    int n1, n2, x;

    printf("Escreva dois valores decimais : ");
    scanf("%d \n %d", &n1, &n2);
    x = menornumero(n1,n2);
    printf("O menor número é %d", x);

}
