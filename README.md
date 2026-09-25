Hackpad V1


Hackpad V1 is my custom 7-key mechanical macropad featuring a rotary encoder and an OLED display! Powered by a Seeed Studio XIAO RP2040 microcontroller and running custom QMK firmware.

Built as my submission for the Hackpad YSWS!

Features:
Custom 2-piece 3D printed enclosure

128x32 OLED display that says "HACKPAD V1" on boot

EC11 Rotary encoder for volume control (and press to play/pause!)

7 mechanical switches for numpad shortcuts and macros

Full QMK firmware support!

CAD Model:
Modeled in Fusion 360. The enclosure consists of a top shell and bottom shell that screw together, keeping the PCB, switches, OLED, and XIAO RP2040 tucked safely inside.

Pretty nifty how everything fits together snugly!

PCB
Designed in KiCad! It uses a 3x3 switch matrix layout wired alongside dedicated pins for the rotary encoder and I2C OLED screen, backed by a front/back copper ground plane.

Schematic

PCB Layout

Fun story: almost lost the whole PCB layout mid-way, but managed to rebuild and restore it right back into KiCad from exported Gerbers. Victory!

Firmware Overview
Powered by custom QMK firmware compiled locally using QMK MSYS.

Rotary Encoder: Twist right for Volume Up, twist left for Volume Down. Pressing down plays/pauses media.

7 Keys: Mapped to numpad macros (7, 8, 9, 4, 5, 6, Mute).

OLED Display: Greets you with "HACKPAD V1" as soon as you plug it in!

BOM:
Everything you need to build one yourself:

7x Mechanical MX Switches

7x Keycaps

7x 1N4148 Diodes

1x 0.91" 128x32 I2C OLED Display

1x EC11 Rotary Encoder

1x Seeed Studio XIAO RP2040

1x Custom Hackpad PCB

1x 3D Printed Enclosure (Top & Bottom case)

M2 / M3 Screws & Heat-set Inserts
