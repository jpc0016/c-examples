/*
* CH1 Example
*
* file-copying.c
*
* Copy input to output, 1st version
*
* page 16
*/

#include <stdio.h>

int main() {

  int c;

  c = getchar();

  while (c != EOF){ // can also be:   while((c = getchar()) != EOF) putchar(c);
    putchar(c);
    c = getchar();
  }

  return 0;

  /*
  OUTPUT:

  f
  f
  ddddd
  ddddd

  entered text is regurgitated on the next line
  */
}
