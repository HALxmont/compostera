#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "lcd.h"


void app_main(void)
{
    int i = 0;

    while (1) {
        printf("[%d] Hellodsd world!\n", i);
        i++;
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}
