#include <stdio.h>
#include <math.h>

int main(void) {
  float x1, x2, y1, y2;

  printf("Para calcular a distância de dois pontos no plano cartesiano, informe suas posições.\n");

  printf("Valor do X¹: ");
  scanf("%f", &x1);

  printf("Valor do Y¹: ");
  scanf("%f", &y1);

  printf("Valor do X²: ");
  scanf("%f", &x2);

  printf("Valor do Y²: ");
  scanf("%f", &y2);

  float deltaX = (x2 - x1);
  float deltaY = (y2 - y1);

  float distance = sqrt(pow(deltaX, 2) + pow(deltaY, 2));

  printf("A distância dos pontos é igual a: %.2f\n", distance);

  return 0;
}
