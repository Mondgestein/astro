
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../kitten.h"

#define MSG1 "A message that must not be replaced by the Spanish nls\n"
#define MSG2 "A message that must be replaced by the Spanish nls\n"
#define MSG3 "Look in the second class for the second message"
#define RSP3 "Quiero leer el mensaje"


int main(void) {

  nl_catd cat;
  char *m;

  putenv("NLSPATH=test\\nls");
  putenv("LANG=es");

  cat = catopen("test", 0);

  m = catgets(cat, 2, 1, MSG1);
  if (strcmp(MSG1, m) != 0) {
    puts("FAIL: MSG1 was incorrectly replaced");
    return 1;
  }

  m = catgets(cat, 0, 2, MSG2);
  if (strcmp(MSG2, m) == 0) {
    puts("FAIL: MSG2 was not replaced");
    return 1;
  }

  m = catgets(cat, 1, 1, MSG3);
  if (strcmp(MSG3, m) == 0) {
    puts("FAIL: MSG3 was not replaced");
    return 1;
  }
  if (strcmp(RSP3, m) != 0) {
    puts("FAIL: MSG3 was not replaced with correct Spanish");
    return 1;
  }

  catclose(cat);
  puts("PASS: Tests completed");
  return 0;
}
