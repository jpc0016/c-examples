/*
* CH1 Exercise 1-5
*
* exercise1-5.c
*
* Modify the temperature conversion program to print the table
* in reverse order.
*
* page 15
*/

#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */

int main() {

    int fahr;

    // initialization; test condition; increment step
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
      printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
  }

  /*
  FLOAT OUTPUT:

  300	 148.9
  280	 137.8
  260	 126.7
  240	 115.6
  220	 104.4
  200	  93.3
  180	  82.2
  160	  71.1
  140	  60.0
  120	  48.9
  100	  37.8
   80	  26.7
   60	  15.6
   40	   4.4
   20	  -6.7
    0	 -17.8
  */
