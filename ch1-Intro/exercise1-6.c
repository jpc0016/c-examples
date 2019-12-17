/*
* CH1 Exercise 1-6
*
* exercise1-6.c
*
* Verify that the expression getchar() != EOF is 0 or 1
*
* page 17
*/

#include <stdio.h>

int main() {

  int c;

  //c = getchar();

  while (c = getchar() != EOF){ // can also be:   while((c = getchar()) != EOF) putchar(c);
    //putchar(c);
    printf("%c", c);
  }

  return 0;
}
