#include "telemetry.h"

void telemetry_task(void *pvParameters)
{
    // Placeholder for telemetry logic
    while (1) {
        // Read motor and load data, send over UART
        vTaskDelay(pdMS_TO_TICKS(10)); // Telemetry update rate
    }
}