#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int mult_3x5(int number) {
		long unsigned int i,sum=0;
    for(i=0;i<number;i++)
    {
        if((i%5==0)||(i%3==0))
        {
            sum=sum+i;
        }
    }
    return sum;
}

int main(int argc, char *argv[]) {
  long num = strtol(argv[1], 0, 10);
  printf("%i\n", mult_3x5(num));

  return 0;
}
