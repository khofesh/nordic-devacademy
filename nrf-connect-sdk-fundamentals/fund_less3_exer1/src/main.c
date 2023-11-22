#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

void main()
{
    while (1)
    {
        printk("hola mundo!\n\r");
        k_msleep(1000);
    }
}