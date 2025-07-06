#ifndef LOGGER_H
#define LOGGER_H

#include "sensor.h"

void print_sensor_log(const SensorData *data, int length);
void format_sensor_log(const SensorData *data, char *buffer, int buffer_size);

#endif