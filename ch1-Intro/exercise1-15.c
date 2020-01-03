/*  CH1 Exercise 1-15
*
*   exercise1-15.c
*
*   Rewrite temperature conversion program to use a function for conversion
*
*   page 24
*/

#include <stdio.h>

void celsius_to_fahr(float c);

int main() {

  // initialize celcius to 0 before entering loop
  int celsius = 0;

  // call function celsius_to_fahr
  celsius_to_fahr(celsius);

  return 0;
}

/* Print conversion table of celsius to fahrenheit */
void celsius_to_fahr(float c) {

  // initialize float values for lower, upper, step
  float lower, upper, step;
  float fahr;

  lower = 0;
  upper = 300;
  step = 20;

  // print header
  printf("Temp(C)\tTemp(F)\n");

  while (c <= upper) {
    // celsius = (5.0/9.0) * (fahr - 32.0);
    fahr = (c * (9.0/5.0)) + 32.0;
    printf("%3.0f\t%6.1f\n", c, fahr);
    c = c + step;
  }
  // no need to return anything
}
