#include "filter.h"
#include "average.h"
#include <math.h>

/**
 * calculate_filtered_average
 * @param data: 整数配列へのポインタ
 * @param length: 要素数
 * @param threshold: 閾値
 * @return 外れ値を無視した平均 (length == 0 のとき 0.0f)
 */
float calculate_filtered_average(const int *data, int length, int threshold){
  float avg = calculate_average(data, length);
  int filtered_data[length];
  int cnt = 0;
  for(int i = 0; i < length; ++i){
    if(fabs(data[i] - avg) < threshold){
      filtered_data[cnt++] = data[i];
    }
  }
  if(cnt == 0) return 0.0f;
  return calculate_average(filtered_data, cnt);
}