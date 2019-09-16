#include <stdio.h>

int main(void){

  int array[100];
  int i, j;

  for (i = 0; i < 100; i++){
    array[i] = i + 1;
  }
  for (j = 0; j < 101; j++){
    if (array[j] % 3 == 0 && array[j] % 5 == 0){
      printf("FizzBuzz %d\n", array[j]);
    } else if (array[j] % 3 == 0) {
      printf("Fizz %d\n", array[j]);
    } else if (array[j] % 5 == 0) {
      printf("Buzz %d\n", array[j]);
    }
  }
}
