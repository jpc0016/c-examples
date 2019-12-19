/*
* CH1 Example
*
* line-counting.c
*
* Counting lines in input
*
* page 18
*/

#include <stdio.h>

/* Count number of lines in input*/
int main() {

  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;               // pre-increment ensures 1 is shown at print statement instead of 0
    printf("%d\n", nl);   // prints value of new line for each character
  }

  /*
  OUTPUT:

  ffffffffffff
  0
  0
  0
  0
  0
  0
  0
  0
  0
  0
  0
  0
  1
  */
  return 0;
}
