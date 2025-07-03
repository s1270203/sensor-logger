#include <stdio.h>
#include "average.h" 

int main(){
  int data[] = {100, 102, 98, 105, 101};
  int length =  5;
  float avg = calculate_average(data, length);
  printf("Average = %.2f\n", avg);
  return 0;
}