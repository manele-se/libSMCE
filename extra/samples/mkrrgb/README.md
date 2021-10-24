# MKRRGB
_ArduinoMKRRGB (`MATRIX`) shown in `stdout`_  

**WARNING**: This program is not installable, nor portable (it is however relocatable). It is only meant to be ran from its build tree.

Like SMCE, this sample program requires a C++20 toolchain (for `<span>` mostly).

## Build

```shell
cmake -S . -B build/
cmake --build build/
```

You can now find the executable in the `./build` directory.

## Usage
```
mkrrgb <fqbn> <sketch-path>
```
where
- FQBN: [Fully Qualified Board Name](https://arduino.github.io/arduino-cli/latest/FAQ/#whats-the-fqbn-string)
- Sketch path: Relative or absolute path to the sketch to run

## Sketches

At the current time, we only provide a single sample sketch for _MKRRGB_, under `sketches/`

### - `smile`
The `smile` sketch paints a smiley(?) face.
