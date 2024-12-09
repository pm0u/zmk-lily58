#! /bin/bash

# zmk-viewer generate -f config/lily58.keymap lily58/rev1
keymap parse -c 14 -z ./config/lily58.keymap > lily.yml
keymap draw lily.yml > lily.svg
rm lily.yml