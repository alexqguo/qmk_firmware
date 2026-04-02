just a place to keep all my old configs so that updating the fork isn't so painful hopefully.

just copy these configs over into the appropriate directory when you want to use them.

YMDK: `scp -r alexguo_my_configs/sp64/\* keyboards/ymdk/sp64`

- then compile and flash normally
- for bootloader mode, hold left control (bottom left most key on left side) while connecting
- atmega32a

Keychron Q8: `scp -r alexguo_my_configs/keychron_q8_ansi_encoded/* keyboards/keychron/q8/ansi_encoder`

- then compile with `-km alexguo` and flash normally
- for bootloader mode, hold esc while connecting

DZ60: `scp -r alexguo_my_configs/dz60/* keyboards/dz60/keymaps/ag`

- create `ag` directory within dz60 keymaps if necessary
- compile and flash normally: `qmk compile -kb dz60 -km ag`
- atmega32u4
