/*  CH1 Exercise 1-13
*
*   exercise1-13.c
*
*   Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with
*   the bars horizontal; a vertical orientation is more challenging; start with word-count.c
*   to acquire word counts.  Need length of words
*
*   page 21
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
    state = boolean representation for if a word is still being counted
    char_count = character count for each word   */
  int c, nl, nw, nc, state, char_count;

  // initialize array of size nw
  int word_count[0];

  // initialize everything to 0
  state = OUT;
  nl = nw = nc = char_count = 0;

  // Start with familiar getchar while loop
  while ((c = getchar()) != EOF){
    ++nc;
    if (c == '\n') {
      ++nl;
      char_count = 0;
    }
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
      char_count = 0;
    }
    else if (state == OUT) {
      state = IN;
      word_count[nw] = char_count;
      ++nw;   // start of a new word
    }
    else
      char_count += 1;
  }

  /*
  From exercise1-7:
  The only way to see EOF (-1) is to hit CTRL-V then CTRL-D to make "^D" in the terminal
  Then hit CTRL-D again for program to exit with EOF value displayed
  */

  printf("\nnl: %d nw: %d nc: %d\n", nl, nw, nc);



  return 0;
}
