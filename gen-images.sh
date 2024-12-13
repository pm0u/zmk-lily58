#! /bin/bash
keymap -c ./keymap_drawer.config.yaml parse -z ./config/lily58.keymap > lily.yml
keymap -c ./keymap_drawer.config.yaml draw lily.yml -k "lily58/rev1" > ./draw/lily58.svg
rm lily.yml