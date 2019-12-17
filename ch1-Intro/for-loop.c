/*
* CH1 Example
*
* for-loop.c
*
* Conversion table of Fahrenheit and Celsius
* using a for-loop; can define constants such as lower and upper
*
* page 14 - 15
*/

#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */

// Symbolic Constants
// ; not used for defined constants
// defined constants are outside main()
#define LOWER 0
#define UPPER 300
#define STEP 20


int main() {

    int fahr;

    // initialization; test condition; increment step
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
      printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
  }

  /*
  FLOAT OUTPUT:

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
  */
