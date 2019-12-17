#include <stdio.h>

void victory(void)

{
  printf("well done!");
  //return 0;
}

void you_fail(void)

{
  printf("fail!");
  //return 0;
}


int main(void)

{
  size_t sVar1;
  int local_58;
  char input_54 [4];
  char local_50;
  char local_4f;
  char local_4e;
  char local_4d;
  char local_43;
  char local_42;
  undefined4 local_c;

  puts("crack-me for Root-me by s4r");
  puts("Enter password please");
  fgets(input_54,0x40,stdin);
  sVar1 = strlen(input_54);
  *(undefined *)((int)&local_58 + sVar1 + 3) = 0;
  sVar1 = strlen(input_54);
  if (sVar1 == 0x13) {
    local_58 = 8;
    while (local_58 < 0x11) {
      if (input_54[local_58] != 'i') {
        you_fail();
        return 0;
      }
      local_58 = local_58 + 1;
    }
    if (local_42 == 's') {
      if (local_43 == 'p') {
        if (local_4d == 'm') {
          if ((input_54[2] == 'n') && (local_4e == 'n')) {
            if (input_54[0] == 'c') {
              if (input_54[1] == 'a') {
                if (input_54[3] == 't') {
                  if (local_50 == 'r') {
                    if (local_4f == 'u') {
                      victory();
                      return local_c;
                    }
                    you_fail();
                  }
                  else {
                    you_fail();
                  }
                }
                else {
                  you_fail();
                }
              }
              else {
                you_fail();
              }
            }
            else {
              you_fail();
            }
          }
          else {
            you_fail();
          }
        }
        else {
          you_fail();
        }
      }
      else {
        you_fail();
      }
    }
    else {
                    /* fail function */
      you_fail();
    }
  }
  else {
    you_fail();
  }
  return 0;
}
