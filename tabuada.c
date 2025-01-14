#include <stdio.h>

int main(){
	int numero;
	printf("Digite um número, e irei te dar a tabuada deste de 0 a 10:\n");
	scanf("%d",&numero);
	
	for(int i=0;i<=10;i++){
		printf("%d x %d = %d\n", numero, i, (numero * i));
	}
}