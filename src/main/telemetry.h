// Logging + UART command interface

#ifndef TELEMETRY_H
#define TELEMETRY_H

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "config.h"

void telemetry_task(void *pvParameters);

#endif /* TELEMETRY_H */