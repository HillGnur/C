#include <stdio.h>

int main(){
	int x,y;
	printf("Digite o valor de X\n");
	scanf("%d", &x);
	
	printf("Agora, digite o valor de Y\n");
	scanf("%d", &y);
	
	printf("A multiplicação de x (%d) e y (%d) é  %d\n", x,y,(x*y));
}