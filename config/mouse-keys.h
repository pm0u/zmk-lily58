/**
 * Taken from
 * https://github.com/manna-harbour/miryoku_zmk/blob/master/miryoku/miryoku_kludge_mousekeyspr.dtsi
 * https://github.com/manna-harbour/miryoku_zmk/blob/master/miryoku/miryoku_kludge_mousekeyspr.h
 */
#define ZMK_MOUSE_DEFAULT_MOVE_VAL 1250
#define ZMK_MOUSE_DEFAULT_SCRL_VAL 100

#define U_MOUSE_MOVE_EXPONENT 1
#define U_MOUSE_MOVE_TIME 1500
#define U_MOUSE_MOVE_DELAY 0
#define U_MOUSE_SCROLL_EXPONENT 1
#define U_MOUSE_SCROLL_TIME 5000
#define U_MOUSE_SCROLL_DELAY 0

&mmv {
  acceleration-exponent = <U_MOUSE_MOVE_EXPONENT>;
  time-to-max-speed-ms = <U_MOUSE_MOVE_TIME>;
  delay-ms = <U_MOUSE_MOVE_DELAY>;
};

/*
&msc {
  acceleration-exponent = <U_MOUSE_SCROLL_EXPONENT>;
  time-to-max-speed-ms = <U_MOUSE_SCROLL_TIME>;
  delay-ms = <U_MOUSE_SCROLL_DELAY>;
};
*/