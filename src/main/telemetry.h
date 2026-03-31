// Logging + UART command interface
#ifndef FREERTOS_H
#define FREERTOS_H
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#endif /* FREERTOS_H */

#ifndef TELEMETRY_H
#define TELEMETRY_H

#include "config.h"

void telemetry_task(void *pvParameters);

#endif /* TELEMETRY_H */