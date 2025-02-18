#include <stdio.h>

int potencia(m, n){
    return m^n;
}

int main(){
    printf("Digite dois números para verificarmos quanto é M elevado à N");

    int m,n;

    printf("Digite o valor base\n");
    scanf("%d", &m);

    printf("Digite o valor do expoente\n");
    scanf("%d", &n);

    int resultado = potencia(m,n);

    printf("O resultado de %d^%d é igual a %d", m, n, resultado);
}