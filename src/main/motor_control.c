#include "motor_control.h"

void motor_control_task(void *pvParameters)
{
    // Placeholder for motor control logic
    while (1) {
        // Read encoder values, compute PID, set motor PWM
        motor_control_init(); // Initialize motor control peripherals
        encoder_read(); // Read encoder values
        // set_motor
        vTaskDelay(pdMS_TO_TICKS(PID_SAMPLE_RATE_MS)); // Sample rate delay
    }
}

void motor_control_init(void)
{
    //Motor Driver Pins
    gpio_set_direction(MOTOR_PWM_PIN, GPIO_MODE_OUTPUT);
    gpio_set_direction(MOTOR_IN1_PIN, GPIO_MODE_OUTPUT);
    gpio_set_direction(MOTOR_IN2_PIN, GPIO_MODE_OUTPUT);
    //Magnetic Encoder Pins
    gpio_set_direction(ENCODER_PIN_A, GPIO_MODE_INPUT);
    gpio_set_direction(ENCODER_PIN_B, GPIO_MODE_INPUT);
}

void set_motor(int pwm_value, int dir, int in1, int in2)
{
    // Set motor direction
    gpio_set_level(in1, (dir == 1) ? 1 : 0);
    gpio_set_level(in2, (dir == -1) ? 1 : 0);
    // Set motor speed
    //
}

void encoder_read(void)
{
    // Placeholder for reading encoder values
    // This would typically involve interrupts or polling the encoder pins
}