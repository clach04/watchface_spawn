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

//#define NO_BATTERY /* Do not show battery status */
#define BAT_FMT_STR "%d%%"
#define DRAW_BATTERY

#define DATE_FMT_STR "%a\n%b\n%d"  /* TODO review %d for day */
#define MAX_DATE_STR "Thu\n00\nAug"  /* if custom version of DATE_FMT_STR is set, MAX_DATE_STR  needs to be updated too */
//#define NO_DATE

#define BG_IMAGE RESOURCE_ID_IMAGE_SPAWN
/* PBL_RECT 144x168*/
#define IMAGE_RES_X 120  /* NOTE if image res changes - this needs to change too! */
#define IMAGE_RES_Y 120  /* NOTE if image res changes - this needs to change too! */
/* Image shifted down from top of screen, centered horizontally */
#define BG_IMAGE_GRECT GRect((144 - IMAGE_RES_X) / 2, 10,  IMAGE_RES_X, IMAGE_RES_Y)

#define CLOCK_POS GRect(0, -15, 144, 168) /* top of screen for FONT_KEY_ROBOTO_BOLD_SUBSET_49 */

#define BT_POS GRect(0, 50, 144, 168) /* probably taller than really needed */

#define DATE_POS GRect(0, -5, 144, 168) /* probably taller than really needed */
#ifdef DRAW_BATTERY
    #define BAT_POS GRect(8, 8, 144, 168)
#else
    #define BAT_POS GRect(8, 0, 144, 168) /* probably taller than really needed */
#endif /* DRAW_BATTERY */


/* for screen shots and font testing
#define DEBUG_TIME
#define DEBUG_TIME_SCREENSHOT
 */
