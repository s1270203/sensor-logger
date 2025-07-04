#include <stdio.h>
#include "average.h" 
#include "minmax.h"
#include "filter.h"

/**
 * main.c
 * 
 * このプログラムは、センサーから得られた整数値の配列に対して
 * 平均・最小・最大・外れ値を無視した平均を計算し、標準出力に表示する。
 * 
 * ファイル構成
 * - average.{h,c} : 平均を求める関数
 * - minmax.{h,c} : 最小・最大を求める関数
 * - filter.{h,c} : 外れ値を無視した平均を求める関数
 */
int main(){
  // センサーデータのサンプル（仮想値）
  int data[] = {100, 102, 98, 150, 101};
  int length =  5;
  int threshold = 10;

  // 平均を計算
  float avg = calculate_average(data, length);

  // 平均の結果を表示
  printf("Average = %.2f\n", avg);

  // センサーデータの最小値最大値
  int min, max;

  // 最小値最大値を求める
  calculate_min_max(data, length, &min, &max);

  // 最小値最大値に結果を表示
  printf("Min = %d, Max = %d\n", min, max);

  // 外れ値を無視した平均の計算
  float filtered_avg = calculate_filtered_average(data, length, threshold);

  // 外れ値を無視した平均結果を表示
  printf("Filtered Average = %.2f\n",filtered_avg);
  return 0;
}