/*  CH1 Example
*
*   arrays.c
*
*   Count number of each digit, whitespace characters, and all other characters.
*   remember to type ^V then ^D twice to type EOF
*
*   1.6; page 20
*/

#include <stdio.h>

int main(){

  int c, i, nwhite, nother;     // declare types to be counted
  int ndigit[10];               // declare array of number counts from 0 to 9

  nwhite = nother = 0;          // initialize to 0
  for (i=0; i<10; ++i)          // loop to initialize all digits to 0
    ndigit[i] = 0;

  // Determines whether c is a number, special character, or whitespace
  while ((c = getchar()) != EOF){
    if (c >= '0' || c <= '9')
      ++ndigit[c - '0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;
  }

  printf("\ndigits =");
  for (i=0; i<10; ++i)
    printf(" %d", ndigit[i]);
  printf("whitespace = %d, other = %d", nwhite, nother);

  return 0;


  /*
  OUTPUT:

  fhelenafon  oaf    pj pjapf 8 7 0 30 2i 0-- ^Ddigits = 3 0 1 1 0 0 0 1 1 0whitespace = 2, other = 0

  */
}
