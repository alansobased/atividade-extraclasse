#include <stdio.h>

int somar_digitos(int n){
	int soma = 0;
	while(n != 0){
		soma += n%10;
		n = n/10;		
	}
	
	return soma;
}


int main(){
	int n = 441;
	
	printf("Soma dos digitos do numero %d : %d\n", n, somar_digitos(n));
	
	
	return 0;
}