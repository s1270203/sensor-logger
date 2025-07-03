#include "average.h"

/**
 * calculate_average
 * @param data: 整数配列へのポインタ
 * @param length: 要素数
 * @return 平均 (length == 0 のとき 0.0f)
 */
float calculate_average(const int *data, int length){
  if (length == 0) return 0.0f;
  
  int sum = 0;
  for(int i = 0; i < length; ++i){
    sum += data[i];
  }
  return (float)sum/length;
}