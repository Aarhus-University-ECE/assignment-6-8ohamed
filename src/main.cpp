
// File for sandboxing and trying out code
int main(void) {
  int list[4] = {40, 50, 9, 90};
  int *numbers = list;
  int size = 4;
  int result = max(numbers, size);
  printf("max value is %d", result);
    
    
    
  return 0;
}
