// Duel state + Display

#ifndef DUEL_MONITOR_H
#define DUEL_MONITOR_H

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "config.h"

void duel_monitor_task(void *pvParameters);

#endif /* DUEL_MONITOR_H */