# Arduino Uno with PlatformIO Boilerplate

## Requiremets

* Install Arduino IDE
* Install Visual Studio Code
* Install Platform.io plug in

## How to test

* See `platformio.ini` to make sure your board is listed
* See `test` folder, we have integration and unit test folder
    * integration test if we have arduino-dependent function, we need to download it to board
    * unit test for ISO C++ function, we can run it in desktop
* Run it with `pio test -e native -d test/unit_test` if we want to run native environtment and test script in unit_test folder
