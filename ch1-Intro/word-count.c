/*  CH1 Example
*
*   word-count.c
*
*   Count number of lines, words, and characters.  A word is a sequence of
*   characters that does not contain a blank, tab, or newline.
*
*   page 19
*/

#include <stdio.h>

#define IN 1  // inside a word (true)
#define OUT 0 // outside a word (false)

int main() {

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

  // Start with familiar getchar while loop
  while ((c = getchar()) != EOF){
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\t' || c == '\n')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;   // start of a new word
    }
  }

  /*
  From exercise1-7:
  The only way to see EOF (-1) is to hit CTRL-V then CTRL-D to make "^D" in the terminal
  Then hit CTRL-D again for program to exit with EOF value displayed
  */

  printf("\nnl: %d nw: %d nc: %d\n", nl, nw, nc);

  return 0;
}
