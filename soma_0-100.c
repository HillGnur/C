#include <stdio.h>

int main(){
	int count, soma = 0;
	while(count <=100){
		soma+=count;
		count++;
		print("Soma total: %d\nNúmero atual: %d\n", soma, count);
	}
	printf("A soma dos números de 1 a 100 é %d\n",soma);
};