#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  float A, B, C;

  printf("Informe valores que compõem um triângulo e veja o seu comportamento.\n");

  printf("Valor do lado A: ");
  scanf("%f", &A);

  printf("Valor do lado B: ");
  scanf("%f", &B);

  printf("Valor do lado C: ");
  scanf("%f", &C);

  if (((A + B) < C) || ((A + C) < B) || ((B + C) < A)) {
    printf("Os valores não compõem um triângulo pois a soma de dois valores informados é menor que o outro valor.\n");
    exit(0);
  } else if (A == 0 || B == 0 || C == 0) {
    printf("Um triângulo não pode possuir um lado com valor 0.\n");
    exit(0);
  }

  if (A == B && B == C) {
    printf("Os valores informados compõem um triângulo equilátero, pois possui todos os lados iguais.\n");
  } else if (A == B || A == C || B == C) {
    printf("Os valores informados compõem um triângulo isósceles, pois possui dois lados iguais.\n");
  } else if (A != B != C) {
    printf("Os valores informados compõem um triângulo escaleno, pois possui todos os lados diferentes.\n");
  }

  return 0;
}
