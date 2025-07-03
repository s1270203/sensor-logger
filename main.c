#include <stdio.h>
#include "average.h" 
#include "minmax.h"

/**
 * main.c
 * 
 * このプログラムは、センサーから得られた整数値の配列に対して
 * 平均値、最小値、最大値を計算し、標準出力に表示する。
 * 
 * ファイル構成
 * - average.h : 平均を求める関数の宣言
 * - average.c : 平均を求める関数の実装
 * - minmax.h : 最小最大を求める関数の宣言
 * - minmax.c : 最小最大を求める関数の実装
 */
int main(){
  // センサーデータのサンプル（仮想値）
  int data[] = {100, 102, 98, 105, 101};
  int length =  5;

  // 平均を計算
  float avg = calculate_average(data, length);

  // 平均の結果を表示
  printf("Average = %.2f\n", avg);

  // センサーデータの最小値最大値
  int min, max;

  //最小値最大値を求める
  calculate_min_max(data, length, &min, &max);

  //最小値最大値に結果を表示
  printf("Min = %d, Max = %d", min, max);
  return 0;
}