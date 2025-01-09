#pragma once

#include "quantum.h"

#define LAYOUT_split_4x6_3( \
    k00, k01, k02, k03, k04, k05,   k06, k07, k08, k09, k10, k11, \
    k12, k13, k14, k15, k16, k17,   k18, k19, k20, k21, k22, k23, \
    k24, k25, k26, k27, k28, k29,   k30, k31, k32, k33, k34, k35, \
    k36, k37, k38, k39, k40, k41,   k42, k43, k44, k45, k46, k47, \
              k48, k49, k50,   k51, k52, k53 \
) { \
    { k00, k01, k02, k03, k04, k05 }, \
    { k12, k13, k14, k15, k16, k17 }, \
    { k24, k25, k26, k27, k28, k29 }, \
    { k36, k37, k38, k39, k40, k41 }, \
    { KC_NO, KC_NO, k48, k49, k50, KC_NO }, \
    { k06, k07, k08, k09, k10, k11 }, \
    { k18, k19, k20, k21, k22, k23 }, \
    { k30, k31, k32, k33, k34, k35 }, \
    { k42, k43, k44, k45, k46, k47 }, \
    { KC_NO, KC_NO, k51, k52, k53, KC_NO } \
}
