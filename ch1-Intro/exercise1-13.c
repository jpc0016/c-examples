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
    char_per_word = character count for each word   */
  int c, nl, nw, nc, state, char_per_word;

  // initialize array of size nw to hold character count of each word
  int char_array[10];

  // initialize everything to 0
  state = OUT;
  nl = nw = nc = char_per_word = 0;

  // Start with familiar getchar while loop
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') {
      ++nl;
      //char_per_word = 0;
    }
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
      //char_per_word = 0;
    }
    else if (state == OUT) {
      state = IN;
      char_array[nw] = char_per_word + 1;
      ++nw;   // start of a new word
      char_per_word = 0;
    }
    else
      ++char_per_word;
  }

  /*
  From exercise1-7:
  The only way to see EOF (-1) is to hit CTRL-V then CTRL-D to make "^D" in the terminal
  Then hit CTRL-D again for program to exit with EOF value displayed
  */

  printf("\nnl: %d nw: %d nc: %d\n", nl, nw, nc);
  printf("\n");

  /* Declare empty dictionary */


  /* print number of characters for each word in nw
      for troubleshooting purposes */
  printf("char_array:\n");
  for (int i=1; i < nw; i++) {
    printf("char_array[%d] %d\n", i, char_array[i]);
  }
  printf("\n");

  /* Search through char_array and get number of unique character counts
    Iterating over all possible character lengths */
  for (int j=1; j<10; j++){
    printf("[%d] ", j);

    /* Check if j exists in char_array
      Iterating over each element in char_array */
    for (int k=1; k<nw; k++) {
      if (j == char_array[k]) {
        //for (int x=0; x<j; x++)
        printf("*");
      }
    }
    printf("\n");
  }


  return 0;
}
