#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Headers.h"

int main(){
  int arr1[10];
  int arr2[10];
  srand(10);
  int n;
  printf("This is array 1:\n[ ");
  for (n = 0; n < 10; n++){
    arr1[n] = rand() % 30;
    printf("%d ", arr1[n]);
  }
  printf("]\n");
  printf("This is array 2:\n[ ");
  int p;
  for (p = 0; p < 10; p++){
    arr2[p] = rand() % 30;
    printf("%d ", arr2[p]);
  }
  printf("]\n");
  printf("This is the average value for array 1: %f\n", avgFunction(arr1, 10));
  printf("This is the average value for array 2: %f\n", avgFunction(arr2, 10));
  copyFunction(arr1, arr2, 10);
  int m;
  printf("This is the new array 2:\n[ ");
  for (m = 0; m < 10; m++){
    arr2[m] = rand() % 30;
    printf("%d ", arr1[m]);
  }
  printf("]\n");
  char *s = "abc1235342";
  printf("The length of the string %s is: %d\n", s, stringLength(s));
  return 0;
}
