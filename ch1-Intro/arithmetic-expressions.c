/*
* CH1 Example
*
* arithmetic-expressions.c
*
* Conversion table of Fahrenheit and Celsius
* Covers both int and float implementations
*/

#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */

int main() {

  // int fahr, celsius;
  // int lower, upper, step;
  float fahr, celsius;
  float lower, upper, step;

  // assignment statements
  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    // celsius = 5 * (fahr - 32) / 9;
    celsius = (5.0/9.0) * (fahr - 32.0);

    /* %3d prints integer in a field 3 digits wide
    6 digits wide for %6d */
    // printf("%3d\t%6d\n", fahr, celsius);

    /* %3.0 means print float of 3 digit size and 0 decimal places
     same for %6.1: 6 digits and 1 decimal place */
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  /*
  INT OUTPUT:

   0	   -17
  20	    -6
  40	     4
  60	    15
  80	    26
  100	    37
  120	    48
  140	    60
  160	    71
  180	    82
  200	    93
  220	   104
  240	   115
  260	   126
  280	   137
  300	   148

  FLOAT OUTPUT:

   0	 -17.8
  20	  -6.7
  40	   4.4
  60	  15.6
  80	  26.7
  100	  37.8
  120	  48.9
  140	  60.0
  160	  71.1
  180	  82.2
  200	  93.3
  220	 104.4
  240	 115.6
  260	 126.7
  280	 137.8
  300	 148.9
  */
}
