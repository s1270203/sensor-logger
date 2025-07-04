#include "minmax.h"

/**
 * calculate_min_max
 * @param data: センサーデータ配列へのポインタ
 * @param length: 配列の要素数
 * @param min: 結果の最小値を格納する変数へのポインタ
 * @param max: 結果の最大値を格納する変数へのポインタ
 */
void calculate_min_max(const int *data, int length, int *min, int *max){
  // lengthが０の時、min,maxは０で返す
  if(length == 0) {
    *min = 0;
    *max = 0;
    return;
  }

  *min = *max = data[0];
  for(int i = 1; i < length; ++i){
    if(data[i] > *max) *max = data[i];
    if(data[i] < *min) *min = data[i];
  }
  return;
}
