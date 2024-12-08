#include <behaviors.dtsi>
#include <dt-bindings/zmk/mouse.h>
#include <behaviors/mouse_move.dtsi>

/**
 * Taken from
 * https://github.com/manna-harbour/miryoku_zmk/blob/master/miryoku/miryoku_kludge_mousekeyspr.dtsi
 * https://github.com/manna-harbour/miryoku_zmk/blob/master/miryoku/miryoku_kludge_mousekeyspr.h
 */

// 1 = natural scroll in OS. 0 = no
#define NATURAL_SCROLL 1

#if IS_ENABLED(NATURAL_SCROLL)
  #define SCRLUP SCRL_DOWN
  #define SCRLDOWN SCRL_UP
#else
  #define SCRLUP SCRL_UP
  #define SCRLDOWN SCRL_DOWN
#endif

&mmv {
  acceleration-exponent = <1000>;
  time-to-max-speed-ms = <500>;
  delay-ms = <0>;
  trigger-period-ms = <2>;
};


&msc {
  acceleration-exponent = <1000>;
  time-to-max-speed-ms = <1000>;
  delay-ms = <0>;
  trigger-period-ms = <2>
};
