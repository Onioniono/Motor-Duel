// Adversarial load + ADC
#ifndef FREERTOS_H
#define FREERTOS_H
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#endif /* FREERTOS_H */

#ifndef ELECTRONIC_LOAD_H
#define ELECTRONIC_LOAD_H

#include "config.h"

void electronic_load_task(void *pvParameters);

#endif /* ELECTRONIC_LOAD_H */