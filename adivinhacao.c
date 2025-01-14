#include <stdio.h> //Strings
#include <stdlib.h> //Rand
#include <time.h> //Time
/*
    Pseudo-aleatório
    int randNum = rand() % 100;
*/

int main(){
    //Aleatório, sempre gera uma nova seed
    srand(time(0));
    int bigNum = rand();
    int randNum =  bigNum % 100;
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

        //numero < randNum ? printf("Menor\n") : printf("Maior\n");

        if(numero < randNum){
            printf("Infelizmente você errou. O número que você escolheu, é menor que o número que pensei\n");
        }else if(numero > randNum){            
            printf("Infelizmente você errou. O número que você escolheu, é maior que o número que pensei\n");
        }else{
            printf("Você acertou!!\n");
            break;
        }

        pontosPerdidos+=abs((numero - randNum) / 2.0);

        tentativas++;
    };
    printf("Jogo encerrado em %d tentativas\nSua pontuação final foi de %.2f pontos.", tentativas, (pontos-pontosPerdidos));

    return 0;
};
