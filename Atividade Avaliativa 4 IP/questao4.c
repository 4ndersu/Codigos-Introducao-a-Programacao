#include <stdio.h>
#include <math.h>

//struct das coordenadas
typedef struct {
  float ponto_x;
  float ponto_y;
} Ponto;

float DistanciaEuclidiana(Ponto ponto1, Ponto ponto2) //declara o parâmetro como uma struct
{ 
  float distancia;
  distancia = sqrt(pow(ponto2.ponto_x - ponto1.ponto_x, 2) + pow(ponto2.ponto_y - ponto1.ponto_y, 2));

  return distancia;
}

int main()
{

  float distancia;
  Ponto p1, p2;
    

  printf("Coordenadas do primeiro ponto (x y): ");
    scanf("%f %f", &p1.ponto_x, &p1.ponto_y);
    
   printf("Coordenadas do segundo ponto (x y): ");
    scanf("%f %f", &p2.ponto_x, &p2.ponto_y);
  
  distancia=DistanciaEuclidiana(p1, p2);

 printf("Distancia Euclidiana entre os dois pontos: %.2f\n", distancia);
 
    return 0;
}
