#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int ascend_sort( const void* a, const void* b)
{
  int int_a = * ( (int*) a );
  int int_b = * ( (int*) b );

  return (int_a > int_b) - (int_a < int_b);
}

int desc_sort( const void* a, const void* b)
{
  int int_a = * ( (int*) a );
  int int_b = * ( (int*) b );

  return (int_a < int_b) - (int_a > int_b);
}

int * intdup(int const * src, size_t len)
{
   int * p = malloc(len * sizeof(int));
   memcpy(p, src, len * sizeof(int));
   return p;
}

char *sortedHow(int input[], int size) {
  int i = 0; int j = 0; int ii = 0; int jj = 0;
  int a_match = 0; int d_match = 0;
  int *asc = intdup(input, size);
  int *desc = intdup(input, size);
  int test[] = {9, 8, 7, 6, 5, 4, 2, 0};
  qsort( asc, size, sizeof(int), ascend_sort);
  qsort( desc, size, sizeof(int), desc_sort);
  for (jj; jj<size; jj++){
    printf("%i %i\n", test[jj], asc[jj]);
    if (input[jj] != asc[jj]) {
      a_match = 1;
    }
    if (input[jj] != desc[jj]) {
      d_match = 1;
    }
  }
  if (a_match == 0){
    return "acsending";
  } else if (d_match == 0){
    return "descending";
  } else (a_match == 1 && d_match == 1) {
    return "not sorted";
  }
  // for (ii; ii<size; ii++){
  //   printf("%i %i\n", test[ii], desc[ii]);
  //   if (test[ii] != desc[ii])
  //     d_match = 1;
  //     printf("\nno match");
  // }
  // for (j; j<size; j++)
  //   printf("%i ", asc[j]);
  // printf("\n");
  // for (i; i<size; i++)
  //   printf("%i ", desc[i]);
  // printf("\n");

  // return res;
  // for (i; i<size; i++)
  //   printf("%i ", input[i]);
}

int main(int argc, char const *argv[]) {
  printf("%s\n", sorted((int[]){0,2,4,5,6,7,8,9}, 8));
  // return 0;{0,2,4,5,6,7,8,9}
  // {9, 8, 7, 6, 5, 4, 2, 0}
}
