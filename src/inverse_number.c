#include <stdio.h>
#include <stdlib.h>

int opposite(int num) {

// --------my solution----------
  // if (num > 0) {
  //   num -= num * 2;
  // } else {
  //   num += num * -2;
  // }
  // return num;
// -----------------------------
// ----------another------------
  // return (num *= -1);
// ---------ultimate------------
  return -num;
}

int main(int argc, char *argv[]) {
  // argv[1] is number entered in command line
  long num = strtol(argv[1], 0, 10);
  printf("%i\n", opposite(num));

  return 0;
}
