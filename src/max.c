#include <stdio.h>
#include <assert.h>

int max(int *numbers, int size) {

  int max_value = 0;

  for (int j = 0; j < size; j++) {
    if (*numbers < *(numbers + j)) {
      max_value = *(numbers + j);
    }
  }
  return max_value;
}

