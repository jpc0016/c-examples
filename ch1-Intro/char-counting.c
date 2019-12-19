/*
* CH1 Example
*
* char-counting.c
*
* Counting characters similar to the copy program
*
* page 17
*/

#include <stdio.h>

/* Count characters in input */
int main() {

  long nc;

  nc = 0;
  while (getchar() != EOF) {
    /* From https://dev.to/somedood/the-difference-between-x-and-x-44dl
The prefix increment returns the value of a variable after it has been incremented.
On the other hand, the more commonly used postfix increment returns the value of a variable before it has been incremented.

So ++nc means increment nc BEFORE showing its value.  nc++ would show nc's value THEN increment by 1
    */
    ++nc;
    printf("%ld\n", nc);
  }

  /*
  OUTPUT:
  AAAA
  1
  2
  3
  4
  5
  */

  return 0;
}
