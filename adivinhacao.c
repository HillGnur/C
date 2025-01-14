#include <stdio.h> //Strings
#include <stdlib.h> //Rand
#include <time.h> //Time
/*
    Pseudo-aleatório: int randNum = rand() % 100;
*/

int main(){
    //Aleatório, sempre gera uma nova seed
    srand(time(0));
    int bigNum = rand();
    int randNum =  bigNum % 100;

    int numero;
    int tentativas;
    int acertou = 0;

    int dificuldade;

    printf("        .----.   @   @          \n");
    printf("       / .-\"-.`.  \\v/         \n");
    printf("       | | '\\ \\ \\_/ )        \n");
    printf("     ,-\\ `-.' /.'  /           \n");
    printf("    '---`----'----'             \n\n");

    printf("Você gostaria de jogar em qual dificuldade?\n");
    printf("1. Fácil\n2. Médio\n3. Difícil\n\n");
    scanf("%d",&dificuldade);

    switch(dificuldade){
        case 1:
            printf("Dificuldade escolhida: 1\nNúmero de tentativas: 15\n\n");
            tentativas = 15;
            break;
        case 2:
            printf("Dificuldade escolhida: 2\nNúmero de tentativas: 10\n\n");
            tentativas = 10;
            break;
        case 3:
            printf("Dificuldade escolhida: 3\nNúmero de tentativas: 5\n\n");
            tentativas = 5;
            break;
        default:
            printf("Como você não utilizou um número válido, jogará no modo Pesadelo, com apenas uma tentativa!\n\n");
            tentativas = 1;
            break;
    };

    double pontos = 1000.0;
    double pontosPerdidos;

    for (int i=0; i<tentativas; i++){       
        printf("Digite um número para que eu o compare com o número que imaginei\n");
        printf("Tentativa %d\n", i+1);
        scanf("%d", &numero);
        
        acertou = (numero == randNum);

        if(acertou){
            break;
        };

        if(numero < 0){
            printf("Você não pode chutar números negativos!\n");
            continue;
        };

        //numero < randNum ? printf("Menor\n") : printf("Maior\n");

        if(numero < randNum){
            printf("Infelizmente você errou. O número que você escolheu, é menor que o número que pensei\n");
        }else{            
            printf("Infelizmente você errou. O número que você escolheu, é maior que o número que pensei\n");
        };

        //pontosPerdidos+= ((numero - randNum) / 2.0) < 0 ? ((numero - randNum) / 2.0) * (-1) : (numero - randNum) / 2.0
        pontosPerdidos+=abs((numero - randNum) / 2.0);
    };

    printf("Fim de jogo!\n\n");

    if(acertou){
        printf("Você ganhou!\n");
        printf("Jogo encerrado em %d tentativas\nSua pontuação final foi de %.2f pontos.\n", tentativas, (pontos-pontosPerdidos));
    }else{
        printf("Infelizmente, você não acertou o número em que pensei...\n");
    }

    return 0;
};
