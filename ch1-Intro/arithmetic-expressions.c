/*
* CH1 Example
*
* arithmetic-expressions.c
*
* Conversion table of Fahrenheit and Celsius
*/


#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */

int main() {

  int fahr, celsius;
  int lower, upper, step;

  // assignment statements
  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }

  /*
  OUTPUT:

  0	-17
  20	-6
  40	4
  60	15
  80	26
  100	37
  120	48
  140	60
  160	71
  180	82
  200	93
  220	104
  240	115
  260	126
  280	137
  300	148
  */
}
