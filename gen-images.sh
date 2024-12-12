#! /bin/bash

# zmk-viewer generate -f config/lily58.keymap lily58/rev1
keymap -c ./keymap_config.yml parse -z ./config/lily58.keymap > lily.yml
keymap -c ./keymap_config.yml draw lily.yml -k "lily58/rev1" > lily.svg
rm lily.yml