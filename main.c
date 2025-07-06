#include <stdio.h>
#include "average.h" 
#include "minmax.h"
#include "filter.h"
#include "sensor.h"
#include "logger.h"

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
 * - sensor.{h} : 構造体定義
 * - logger.{h,c} : CSV形式での出力関数
 */

SensorData data[] = {
  {100, "10:00:00"},
  {102, "10:00:01"},
  {98,  "10:00:02"},
  {150, "10:00:03"},
  {101, "10:00:04"}
};

#define DATA_LENGTH 5
#define THRESHOLD 10

int main(){
  // センサーデータのサンプル（仮想値）
  int raw_data[DATA_LENGTH];
  int length =  DATA_LENGTH;
  int threshold = THRESHOLD;
  for(int i = 0; i < length; ++i){
    raw_data[i] = data[i].value;
  }

  // 平均を計算
  float avg = calculate_average(raw_data, length);

  // 平均の結果を表示
  printf("Average = %.2f\n", avg);

  // センサーデータの最小値最大値
  int min, max;

  // 最小値最大値を求める
  calculate_min_max(raw_data, length, &min, &max);

  // 最小値最大値に結果を表示
  printf("Min = %d, Max = %d\n", min, max);

  // 外れ値を無視した平均の計算
  float filtered_avg = calculate_filtered_average(raw_data, length, threshold);

  // 外れ値を無視した平均結果を表示
  printf("Filtered Average = %.2f\n",filtered_avg);

  // 構造体データをCSV形式で表示
  print_sensor_log(data, length);

  SensorData d = {100, "10:00:00"};
  char line[64];
  // snprintf()による安全な文字列整形
  format_sensor_log(&d, line, sizeof(line));
  // 整形された文字列の表示
  printf("Log line: %s\n", line);

  return 0;
}