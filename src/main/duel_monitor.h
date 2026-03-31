// Duel state + Display
#ifndef FREERTOS_H
#define FREERTOS_H
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#endif /* FREERTOS_H */

#ifndef DUEL_MONITOR_H
#define DUEL_MONITOR_H

#include "config.h"

void duel_monitor_task(void *pvParameters);

#endif /* DUEL_MONITOR_H */