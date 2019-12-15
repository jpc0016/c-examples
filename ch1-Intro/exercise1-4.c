/*
* CH1 Exercise 1-4
*
* exercise1-4.c
*
* Write a program to print the corresponding Celsius to
* Fahrenheit table
*
* page 14
*/

#include <stdio.h>

int main() {

  // initialize float values for lower, upper, step
  float lower, upper, step;
  float fahr, celsius;

  lower = 0;
  upper = 300;
  step = 20;

  // print header
  printf("Temp(C)\tTemp(F)\n");

  // initialize celcius to 0 before entering loop
  celsius = 0;
  while (celsius <= upper) {
    // celsius = (5.0/9.0) * (fahr - 32.0);
    fahr = (celsius * (9.0/5.0)) + 32.0;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }

  return 0;
}
