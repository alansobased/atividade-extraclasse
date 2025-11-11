#include <stdio.h>

float somar(float a, float b){
	return a+b;
}

float subtrair(float a, float b){
	return a-b;
}


float multiplicar(float a, float b){
	return a*b;
}


float dividir(float a, float b){
	return a/b;
}


int main(){
	int ans;
	float a, b;
	int on = 1;
	
	while(on == 1){
		printf("CALCULADORA de 2 numeros top !\n");
		printf("[1] -> somar\n");
		printf("[2] -> subtrair\n");
		printf("[3] -> multiplicar\n");
		printf("[4] -> dividir\n");
		printf("[5] -> sair\n");
		
		printf("> ");
		scanf("%d", &ans);
		
		if(ans != 5){
			printf("Digite seus dois numeros separados por um espaco (ex.: 2 4): ");
			scanf("%f", &a);
			scanf("%f", &b);
		}
		
		printf("\n");
		
		switch(ans){
			case 1:
				printf("Resultado : %f\n", somar(a,b));
				break;
			case 2:
				printf("Resultado : %f\n", subtrair(a,b));
				break;
			case 3:
				printf("Resultado : %f\n", multiplicar(a,b));
				break;
			case 4:
				if(b == 0) {
					printf("Impossivel dividir por 0 !!\n");
					break;
				}
				
				printf("Resultado : %f\n", dividir(a,b));
				break;
			case 5:
				printf("Programa terminado.\n");
				on = 0;
				break;
			default:
				printf("Opcao invalida!!!!\n");
				break;
		}		
	}

	
	return 0;
}

