#ifndef MICROPY_HW_BOARD_NAME
#define MICROPY_HW_BOARD_NAME               "Generic ESP32S3 module"
#endif
#define MICROPY_HW_MCU_NAME                 "ESP32S3-CAM"

// Enable UART REPL for modules that have an external USB-UART and don't use native USB.
#define MICROPY_HW_ENABLE_UART_REPL         (1)

// The Xiao ESP32S3 camera support
// https://github.com/cnadler86/micropython-camera-API/tree/master
#define MICROPY_CAMERA_MODEL_XIAO_ESP32S3   (1)
