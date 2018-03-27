#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int hex_to_dec(const char *src)
{
  int result = (char)src[0] * 256 + (char)src[1];
  return result;
}

int main() {
  printf("%d\n", hex_to_dec("a"));
}
