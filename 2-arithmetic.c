#include <stdio.h>
#include <math.h>

int main(void) {
  float numberOne, numberTwo;

  printf("Informe dois números para obter cálculos relacionados a eles entre si: \n");
  scanf("%f\n", &numberOne);
  scanf("%f", &numberTwo);

  float sum = (numberOne + numberTwo);
  float subtraction = (numberOne - numberTwo);
  float productAndPower = (numberOne * (pow(numberTwo, 2)));
  float differenceOfSquares = ((pow(numberOne, 2) - pow(numberTwo, 2)));
  float sqrtOfSum = (sqrt(pow(numberOne, 2) + pow(numberTwo, 2)));
  float sinOfDifference = sin(subtraction);

  printf("A soma dos números informados é: %.2f\n", sum);
  printf("O produto do primeiro pelo quadrado do segundo é: %.2f\n", productAndPower);
  printf("O quadrado do primeiro número menos o quadrado do segundo: %.2f\n", differenceOfSquares);
  printf("A raiz quadrada da soma dos quadrados: %.2f\n", sqrtOfSum);
  printf("O seno da diferença do primeiro número pelo segundo: %.2f\n", sinOfDifference);

  return 0;
}
