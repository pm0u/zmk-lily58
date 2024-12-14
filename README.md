# ZMK Config

## Philosophy

- heavily inspired by [urob config](https://github.com/urob/zmk-config) (combos > layers)
- common symbols for JS/TS are prioritized (some deviaton from urob config here)
  - Horizontal combo bracket/parens are open on index + middle, close on middle + ring
  - Swap back vertical combo & to be below 7 with | below - I do more logical compares than maths so this made sense for my use and it follows the number symbol row more closely
  - Horizontal combos on the left middle row for undo, redo, and select all. Along with cut/copy/paste (bottom row combos) this allows for most text related actions I need while using a mouse, all on left hand.
  - Horizontal homerow combos for tab/esc on left hand
  - f/j triggers caps word, d/k triggers capslock
- homerow mods ("Timeless" per urob) Homerow follows ACGS mods
  - This leaves my tiling window navigation keys (Gui, Gui + SHIFT) close by (_\* see [OS Accommmodations](#os-accommodations) below_)
- Key / shift remap (per urob)
  - ? / ! are combined with f slash (/) available via combo (per urob)
  - , / ; and . / : tap/shift tap. < / > are available as shifted parens combos (homerow) or Ctrl+Shift+(,/.)
- vim like nav on base/nav layers
- avoid tap-hold on high priority thumb keys (del, space, bksp, return)
- Tapdance on shift for: shift, caps lock

## OS Accommodations

- Mods - Karabiner remaps Gui -> Ctrl and Ctrl -> Gui, this keeps consistent mod "intentions" across OS
- Due to movement of quote, vim and vim like commands that rely on semi are lost
  - Karabiner double maps ^' to ^; so that this "vim like" binding opens alfred on this board & built in
  ```json
  {
    "description": "extra alfred shortcut",
    "manipulators": [
      {
        "from": {
          "key_code": "quote",
          "modifiers": {
            "mandatory": ["left_control"],
            "optional": ["any"]
          }
        },
        "to": [
          {
            "key_code": "semicolon",
            "modifiers": ["left_control"]
          }
        ],
        "type": "basic"
      }
    ]
  }
  ```
  - `.zshrc` mod
  ```zshrc
  noremap " :
  ```

## Layer Explanation

- `nav` layer overlays arrow keys over hjkl for easier navigation in non-vim settings
- `mouse` is triggered w/ left thumb doubling on thumb keys. this is mainly a bailout layer for me, the position is a bit awkward admittedly. but relying on only the thumb allows for all combos from base layer to carry over for use alongside keyboard mouse controls.
- `num` layer provides a southpaw numpad with common symbols (WIP, symbols are open to change). Carries over left + right combos from base layer.
- `util` is a conditional layer triggered by activating num/nav. this is a bit of a dumping ground for os/media/zmk utils.

![keymap](/draw/lily58.svg)
