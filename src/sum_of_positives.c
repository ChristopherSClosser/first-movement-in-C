#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int positive_sum(const int *values, size_t count)
{
  int sum = 0, i = 0;
  if (count > 0)
    for (i; i < count; ++i)
      if (values[i] > 0)
        sum = sum + values[i];

  return sum;
}

int main(int argc, char *argv[]) {
  int values[] = {1,2,3,-3,4};
  int count = 5;
  printf("%i\n", positive_sum(values, count));

  return 0;
}
