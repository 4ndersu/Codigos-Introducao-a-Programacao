#include <stdio.h>

int main()
{   
    
    int hr, min, seg, mili;
    
    printf("Horas: \n");
    scanf("%d", &hr);
    printf("Minutos: \n");
    scanf("%d", &min);
    printf("Segundos: \n");
    scanf("%d", &seg);
    
    hr = 3600 * hr;
    min = 60 * min;
    
    mili = (hr + min + seg) * 1000; 
    
    printf("Tempo em milissegundos: %d", mili);
    return 0;
}