# nRF Connect SDK Fundamentals

https://github.com/NordicDeveloperAcademy/ncs-fund

## set devicetree overlays

https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/build/dts/howtos.html#set-devicetree-overlays

## multi-image build

https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/nrf/config_and_build/multi_image.html

## Kconfig search

https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/kconfig/index.html

## Configuration System (Kconfig)

https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/build/kconfig/index.html

## devicetree HOWTO

https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/build/dts/howtos.html#set-devicetree-overlays

## UART

https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/hardware/peripherals/uart.html

## zephyr RTOS

- https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/kernel/services/threads/workqueue.html
- https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/kernel/services/scheduling/index.html
- [scheduling algorithm](https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/kernel/services/scheduling/index.html#scheduling-algorithm)

> Zephyr RTOS is by default a tickless RTOS. A tickless RTOS is completely event-driven,
> which means that instead of having periodic timer interrupts to wake up the scheduler,
> it is woken based on events known as rescheduling points.

## thread synchronization

- https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/kernel/services/synchronization/semaphores.html
- https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/kernel/services/synchronization/mutexes.html
- https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/kernel/services/synchronization/mutexes.html#priority-inheritance

> The main differences are that semaphores have a maximum value that is set at initialization,
> while mutexes have ownership property, i.e only the thread incrementing its value can
> decrement it, until zero when it is relinquished.
