#include <iostream>

int main () {
  unsigned short a[3] = {65535, 2, 3};
  a[0] = a[0] + 2;
  return 0;
}