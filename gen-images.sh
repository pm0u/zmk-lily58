#! /bin/bash

# zmk-viewer generate -f config/lily58.keymap lily58/rev1
keymap -c ./keymap_config.yml parse -c 14 -z ./config/lily58.keymap > lily.yml
keymap -c ./keymap_config.yml draw lily.yml > lily.svg
rm lily.yml