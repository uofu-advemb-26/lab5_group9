#include <stdio.h>
#include <pico/stdlib.h>
#include <FreeRTOS.h>
#include <task.h>
#include "lab5.h"

void busy_task(__unused void *params)
{
    while (1);
}

void main_task(__unused void *params)
{
    int toggle = 0;
    while (1) {
        toggle = !toggle;
        gpio_put(OUT_PIN, toggle);
        
        // Intensive calculation
        // for (volatile int i = 0; i < 10000; i++);

        // vTaskDelay(pdMS_TO_TICKS(DELAY_MS));
        vTaskDelay(1); // Task delay of 1 tick (just yield to the scheduler)
    }
}

int main(void)
{
    stdio_init_all();
    gpio_init(OUT_PIN);
    gpio_set_dir(OUT_PIN, GPIO_OUT);
    const char *rtos_name = "FreeRTOS";
    TaskHandle_t task;
    xTaskCreate(main_task, "MainThread",
                configMINIMAL_STACK_SIZE, NULL, tskIDLE_PRIORITY + 1UL, &task);
    xTaskCreate(busy_task, "BusyTask",
                configMINIMAL_STACK_SIZE, NULL, tskIDLE_PRIORITY + 1UL, NULL);
    vTaskStartScheduler();
    return 0;
}
