# Bluetooth Low Energy Fundamentals Course Exercises

- https://www.bluetooth.com/learn-about-bluetooth/key-attributes/range/
- https://www.nordicsemi.com/Products/Bluetooth-Low-Energy/Bluetooth-5
- [zephyr bluetooth host](https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/connectivity/bluetooth/bluetooth-arch.html#host)
- [SoftDevice controller](https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/nrfxlib/softdevice_controller/README.html)
- [Bluetooth LE controller](https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/nrf/protocols/bt/ble/index.html)
- https://www.bluetooth.com/specifications/specs/
- [Bluetooth: peripheral LBS](https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/nrf/samples/bluetooth/peripheral_lbs/README.html)
- [LED button service-LBS](https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/nrf/libraries/bluetooth_services/services/lbs.html#lbs-readme)
- https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/connectivity/bluetooth/api/gap.html#c.BT_DATA_FLAGS
- [assigned numbers document](https://btprodspecificationrefs.blob.core.windows.net/assigned-numbers/Assigned%20Number%20Types/Assigned_Numbers.pdf)
- https://www.bluetooth.com/specifications/assigned-numbers/
- [UUID helper macros and definitions](https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/connectivity/bluetooth/api/uuid.html#universal-unique-identifiers-uuids)
- [PHY: radio modes](https://academy.nordicsemi.com/topic/phy-modes/)
- https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/nrf/libraries/others/dk_buttons_and_leds.html
- https://www.uuidgenerator.net/
- [nordic UART service (NUS)](https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/nrf/libraries/bluetooth_services/services/nus.html#nus-service-readme)
- [FIFO data structures](https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/kernel/services/data_passing/fifos.html)
- [legacy pairing vs LE secure connections](https://academy.nordicsemi.com/topic/legacy-pairing-vs-le-secure-connection/)
- [bluetooth peripheral LBS sample](https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/nrf/samples/bluetooth/peripheral_lbs/README.html)

## On Controller

> The nRF Connect SDK contains an alternative controller implementation, the Zephyr Bluetooth LE
> Controller. However, we strongly recommend using the SoftDevice Controller, as it is
> specifically designed for the nRF52 and nRF53 Series devices.

## reason 19

```
[00:00:38.627,004] <inf> Lesson3_Exercise1: Disconnected. Reason 19
```

https://github.com/nrfconnect/sdk-zephyr/blob/main/include/zephyr/bluetooth/hci_types.h#L3020

19, which is written 0x13 in hexadecimal refers to BT_HCI_ERR_REMOTE_USER_TERM_CONN, which means that the remote user terminated the connection

## lesson 4 exercise 3

> The default Maximum Transmission Unit (MTU) set in the nRF Connect SDK Bluetooth stack is 23
> bytes. It means you can’t send more data than can fit in the ATT MTU in one notification push.
> If you want to send more data in a single go, you need to increase this value; longer ATT
> payloads can be achieved, increasing the ATT throughput.

## sniffer

- https://infocenter.nordicsemi.com/index.jsp?topic=%2Fug_sniffer_ble%2FUG%2Fsniffer_ble%2Fintro.html
- https://www.nordicsemi.com/Products/Development-tools/nRF-Sniffer-for-Bluetooth-LE/Download?lang=en#infotabs

> somehow, it works under root user

1. programming the nRF52840 dongle
   https://infocenter.nordicsemi.com/index.jsp?topic=%2Fug_nc_programmer%2FUG%2Fnrf_connect_programmer%2Fncp_programming_dongle.html
2. installing the sniffer
   https://infocenter.nordicsemi.com/index.jsp?topic=%2Fug_sniffer_ble%2FUG%2Fsniffer_ble%2Finstalling_sniffer_plugin.html

## References

- https://github.com/NordicDeveloperAcademy/bt-fund
