#pragma once

#define TAPPING_TERM 180

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

#ifdef COMBO_ENABLE
    #define COMBO_COUNT 9
    #define COMBO_TERM 20
    #define COMBO_ONLY_FROM_LAYER 0
#endif

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD