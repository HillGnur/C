#include <stdio.h>
#include <string.h>

int main(){
    char palavra[20];
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
        scanf("%c",&palpite);

        for(int i=0;i<strlen(palavra);i++){
            printf("A palavra que pensei tem %d letras.",strlen(palavra));

            if(palavra[i] == palpite){
                printf("A posição %d tem a letra %c", i, palpite);
            }else{
                printf("A letra %c não faz parte da palavra", palpite);
            }
        }

    //Ao usar a exclamação, ela nega uma variável booleana
    }while(!acertou && !enforcou);
    //while(acertou == 0 && enforcou ==0){};
};