#include <stdio.h>

int main(){
    int rand = 42;
    int numero;
    int ganhou = 0;
    int tentativas = 1;
    
    double pontos = 1000.0;
    double pontosPerdidos;

    while(1){        
        printf("Digite um número para que eu o compare com o número que imaginei\n");
        printf("Tentativa %d\n", tentativas);
        scanf("%d", &numero);
        
        if(numero < 0){
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        //numero < rand ? printf("Menor\n") : printf("Maior\n");

        if(numero < rand){
            printf("Infelizmente você errou. O número que você escolheu, é menor que o número que pensei\n");
        }else if(numero > rand){            
            printf("Infelizmente você errou. O número que você escolheu, é maior que o número que pensei\n");
        }else{
            printf("Você acertou!!\n");
            break;
        }

        pontosPerdidos+=((numero - rand) /2.0) < 0 ? ((numero - rand) / 2.0) * (-1) : (numero - rand) / 2.0;

        tentativas++;
    };
    printf("Jogo encerrado em %d tentativas\nSua pontuação final foi de %.2f pontos.", tentativas, (pontos-pontosPerdidos));
};
