# Lily58 Config

- HRM and combos
  - Homerow follows ACGS mods. I often use macOS but reverse C/G at the OS level for consistency so its:
    - AGCS on mac
    - ACGS elsewhere
    - This leaves my tiling window navigation keys (mac: CTRL, CTRL + SHIFT) close by on either OS (CTRL is the window management key on Mac, GUI on Linux).
  - Combos mostly follow [urob config](https://github.com/urob/zmk-config) with a few exceptions and additions
    - Horizontal combo bracket/parens are open on index + middle, close on middle + ring
    - Swap back vertical combo & to be below 7 with | below - I do more logical compares than maths so this made sense for my use and it follows the number symbol row more closely
    - Horizontal combos on the left middle row for undo, redo, and select all. Along with cut/copy/paste (bottom row combos) this allows for most text related actions I need while using a mouse, all on left hand.
    - f/j triggers caps word, d/k triggers capslock
- Tapdance on shift for: shift, caps_word, caps lock
- Layering inspired by [miryoku](https://github.com/manna-harbour/miryoku) (WIP)
  - Util layer covers arrow & media (R hand). From util, you can trigger a mouse overlay using the first knuckle of your thumb to span inner & mid thumb keys. Its slightly awkward, but seldom used and keeps the L fingers free for mods if needed. Horizontal combos from base layer are available in both modes (copy/paste/cut/undo/redo/select all)
  - Num layer is triggered from the right layer and provides a southpaw numpad with common symbols (WIP)

![keymap](/draw/lily58.svg)
