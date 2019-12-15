/*
* CH1 Exercise 1-3
*
* exercise1-3.c
*
* Modify the temperature conversion program (arithmetic-expressions.c) to
* print a heading above the table.
*
* page 14
*/

#include <stdio.h>

int main() {

  /* initialize boundary variables and celcius/Fahrenheit variables*/
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  // print header
  printf("Temp(F)\tTemp(C)\n");

  // define fahr before entering while loop
  fahr = 0;

  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }


  return 0;
}
