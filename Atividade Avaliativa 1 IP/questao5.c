#include <stdio.h>
#include <math.h>

int main()
{

    float lar, com, a1, a2, a3, a4, pd = 2.8 , porta, maxpinta = 15, qtd;
    
    printf("Largura: ");
    scanf("%f", &lar);
    printf("Comprimento: ");
    scanf("%f", &com);
    printf("Pe direito: %f\n", pd);
    
    porta = 0.8 * 2.1;
    printf("Area da porta: %2f m²\n", porta);
    
    a1 = lar * com;
    a2 = com * pd;
    a3 = a2 - porta;
    a4 = (a1*2) + a2 +a3;
    
    printf("Area 1: %f \n", a1);
    printf("Area 2: %f \n", a2);
    printf("Area 3: %f \n", a3);
    printf("Area total: %f \n", a4);
    
    qtd = a4 / maxpinta;
    
    printf("Quantidade de latas: %f \n", qtd);
	return 0;
}