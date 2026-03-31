// Encoder + PID
#ifndef FREERTOS_H
#define FREERTOS_H
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#endif /* FREERTOS_H */

#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

#include "config.h"

void motor_control_task(void *pvParameters);

#endif /* MOTOR_CONTROL_H */