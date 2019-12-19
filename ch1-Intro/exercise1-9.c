/*
* CH1 Exercise 1-9
*
* exercise1-9.c
*
* Write a program to copy its input to its output, replacing each string of
* one or more blanks by a single blank.
*
* page 19
*/

#include <stdio.h>

int main() {

  int c;    // getchar() integer
  long blank_count;

  blank_count = 0;  // initialize blank_count to zero
  c = getchar();    // initialize c to first character

  while (c != EOF) {
    /* Hold a blank_count.  If '\t', '\v', or ' ' encountered, ++blank_count.
    if next character is non-blank, blank_count = 0 (reset).  if next character is
    instead blank, delete the character.
    */
    if((c == '\t') || (c == '\v') || (c == ' ')) {
      ++blank_count;
      // increment blank_count if space encountered then check if greater than 1 (case: 2 blanks in a row)
      // if greater than 1, then two blanks occur in a row.  Change the blank character c to ''
      if (blank_count > 1)
        c = '\0';
    }
    else {
      blank_count = 0;    // reset blank_count to 0 if c is not blank
    }
    printf("%c", c);
    c = getchar();        // get next character

  }

  /*
  OUTPUT:

  hello world
  hello world
  hello  world
  hello world
  hellow       orld
  hellow orld
  hhhhhhhhhhhhhhhefefa 					hfoafne  ef ehfhse f e
  hhhhhhhhhhhhhhhefefa hfoafne ef ehfhse f e
  */
  return 0;
}
