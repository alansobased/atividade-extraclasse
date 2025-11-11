#include <stdio.h>

int ano_bissexto(int ano){
	int inteiro = ano /4;
	float flutuante = (float) ano /4;
	
	if((flutuante - inteiro) == 0){
		inteiro = ano/100;
		flutuante = (float) ano/100;
		
		if((flutuante-inteiro) != 0){
			return 1;
		} else {
			inteiro = ano/400;
			flutuante = (float) ano / 400;
			if((flutuante - inteiro) == 0){
				return 1;
			} else{
				return 0;
			}
		}
		
	} else {
		return 0;
	}
	
}

int main(){
	int ano = 2024;
	
	int ans = ano_bissexto(ano);
	
	if(ans == 1){
		printf("Ano bissexto\n");
	} else {
		printf("Ano NAO bissexto\n");
	}
	
	return 0;
}