#! /bin/bash
keymap -c ./keymap_drawer.config.yaml parse -z ./config/lily58.keymap > lily.yml &&\
keymap -c ./keymap_drawer.config.yaml draw lily.yml -k "lily58/rev1" > ./draw/lily58.svg
rm lily.yml

keymap -c ./keymap_drawer.config.yaml parse -z ./config/corne.keymap > keymap.yml
keymap -c ./keymap_drawer.config.yaml draw keymap.yml -k "crkbd/rev4_1/mini" -l "LAYOUT_split_3x5_3" > ./draw/corne.svg
rm keymap.yml