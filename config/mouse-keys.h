#include <behaviors.dtsi>
#include <dt-bindings/zmk/mouse.h>
#include <behaviors/mouse_move.dtsi>

/**
 * Taken from
 * https://github.com/manna-harbour/miryoku_zmk/blob/master/miryoku/miryoku_kludge_mousekeyspr.dtsi
 * https://github.com/manna-harbour/miryoku_zmk/blob/master/miryoku/miryoku_kludge_mousekeyspr.h
 */
 
// Default 600
#define ZMK_MOUSE_DEFAULT_MOVE_VAL 6000
// Default 10
#define ZMK_MOUSE_DEFAULT_SCRL_VAL 20

// 1 = natural scroll in OS. 0 = no
#define NATURAL_SCROLL 1

#if IS_ENABLED(NATURAL_SCROLL)
  #define SCRLUP SCRL_DOWN
  #define SCRLDN SCRL_UP
#else
  #define SCRLUP SCRL_UP
  #define SCRLDN SCRL_DOWN
#endif

&mmv {
  acceleration-exponent = <2>;
  time-to-max-speed-ms = <5000>;
  delay-ms = <0>;
  trigger-period-ms = <2>;
};


&msc {
  acceleration-exponent = <2>;
  time-to-max-speed-ms = <4000>;
  delay-ms = <0>;
  trigger-period-ms = <2>;
};
