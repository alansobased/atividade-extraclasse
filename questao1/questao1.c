#include <stdio.h>

float calcMedia(int arr[10]){
	int soma = 0;
	for(int i=0; i<10; i++){
		soma+=arr[i];
	}
	
	return (float) soma / 10;
}


int achaMaior(int arr[10]){
	int maior = arr[0];
	for(int i =0; i<10; i++){
		if(maior < arr[i]){
			maior = arr[i];
		}
	}
	
	return maior;
}

int achaMenor(int arr[10]){
	int menor = arr[0];
	for(int i =0; i<10; i++){
		if(menor > arr[i]){
			menor = arr[i];
		}
	}
	
	return menor;
}

int contaPares(int arr[10]){
	int qt = 0;
	
	for(int i=0; i<10; i++){
		if(arr[i]%2==0){
			qt++;
		}
	}
	
	return qt;
}


int main(){
	int arr[10];
	
	for(int i=0; i<10; i++){
		arr[i] = i;
	}
	
	
	printf("\n");

	printf("Media : %f\n", calcMedia(arr));
	printf("Maior : %d\n", achaMaior(arr));
	printf("Menor : %d\n", achaMenor(arr));
	printf("Quantidade de pares : %d\n", contaPares(arr));

	return 0;
}
