#include <stdio.h>
#include <math.h>

int main()
{

	float h, v, g = 10, t1, t2;

	printf("Altura do objeto: \n");
	scanf("%f", &h);
	printf("Velocidade incial: \n");
	scanf("%f", &v);

	t1 = (v + sqrt(pow(v, 2)  - (2 *g*h))) / g;
    t2 = (v - sqrt(pow(v, 2)  - (2 *g*h))) / g;
    
    printf("Tempo subindo: %f / Tempo descendo: %f", t1, t2);
    
	return 0;
}