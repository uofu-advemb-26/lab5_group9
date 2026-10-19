#include <stdio.h>
#include <pico/stdlib.h>
#include "lab5.h"

int main(void)
{
    int toggle = 0;
    stdio_init_all();
    gpio_init(OUT_PIN);
    gpio_set_dir(OUT_PIN, GPIO_OUT);
    gpio_put(OUT_PIN, toggle);

    while (true) {
        toggle = !toggle;
        gpio_put(OUT_PIN, toggle);

        // Intensive calculation
        for (volatile int i = 0; i < 10000; i++);

        sleep_ms(DELAY_MS);
    }
}
