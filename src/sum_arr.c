#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int Res;
static int Bool = 0;
static int Count = 0;
void removeItem(int lst[], int key, int size);
int findMin(int input[], int size);
int findMax(int input[], int size);
int clearRes();

int minSum(int input[], int size) {
  int i; int ii = 0; int key;
//   if (sizeof(input) < 1) {
//     return "0";
//   }
//   printf("%i\n", sizeof(input));

  if (Bool == 1) {
    Bool = 0;
    Res = Res - Res;
  }
  // Bool = 1;

  int max = findMax(input, size);
  int min = findMin(input, size);
  printf("%i  %i  %i\n", min, max, Count);
  if (min == 0 && Count > 3) {
    clearRes();
    return 0;
  }

  Res += min * max;
  removeItem(input, min, size);
  size--;
  removeItem(input, max, size);
  size--;

  if (size > 0) {
    Count++;

    minSum(input, size);
  } else {
    clearRes();
  }
  return Res;
}

int findMin(int input[], int size) {
  int min;
  for (int i = 0; i < size; i++) {
    if (input[i] < min) {
      min = input[i];
    }
  }
  return min;
}

int findMax(int input[], int size) {
  int max = 0;
  for (int i = 0; i < size; i++) {
    if (input[i] > max) {
      max = input[i];
    }
  }
  return max;
}

void removeItem(int lst[], int key, int size) {
  int i; int j;
  for(i = 0; i < size; i++) {
    if (lst[i] == key) {
      for(j = i; j < size; j++) {
        lst[j] = lst[j+1];
      }
      size--;
      i--;
    }
  }
}

int clearRes() {
  Bool = 1;
  Count++;
}


int main(int argc, char const *argv[]) {
  printf("%i\n", minSum((int[]){9,2,8,7,5,4,0,6}, 8));
  return 0;
}
