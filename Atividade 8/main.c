#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Ponto;

int main(int argc, char *argv[]) {
    
    if (argc != 5) {
        printf("Erro: Use assim -> %s <Xa> <Ya> <Xb> <Yb>\n", argv[0]);
        return 1;
    }

    Ponto p1, p2;

    p1.x = atof(argv[1]);
    p1.y = atof(argv[2]);
    p2.x = atof(argv[3]);
    p2.y = atof(argv[4]);
  
    double dif_x = p2.x - p1.x;
    double dif_y = p2.y - p1.y;
  
    double distancia = sqrt( (dif_x * dif_x) + (dif_y * dif_y) );

    printf("A distancia e: %.2f\n", distancia);

    return 0;
}
