#include <stdio.h>

int main() {
  double temperature = 0;
  double fahrenheit = 80;
  double celcius = (fahrenheit - 32) / 1.8;

  printf("The temperature in Celsius is: %lf\n", celcius);
  return 0;
}