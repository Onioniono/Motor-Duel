#include "electronic_load.h"

void electronic_load_task(void *pvParameters)
{
    // Placeholder for electronic load control logic
    while (1) {
        // Read load current, adjust MOSFET PWM to maintain target load
        vTaskDelay(pdMS_TO_TICKS(100)); // Load control update rate
    }
}