#include <stdio.h>
#include <math.h>

//subprograma para calcular fatorial
float fatorial(int n) {
    //condição de parada
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

//subprograma que calcula o cosseno de x usando a série
float cosseno(float x) {
    float resultado = 0;
    for (int n = 0; n < 30; n++) { 
        float termo;
        if (n % 2 == 0) {
            termo = powf(x, 2 * n) / fatorial(2 * n);
        } else {
            termo = -powf(x, 2 * n) / fatorial(2 * n);
        }
        resultado = resultado + termo; //soma os termos da série
    }
    return resultado;
}

//subprograma para comparar os resultados com a biblioteca math.h
void comparar(float x) {
    float ResultadoSerie = cosseno(x);
    float ResultadoMathh = cosf(x);
    printf("x = %.1f, cos(x) = %f, Serie = %f\n", x, ResultadoMathh, ResultadoSerie); // imprime os resultados
}

int main() {
    float x = 0.0; 
    while (x <= 6.3) { 
        comparar(x); 
        x = x + 0.1; //aumenta valor de x de 0,1 em 0,1
    }
    return 0;
}

