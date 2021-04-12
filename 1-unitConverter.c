#include <stdio.h>

int main(void) {
  float valueMeters;

  printf("Informe um valor em metros: ");
  scanf("%f", &valueMeters);

  float valueDecimeters = (valueMeters * 10);
  float valueCentimeters = (valueMeters * 100);
  float valueMilimeters = (valueMeters * 1000);

  printf("Seu valor, em decímetros, vale: %.2f dm\n", valueDecimeters);
  printf("Seu valor, em centímetros, vale: %.2f cm\n", valueCentimeters);
  printf("Seu valor, em milímetros, vale: %.2f mm\n", valueMilimeters);

  return 0;
}
