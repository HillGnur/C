#include <stdio.h>
#include <string.h>

int main(){
    char palavra[20];
    char chutes[26];
    int tentativas = 0;
    int acertou = 0;
    int enforcou = 0;
    // o \0 indica o fim da string ao usar o printf com %s
    sprintf(palavra, "Melancia\0 e Banana");

    //o while (entry-controlled) checa a condição antes de ser executado, enquanto que o do-while (exit-controlled) checa ao fim da execução
    //sendo assim, o While pode não executar o código caso a condição seja inicialmente falsa
    //enquanto isso, o do-while garante que a execução venha antes da verificação
    do{        
        //Início do jogo
        char palpite;

        //Ao usar um scanf, ele irá ler o ENTER quando o usuário fizer o input, assim pode-se contornar uma leitura duplicada usando " %c" com espaço antes da porcentagem
        scanf(" %c",&palpite);
        
        printf("A palavra secreta tem %d letras\n", strlen(palavra));
        
        for(int i = 0; i<strlen(palavra);i++){

            int achou = 0;

            for(int j = 0;j < tentativas;j++){
                
                if(chutes[j] == palavra[i]){
                    achou = 1;
                    break;
                }
            }
            
            if(achou){
                printf("%c ");
            }else{
                printf("_ ");
            }
        }
        printf("\n");

        chutes[tentativas] = palpite;
        tentativas++;

    //Ao usar a exclamação, ela nega uma variável booleana
    }while(!acertou && !enforcou);
    //while(acertou == 0 && enforcou ==0){};
};