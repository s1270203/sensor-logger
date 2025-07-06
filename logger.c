#include <stdio.h>
#include "logger.h"

/**
 * print_sensor_log
 * @param data: 整数配列へのポインタ
 * @param length: 要素数
 */
void print_sensor_log(const SensorData *data, int length){
  printf("time,value\n");
  for (int i = 0; i < length; ++i) {
      printf("%s,%d\n", data[i].timestamp, data[i].value);
  }
}

/**
 * format_sensor_log
 * @param data: 整数配列へのポインタ
 * @param buffer: バッファの配列
 * @param buffer_size: バッファの配列サイズ
 */
void format_sensor_log(const SensorData *data, char *buffer, int buffer_size){
  snprintf(buffer, buffer_size, "%s,%d", data->timestamp, data->value);
}
