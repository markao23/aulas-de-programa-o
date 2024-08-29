#include <stdio.h>
//Função de fatorial
int fatorial(int num){
    if(num == 0){
        return 1;
    }
    return num * fatorial(num - 1);
}
//Função principal
int main(){
    int numero = 5;
    int resultado = 0;

    resultado = fatorial(numero);

    printf("Fatorial de %d e %d\n", numero, resultado);

    return 0;
}