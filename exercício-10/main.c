#include <stdio.h>
#include <stdlib.h>

int main(){
	float media;
	float nota1;
	float nota2;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) /2.0; // parênteses ajudam a garantir que a soma aconteça primeiro
	printf("Media = %.1f\n", media); // mostrar variavel com 1 casa decimal
	
	if(media >= 7){
		printf("Aprovado");
	}
	else if (media >= 5){
		printf("Recuperacao");
	}
	else {
		printf("Reprovado");
	}

	return 0;
}
