#include <stdio.h>
#include <math.h>

int main()
{

	float x, y, w, z, media, mediag, mediah, mediap, p1 = 2, p2 = 4, p3 = 6, p4 = 8;

	printf("Valor de x: \n");
	scanf("%f", &x);
	printf("Valor de y: \n");
	scanf("%f", &y);
	printf("Valor de w: \n");
	scanf("%f", &w);
	printf("Valor de z: \n");
	scanf("%f", &z);

	media = (x+y+w+z) / 4;
	mediag = pow(x*y*w*z, 0.25);
	mediah = 4/((1/x) + (1/y) + (1/w) + (1/z));
	mediap = ((x*p1)+(y*p2)+(w*p3)+(z*p4))/(p1+p2+p3+p4);

	printf("Media aritimetica: %f\n", media);
	printf("Media geometrica: %f\n", mediag);
	printf("Media harmonica: %f\n", mediah);
	printf("Media ponderada: %f", mediap);
	return 0;
}