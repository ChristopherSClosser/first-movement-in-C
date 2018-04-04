#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// the one I like

char *repeat_str(size_t count, const char *src) {
  char *res = malloc((count * strlen(src)) + 1);
  while (count--)
    strcat(result, src);
  return res;
}

/* ------------- this was mine --------------
char *repeat_str(size_t count, char *src)
{
  // create buffer size for new output the plus 1 is for terminator
  char *c;
  c = malloc(count * strlen(src) + 1);
  c[0] = '\0';
  char *res = c;
  for (int i = 0; i < count; i++)
  {
    strcat(c, src);
  }
  return res;
}
*/

int main(int argc, char *argv[]) {
  int x = strtol(argv[1], 0, 10);
  printf("%s\n", repeat_str(x, argv[2]));
  return 0;
}
