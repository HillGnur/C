#include <stdio.h>

/*  
1.  A conversão é chamada de Cast
    Para realizar a conversão ao realizar uma operação,
    podemos simplesmente colocar o novo tipo entre parênteses antes do número em questão
2.  A vantagem (e desvantagem ao mesmo tempo) do Cast, é que ele pode ser feito de qualquer tipo, para qualquer outro tipo
    Sua vantagem é que ele é fácil e rápido de ser implementado
    mas a desvantagem é que pode-se perder informações a depender de como foi implementado

*/

int main(){
    //1
    int a = 3;
    int b = 2;
    double pontos = a / (double)b;
    printf("%.2f\n", pontos);

    //2
    double pi = 3.1415;
    int pi_int = (int)pi;

    printf("%.4f => %d\n", pi, pi_int);
};