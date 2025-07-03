#include "average.h"

float calculate_average(const int *data, int length){
  if (length == 0) return 0.0f;
  
  int sum = 0;
  for(int i = 0; i < length; ++i){
    sum += data[i];
  }
  return (float)sum/length;
}