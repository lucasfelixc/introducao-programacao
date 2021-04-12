#include <stdio.h>
#include <math.h>
#include <time.h>

int main(void) {
  int currentDay, currentMonth, currentYear, birthday, birthmonth, birthyear, age;

  printf("Informe o dia do seu nascimento: ");
  scanf("%d", &birthday);
  printf("Informe o mês do seu nascimento: ");
  scanf("%d", &birthmonth);
  printf("Informe o ano do seu nascimento: ");
  scanf("%d", &birthyear);

  time_t mytime;
  mytime = time(NULL);
  struct tm tm = *localtime(&mytime);

  currentDay = tm.tm_mday;
  currentMonth = tm.tm_mon + 1;
  currentYear = tm.tm_year + 1900;

  age = currentYear - birthyear;
  if((currentDay < birthday) && (currentMonth <= birthmonth)) {
    age -= 1;
  }

  printf("Você tem %d anos de idade. Sendo assim, você é %s de idade.\n", age, (age >= 18) ? "maior" : "menor");

  return 0;
}

