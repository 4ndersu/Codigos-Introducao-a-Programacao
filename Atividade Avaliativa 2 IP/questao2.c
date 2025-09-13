#include <stdio.h>

int main()
{
	int unidades;
	float preco, desconto;

	printf("Preco do produto: ");
	scanf("%f", &preco);

	printf("Unidades: ");
	scanf("%d", &unidades);

	printf("Produto:\nPreco: %f R$ \nUnidades: %d\n", preco, unidades);

	if(unidades <= 10) {
	    printf("Nao ha desconto\n");
		desconto = 0.0;
	} else if(unidades > 10.0 && unidades <=20) {
	    printf("Desconto: 10 por cento\n");
		desconto = 0.1;
	} else if(unidades > 20 && unidades <= 30) {
		printf("Desconto: 20 por cento\n");
		desconto = 0.2;
	} else if(unidades > 30 ) {
		printf("Desconto: 30 por cento\n");
		desconto = 0.3;
	}
	
	preco = (preco - (preco * desconto)) * unidades;
	
	printf("Preco com desconto: %f R$", preco);
	return 0;
}