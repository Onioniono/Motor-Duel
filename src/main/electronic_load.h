// Adversarial load + ADC

#ifndef ELECTRONIC_LOAD_H
#define ELECTRONIC_LOAD_H

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "config.h"

void electronic_load_task(void *pvParameters);

#endif /* ELECTRONIC_LOAD_H */