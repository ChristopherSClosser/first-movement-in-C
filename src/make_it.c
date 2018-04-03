#include <stdbool.h>
#include <stdio.h>

bool zero_fuel(double distance_to_pump, double mpg, double fuel_left)
{
  if ((fuel_left * mpg) >= distance_to_pump) {
    return true;
  }
  return false;
}

int main(int argc, char const *argv[]) {
  printf("%d\n", zero_fuel(50, 25, 2));
}
