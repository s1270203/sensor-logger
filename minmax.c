#include "minmax.h"

/**
 * calculate_min_max
 * @param data: 整数配列へのポインタ
 * @param length: 要素数
 * @param min: 整数配列の最小値
 * @param max: 整数配列の最大値
 */
void calculate_min_max(const int *data, int length, int *min, int *max){
  // lengthが０の時、min,maxは０で返す
  if(length == 0) {
    *min = 0;
    *max = 0;
    return;
  }

  *min = *max = data[0];

  for(int i = 0; i < length; ++i){
    if(data[i] > *max) *max = data[i];
    if(data[i] < *min) *min = data[i];
  }
  return;
}
