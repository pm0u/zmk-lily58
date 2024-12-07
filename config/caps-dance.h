// urob helpers
#include <zmk-helpers/helper.h>
#include <zmk-helpers/key-labels/lily58.h>

ZMK_TAP_DANCE(caps_dance, 
  tapping-term-ms = <200>;
  bindings = <&kp LSHIFT>, <&caps_word>, <&kp CAPS_LOCK>
)