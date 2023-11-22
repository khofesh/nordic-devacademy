#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#ifdef CONFIG_MYFUNCTION
#include "myfunction.h"
#endif

int main()
{

    while (1)
    {
#ifdef CONFIG_MYFUNCTION
        int a = 3, b = 4;
        printk("the sum of %d and %d is %d\n\r", a, b, sum(a, b));
#else
        printk("MYFUNCTION not enabled\r\n");
        return 0;
#endif
        k_msleep(1000);
    }

    return 1;
}