#include <stdio.h>

int main(){
    int tentativas;
    int scannedNum;

    printf("Digite um número de 1 a 3\n");
    scanf("%d\n", &scannedNum);

    switch (scannedNum){
        case 1:
            tentativas = 20;
            break;//Obrigatório o uso de break em cada case!
        case 2:
            tentativas = 14;
            break;
        case 3:
            tentativas = 8;
            break;    
        default:
            printf("Selecione um número válido!\n\n");
            break;
    }
}