/*  CH1 Exercise 1-12
*
*   exercise1-12.c
*
*   Write a program that prints its input one word per line;
*   Start with word-count.c to acquire word count, nw
*
*   page 20
*/

#include <stdio.h>

#define IN 1
#define OUT 0


int main(){
  /* declare integers for count values:
    c = character
    nl = new line
    nw = new word
    nc = new character
    state = boolean representation for if a word is still being counted   */
  int c, nl, nw, nc, state;

  // initialize everything to 0
  state = OUT;
  nl = nw = nc = 0;

  /* Start with familiar getchar while loop
  put '\n' char whenever special character evaluated. If not special character,
  print character */
  while ((c = getchar()) != EOF){
    ++nc;
    if (c == '\n') {
      ++nl;
      putchar(c);
    }
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
      putchar('\n');
    }
    else if (state == OUT) {
      state = IN;
      ++nw;   // start of a new word
      putchar(c);
    }
    else {
      putchar(c);
    }
  }

  return 0;
}

/*
OUTPUT:

hello my name is earl
hello
my
name
is
earl

*/
