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

**On Controller**

> The nRF Connect SDK contains an alternative controller implementation, the Zephyr Bluetooth LE
> Controller. However, we strongly recommend using the SoftDevice Controller, as it is
> specifically designed for the nRF52 and nRF53 Series devices.

**reason 19**

```
[00:00:38.627,004] <inf> Lesson3_Exercise1: Disconnected. Reason 19

```

https://github.com/nrfconnect/sdk-zephyr/blob/main/include/zephyr/bluetooth/hci_types.h#L3020

19, which is written 0x13 in hexadecimal refers to BT_HCI_ERR_REMOTE_USER_TERM_CONN, which means that the remote user terminated the connection
