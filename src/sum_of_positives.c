#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int positive_sum(const int *values, size_t count)
{
  int sum = 0, i;
  if (count > 0)
    for (i = 0; i < count; ++i)
      if (values[i] >= 0)
        sum += values[i];

  return sum;
}
