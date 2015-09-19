#pragma once

#define USE_GENERIC_MAIN
#undef REMOVE_LEADING_ZERO_FROM_TIME  /* 12 hour display will not have a leading "0" if this is defined */
#undef FONT_NAME
#undef FONT_SYSTEM_NAME  /* the default font system will be used */
#undef DEBUG_TIME

/* White background */
#define DEFAULT_TIME_COLOR GColorRed
#define DEFAULT_BACKGROUND_COLOR GColorWhite

#define FONT_BT_SYSTEM_NAME FONT_KEY_GOTHIC_18_BOLD
//#define NO_BLUETOOTH /* Do not show bluetooth disconnect status */
#define NO_BATTERY /* Do not show battery status */
#define NO_DATE /* Do not show date */

#define BG_IMAGE RESOURCE_ID_IMAGE_SPAWN
//#define BG_IMAGE_GRECT GRectZero
#define BG_IMAGE_GRECT GRect(0, 0, 144, 144)  // use same size as image. On Aplite can determine this at runtime but not Basalt

#ifdef  NO_DATE
    //#define CLOCK_POS GRect(0, 118, 144, 168) /* bottom of screen for FONT_KEY_ROBOTO_BOLD_SUBSET_49 with one pixel border on bottom */

    //#define FONT_SYSTEM_NAME FONT_KEY_BITHAM_42_BOLD
    //#define CLOCK_POS GRect(0, 125, 144, 168) /* bottom of screen for FONT_KEY_BITHAM_42_BOLD  with one pixel border on bottom */

    //#define FONT_SYSTEM_NAME FONT_-KEY_ROBOTO_CONDENSED_21
    //#define CLOCK_POS GRect(0, 142, 144, 168) /* bottom of screen for FONT_KEY_ROBOTO_CONDENSED_21 */

    //#define FONT_SYSTEM_NAME FONT_KEY_GOTHIC_28_BOLD
    //#define CLOCK_POS GRect(0, 138, 144, 168) /* bottom of screen for FONT_KEY_GOTHIC_28_BOLD */

    #define FONT_SYSTEM_NAME FONT_KEY_BITHAM_30_BLACK /* works well if 144x144 image is used above, little wasted space */
    #define CLOCK_POS GRect(0, 136, 144, 168) /* bottom of screen for FONT_KEY_BITHAM_30_BLACK */
#else
//#define CLOCK_POS GRect(0, -10, 144, 168) /* Top of screen */
//#define CLOCK_POS GRect(0, 10, 144, 168) /* near top of screen */
//#define CLOCK_POS GRect(0, 52, 144, 168) /* Center of screen */
//#define CLOCK_POS GRect(0, 58, 144, 168) /* Center logo if logo is top aligned */
#define CLOCK_POS GRect(0, 75, 144, 168) /* if logo is top aligned */
#endif

//#define BT_POS GRect(0, 40, 144, 168) /* probably taller than really needed */
#define BT_POS GRect(0, 50, 144, 168) /* probably taller than really needed */
#define DATE_POS GRect(0, 140, 144, 168) /* probably taller than really needed */
#define BAT_POS GRect(0, 140, 144, 168) /* probably taller than really needed */

