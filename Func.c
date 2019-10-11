double avgFunction(int *arr, int array_size){
  int n;
  double sum = 0;
  for (n = 0; n < array_size; n++){
    sum += (double) *(arr + n);
  }
  return sum / array_size;
}

void copyFunction(int *arr1, int *arr2, int array_size){
  int n;
  for (n = 0; n < array_size; n++){
    *(arr2 + n) = *(arr1 + n);
  }
}

int stringLength(char *string){
  int count = 0;
  int i = 0;
  while (*(string + i) != '\0'){
    count++;
    i++;
  }
  return count;
}
