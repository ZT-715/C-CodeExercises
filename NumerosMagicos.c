/*Programa numeros magicos baseado em C C&T cap.3*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int magic, guess, numMax;
	
int main(void){

	printf("O numero magico sera de ate: ");
	scanf("%d", &numMax);
	
	srand(time(NULL));
	magic = rand() %numMax;
	
	do{

	printf("Advinhe o numero magico: ");
	scanf("%d", &guess);

	if (guess == magic) {
		printf("Acertou!!\n");
		printf("%d e o numero magico.\n", magic);
		printf("Parabens!!!!\n");
	}
	else guess > magic ? printf("Muito alto.\n") : printf("Muito baixo.\n");

	}while(guess != magic);

}
