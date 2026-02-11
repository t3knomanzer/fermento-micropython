# Fermento Firmware Build Instructions

This guide explains how to build the Fermento firmware for the ESP32 Fermento S3 Camera using the Fermento Micropython fork, ESP-IDF, and the JPEG dependency.

---

## Prerequisites

Before building, ensure you have the following repositories cloned locally:

* **fermento-micropython** – This Micropython fork
* **esp-idf** – $ git clone -b v5.5.1 --recursive https://github.com/espressif/esp-idf.git
* **mp_jpeg** – git clone https://github.com/cnadler86/mp_jpeg.git
* **micropython-camera-api** – https://github.com/cnadler86/micropython-camera-API.git

---

## Recommended Directory Layout

```
workspace/
├── fermento-micropython/
├── esp-idf/
├── jpeg/
└── micropython-camera-api/
    └── build.sh
```

---

## Clone Required Repositories

Example commands:

```bash
git clone https://github.com/t3knomanzer/fermento-micropython.git
git clone -b v5.5.1 --recursive https://github.com/espressif/esp-idf.git
git clone https://github.com/cnadler86/mp_jpeg.git
git clone https://github.com/cnadler86/micropython-camera-API.git
```

---

## Setup ESP-IDF

Install and export the ESP-IDF environment:

```bash
cd esp-idf
./install.sh esp32
source export.sh
```

> Make sure the ESP-IDF environment is exported before running the build script.

---

## Build Firmware

From the root of the `micropython-camera-api` repository, run:

```bash
./build.sh ../fermento-micropython \
  -i ../esp-idf \
  -b ESP32_FERMENTO_S3_CAM \
  -v SPIRAM_OCT
```

---

## Build Parameters

| Parameter                  | Description                           |
| -------------------------- | ------------------------------------- |
| `../fermento-micropython`  | Path to the Fermento Micropython fork |
| `-i ../esp-idf`            | Path to the ESP-IDF installation      |
| `-b ESP32_FERMENTO_S3_CAM` | Target board configuration            |
| `-v SPIRAM_OCT`            | Variant using Octal PSRAM             |

---

## Notes

* No modifications are required in the board configuration; the `idf_component` already includes necessary settings.
* The build script currently resides in the root of `micropython-camera-api`.

---

## Output

The compiled firmware binary will be generated in the build output directory defined by the build script.
