#include <stdio.h>
#include <math.h>

int main()
{

	int apt = 75;
    float diarian, diariap , desconto = 0.25, o1 = 0.8, o2 = 0.5, lucro1, lucro2, diff;
	printf("Valor da diaria normal: \n");
	scanf("%f", &diarian);
	printf("Diaria normal: %3f\n", diarian);
	
	diariap = diarian - (diarian * desconto);
	lucro1 = (apt * o1) * diariap;
	lucro2 = (apt * o2) * diarian;
	diff = lucro1 - lucro2;
	
	printf("Diaria promocional: %3f\n", diariap);
	printf("Ocupacao 1(80 e promocional): %f\n", lucro1);
	printf("Ocupacao 2(50 e normal): %f\n", lucro2);
	printf("Diferenca: %f reais", diff);
	
	return 0;
}