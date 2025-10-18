#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

int main(void)
{
    printk("Hello from Zephyr on ESP32-S3 N16R8!\n");

    while (1) {
        printk("Tick\n");
        k_msleep(1000);
    }

    return 0;
}
