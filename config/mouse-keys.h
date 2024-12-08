#include <behaviors.dtsi>
#include <dt-bindings/zmk/mouse.h>
#include <behaviors/mouse_move.dtsi>

/**
 * Taken from
 * https://github.com/manna-harbour/miryoku_zmk/blob/master/miryoku/miryoku_kludge_mousekeyspr.dtsi
 * https://github.com/manna-harbour/miryoku_zmk/blob/master/miryoku/miryoku_kludge_mousekeyspr.h
 */

#define U_MOUSE_MOVE_EXPONENT 1800
#define U_MOUSE_MOVE_TIME 500
#define U_MOUSE_MOVE_DELAY 0
#define U_MOUSE_SCROLL_EXPONENT 3000
#define U_MOUSE_SCROLL_TIME 1000
#define U_MOUSE_SCROLL_DELAY 0

// 1 = natural scroll in OS. 0 = no
#define NATURAL_SCROLL 1

#if IS_ENABLED(NATURAL_SCROLL)
  #define SCR_UP SCRL_DOWN
  #define SCR_DOWN SCRL_UP
#else
  #define SCR_UP SCRL_UP
  #define SCR_DOWN SCRL_DOWN
#endif

&mmv {
  acceleration-exponent = <12>;
  time-to-max-speed-ms = U_MOUSE_MOVE_TIME;
  delay-ms = <U_MOUSE_MOVE_DELAY>;
};


&msc {
  acceleration-exponent = <12>;
  time-to-max-speed-ms = <U_MOUSE_SCROLL_TIME>;
  delay-ms = <U_MOUSE_SCROLL_DELAY>;
};
