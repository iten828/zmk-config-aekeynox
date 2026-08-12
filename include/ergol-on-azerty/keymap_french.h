/* Copyright 2015-2016 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ² │ & │ é │ " │ ' │ ( │ - │ è │ _ │ ç │ à │ ) │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ $ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ù │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ W │ X │ C │ V │ B │ N │ , │ ; │ : │ ! │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_SUP2 GRAVE   // ²
#define FR_AMPR N1    // &
#define FR_EACU N2    // é
#define FR_DQUO N3    // "
#define FR_QUOT N4    // '
#define FR_LPRN N5    // (
#define FR_MINS N6    // -
#define FR_EGRV N7    // è
#define FR_UNDS N8    // _
#define FR_CCED N9    // ç
#define FR_AGRV N0    // à
#define FR_RPRN MINUS   // )
#define FR_EQL  EQUAL   // =
// Row 2
#define FR_A    Q    // A
#define FR_Z    W    // Z
#define FR_E    E    // E
#define FR_R    R    // R
#define FR_T    T    // T
#define FR_Y    Y    // Y
#define FR_U    U    // U
#define FR_I    I    // I
#define FR_O    O    // O
#define FR_P    P    // P
#define FR_CIRC LBKT  // ^ (dead)
#define FR_DLR  RBKT  // $
// Row 3
#define FR_Q    A    // Q
#define FR_S    S    // S
#define FR_D    D    // D
#define FR_F    F    // F
#define FR_G    G    // G
#define FR_H    H    // H
#define FR_J    J    // J
#define FR_K    K    // K
#define FR_L    L    // L
#define FR_M    SEMI // M
#define FR_UGRV SQT  // ù
#define FR_ASTR NUHS // *
// Row 4
#define FR_LABK NUBS // <
#define FR_W    Z    // W
#define FR_X    X    // X
#define FR_C    C    // C
#define FR_V    V    // V
#define FR_B    B    // B
#define FR_N    N    // N
#define FR_COMM M    // ,
#define FR_SCLN COMMA // ;
#define FR_COLN DOT   // :
#define FR_EXLM SLASH  // !

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ¨ │ £ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ % │ µ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │ ? │ . │ / │ § │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_1    LS(FR_AMPR) // 1
#define FR_2    LS(FR_EACU) // 2
#define FR_3    LS(FR_DQUO) // 3
#define FR_4    LS(FR_QUOT) // 4
#define FR_5    LS(FR_LPRN) // 5
#define FR_6    LS(FR_MINS) // 6
#define FR_7    LS(FR_EGRV) // 7
#define FR_8    LS(FR_UNDS) // 8
#define FR_9    LS(FR_CCED) // 9
#define FR_0    LS(FR_AGRV) // 0
#define FR_DEG  LS(FR_RPRN) // °
#define FR_PLUS LS(FR_EQL)  // +
// Row 2
#define FR_DIAE LS(FR_CIRC) // ¨ (dead)
#define FR_PND  LS(FR_DLR)  // £
// Row 3
#define FR_PERC LS(FR_UGRV) // %
#define FR_MICR LS(FR_ASTR) // µ
// Row 4
#define FR_RABK LS(FR_LABK) // >
#define FR_QUES LS(FR_COMM) // ?
#define FR_DOT  LS(FR_SCLN) // .
#define FR_SLSH LS(FR_COLN) // /
#define FR_SECT LS(FR_EXLM) // §

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ~ │ # │ { │ [ │ | │ ` │ \ │   │ @ │ ] │ } │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │   │ ¤ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_TILD RA(FR_EACU) // ~ (dead)
#define FR_HASH RA(FR_DQUO) // #
#define FR_LCBR RA(FR_QUOT) // {
#define FR_LBRC RA(FR_LPRN) // [
#define FR_PIPE RA(FR_MINS) // |
#define FR_GRV  RA(FR_EGRV) // ` (dead)
#define FR_BSLS RA(FR_UNDS) // (backslash)
#define FR_AT   RA(FR_AGRV) // @
#define FR_RBRC RA(FR_RPRN) // ]
#define FR_RCBR RA(FR_EQL)  // }
// Row 2
#define FR_EURO RA(FR_E)   // €
#define FR_CURR RA(FR_DLR) // ¤



#define OSX_AT NUBS
#define OSX_GRV NUHS
#define OSX_EQL SLASH
#define OSX_PLUS LS(OSX_EQL)
#define OSX_MINS EQUAL
#define OSX_ASTR LS(FR_DLR)
#define OSX_LABK NUBS
#define OSX_RABK LS(NUBS)
#define OSX_LBRC LS(LA(FR_LPRN))
#define OSX_RBRC LS(LA(FR_RPRN))
#define OSX_LCBR LA(FR_LPRN)
#define OSX_RCBR LA(FR_RPRN)
#define OSX_UNDS LS(OSX_MINS)
#define OSX_HASH LS(OSX_AT)
#define OSX_PIPE LS(LA(FR_L))
#define OSX_QUOTFR LS(LA(N4))
#define OSX_SECT N6
#define OSX_PND LS(OSX_GRV)

#define K0 KP_N0
#define K1 KP_N1
#define K2 KP_N2
#define K3 KP_N3
#define K4 KP_N4
#define K5 KP_N5
#define K6 KP_N6
#define K7 KP_N7
#define K8 KP_N8
#define K9 KP_N9

/ {
    macros {
        lm: lm {
            compatible = "zmk,behavior-macro-two-param";
            wait-ms = <0>;
            tap-ms = <0>;
            #binding-cells = <2>;
            bindings =
                <&macro_param_1to1>,
                <&macro_press>,
                <&mo MACRO_PLACEHOLDER &macro_param_2to1>,
                <&macro_press>,
                <&kp MACRO_PLACEHOLDER>,
                <&macro_pause_for_release>,
                <&macro_param_2to1>,
                <&macro_release>,
                <&kp MACRO_PLACEHOLDER &macro_param_1to1>,
                <&macro_release>,
                <&mo MACRO_PLACEHOLDER>;
        };

        UnS: UnS {
            compatible = "zmk,behavior-macro-one-param";
            #binding-cells = <1>;
            bindings =
                <&macro_release>,
                <&kp LSHFT &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>,
                <&macro_press>,
                <&kp LSHFT>;
        };

        circ: circ {
            compatible = "zmk,behavior-macro-one-param";
            #binding-cells = <1>;
            wait-ms = <20>;
            tap-ms = <20>;
            bindings =
                <&macro_tap>,
                <&kp FR_CIRC &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>;
        };

        tild: tild {
            compatible = "zmk,behavior-macro-one-param";
            #binding-cells = <1>;
            wait-ms = <20>;
            tap-ms = <20>;
            bindings =
                <&macro_tap>,
                <&kp FR_TILD &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>;
        };

        x_tild: x_tild {
            compatible = "zmk,behavior-macro-one-param";
            #binding-cells = <1>;
            wait-ms = <20>;
            tap-ms = <20>;
            bindings =
                <&macro_tap>,
                <&kp LA(FR_N) &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>;
        };

        diae: diae {
            compatible = "zmk,behavior-macro-one-param";
            #binding-cells = <1>;
            wait-ms = <20>;
            tap-ms = <20>;
            bindings =
                <&macro_tap>,
                <&kp LS(FR_CIRC) &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>;
        };

        caps: caps {
            compatible = "zmk,behavior-macro-one-param";
            #binding-cells = <1>;
            wait-ms = <40>;
            tap-ms = <40>;
            bindings =
                <&macro_tap>,
                <&kp CAPS &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>,
                <&macro_tap>,
                <&kp CAPS>;
        };

        x_acut: x_acut {
            compatible = "zmk,behavior-macro-one-param";
            #binding-cells = <1>;
            wait-ms = <20>;
            tap-ms = <20>;
            bindings =
                <&macro_tap>,
                <&kp LS(LA(N1)) &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>;
        };

        x_agrv: x_agrv {
            compatible = "zmk,behavior-macro-one-param";
            #binding-cells = <1>;
            wait-ms = <20>;
            tap-ms = <20>;
            bindings =
                <&macro_tap>,
                <&kp OSX_GRV &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>;
        };

        agrv: agrv {
            compatible = "zmk,behavior-macro-one-param";
            #binding-cells = <1>;
            wait-ms = <20>;
            tap-ms = <20>;
            bindings =
                <&macro_tap>,
                <&kp FR_GRV &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>;
        };

        ax: ax {
            compatible = "zmk,behavior-macro-one-param";
            #binding-cells = <1>;
            wait-ms = <20>;
            tap-ms = <20>;
            bindings =
                <&macro_press>,
                <&kp LALT &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>,
                <&macro_release>,
                <&kp LALT>;
        };

        a0xx: a0xx {
            compatible = "zmk,behavior-macro-two-param";
            #binding-cells = <2>;
            wait-ms = <20>;
            tap-ms = <20>;
            bindings =
                <&macro_press>,
                <&kp LALT>,
                <&macro_tap>,
                <&kp KP_N0 &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER &macro_param_2to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>,
                <&macro_release>,
                <&kp LALT>;
        };

        a1xx: a1xx {
            compatible = "zmk,behavior-macro-two-param";
            #binding-cells = <2>;
            wait-ms = <20>;
            tap-ms = <20>;
            bindings =
                <&macro_press>,
                <&kp LALT>,
                <&macro_tap>,
                <&kp KP_N1 &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER &macro_param_2to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>,
                <&macro_release>,
                <&kp LALT>;
        };

        a2xx: a2xx {
            compatible = "zmk,behavior-macro-two-param";
            #binding-cells = <2>;
            wait-ms = <20>;
            tap-ms = <20>;
            bindings =
                <&macro_press>,
                <&kp LALT>,
                <&macro_tap>,
                <&kp KP_N2 &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER &macro_param_2to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>,
                <&macro_release>,
                <&kp LALT>;
        };

        a01xx: a01xx {
            compatible = "zmk,behavior-macro-two-param";
            #binding-cells = <2>;
            wait-ms = <10>;
            tap-ms = <10>;
            bindings =
                <&macro_press>,
                <&kp LALT>,
                <&macro_tap>,
                <&kp KP_N0>,
                <&macro_tap>,
                <&kp KP_N1 &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER &macro_param_2to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>,
                <&macro_release>,
                <&kp LALT>;
        };

        a02xx: a02xx {
            compatible = "zmk,behavior-macro-two-param";
            #binding-cells = <2>;
            wait-ms = <10>;
            tap-ms = <10>;
            bindings =
                <&macro_press>,
                <&kp LALT>,
                <&macro_tap>,
                <&kp KP_N0>,
                <&macro_tap>,
                <&kp KP_N2 &macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER &macro_param_2to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>,
                <&macro_release>,
                <&kp LALT>;
        };

        insec: insec {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            wait-ms = <20>;
            tap-ms = <20>;
            bindings =
                <&macro_release>,
                <&kp LSHFT>,
                <&macro_press>,
                <&kp LALT>,
                <&macro_tap>,
                <&kp KP_N2>,
                <&macro_tap>,
                <&kp KP_N5>,
                <&macro_tap>,
                <&kp KP_N5>,
                <&macro_release>,
                <&kp LALT>,
                <&macro_press>,
                <&kp LSHFT>;
        };

        /* BT */
        /*
        bt_prof0: bt_prof0 {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = 
                <&macro_press &bt BT_SEL 0>
                ,<&macro_press &to WIN_DFT>;
        };

        bt_prof1: bt_prof1 {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = 
                <&macro_press &bt BT_SEL 1>
                ,<&macro_press &to OSX_DFT>;
        };

        bt_prof2: bt_prof2 {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = 
                <&macro_press &bt BT_SEL 2>
                ,<&macro_press &to WIN_DFT>;
        };
*/
        /* SEQUENCES */

        w1mins2: w1mins2 {
            compatible = "zmk,behavior-macro-two-param";
            #binding-cells = <2>;
            wait-ms = <20>;
            tap-ms = <20>;
            bindings =
                <&macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>,
                <&macro_tap>,
                <&kp FR_MINS &macro_param_2to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>;
        };

        x1mins2: x1mins2 {
            compatible = "zmk,behavior-macro-two-param";
            #binding-cells = <2>;
            wait-ms = <20>;
            tap-ms = <20>;
            bindings =
                <&macro_param_1to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>,
                <&macro_tap>,
                <&kp OSX_MINS &macro_param_2to1>,
                <&macro_tap>,
                <&kp MACRO_PLACEHOLDER>;
        };

        https: https {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings =
                <&macro_tap>,
                <&kp FR_H>,
                <&macro_tap>,
                <&kp FR_T>,
                <&macro_tap>,
                <&kp FR_T>,
                <&macro_tap>,
                <&kp FR_P>,
                <&macro_tap>,
                <&kp FR_S>,
                <&macro_tap>,
                <&kp FR_COLN>,
                <&macro_tap>,
                <&kp FR_SLSH>,
                <&macro_tap>,
                <&kp FR_SLSH>;
        };
    };
};