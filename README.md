# Nordic Semiconductor Academy

## takes forever to download toolchain

https://devzone.nordicsemi.com/f/nordic-q-a/104876/nrf-connect-sdk-can-not-download-from-toolchain-manager-too-slow

manage to download it in 16 minutes using

```shell
./nrfutil toolchain-manager search


./nrfutil toolchain-manager install --ncs-version v2.5.0
```

https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/nrf/installation/install_ncs.html

## libjlinkarm.so not found

download the jlink software here https://www.segger.com/downloads/jlink/

## nrf5340 DK devicetree file

`<install_path>/ncs/v2.5.0/zephyr/boards/arm/nrf5340dk_nrf5340/nrf5340dk_nrf5340_cpunet.dts`

## General-Purpose Input/Output (GPIO)

https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/hardware/peripherals/gpio.html#api-reference

# References

- [devicetree specifications](https://www.devicetree.org/specifications/)
- [nRF5340 DK](https://www.nordicsemi.com/Products/Development-hardware/nRF5340-DK/Download?lang=en#infotabs)
- [zephyr device driver model](https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/zephyr/kernel/drivers/index.html#device-model-api)
- [nRF Connect SDK Fundamentals Course Exercises](https://github.com/NordicDeveloperAcademy/ncs-fund/tree/main)
