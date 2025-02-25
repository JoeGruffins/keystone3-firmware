/*******************************************************************************
 * Size: 28 px
 * Bpp: 1
 * Opts: --bpp 1 --size 28 --no-compress --font NotoSans-Regular.ttf --symbols "!%,-./0123456789;?ABCDFKMNOQRSTUXabcdegilmnoprstuwyАВДЕЗИКЛНОПРСТУФЧШЭабвгдежзийклмнопрстуфхцчшщыьэюя  --format lvgl -o ../gui_assets/font/ru/ruLittleTitle.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef RULITTLETITLE
#define RULITTLETITLE 1
#endif

#if RULITTLETITLE

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x1f, 0xf0,

    /* U+0022 "\"" */
    0xc7, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6,

    /* U+0025 "%" */
    0x3c, 0x3, 0x83, 0xf0, 0x18, 0x39, 0x81, 0xc1,
    0x86, 0xc, 0xc, 0x30, 0xe0, 0x61, 0x8e, 0x3,
    0xc, 0x60, 0x18, 0x67, 0x0, 0xc3, 0x33, 0xe3,
    0x33, 0xbf, 0x9f, 0x99, 0x8c, 0x79, 0x98, 0x30,
    0xc, 0xc1, 0x80, 0xc6, 0xc, 0x6, 0x30, 0x60,
    0x61, 0x83, 0x7, 0xc, 0x18, 0x30, 0x31, 0x83,
    0x1, 0xfc, 0x18, 0x7, 0xc0,

    /* U+002C "," */
    0x77, 0x76, 0x6c,

    /* U+002D "-" */
    0xff, 0xfc,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x0, 0xc0, 0x70, 0x18, 0xe, 0x3, 0x0, 0xc0,
    0x70, 0x18, 0x6, 0x3, 0x80, 0xc0, 0x70, 0x18,
    0x6, 0x3, 0x80, 0xc0, 0x30, 0x1c, 0x6, 0x3,
    0x80,

    /* U+0030 "0" */
    0xf, 0xc0, 0x7f, 0x83, 0x87, 0x1c, 0xe, 0x70,
    0x3b, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xdc, 0xe, 0x70, 0x38, 0xe1, 0xc1,
    0xfe, 0x3, 0xf0,

    /* U+0031 "1" */
    0x7, 0x1f, 0x3f, 0x77, 0xe7, 0x47, 0x7, 0x7,
    0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7,
    0x7, 0x7, 0x7, 0x7,

    /* U+0032 "2" */
    0xf, 0xc3, 0xff, 0x3c, 0x3c, 0x80, 0x70, 0x3,
    0x80, 0x1c, 0x0, 0xe0, 0x7, 0x0, 0x70, 0x7,
    0x80, 0x38, 0x3, 0x80, 0x38, 0x3, 0x80, 0x38,
    0x3, 0x80, 0x38, 0x3, 0x80, 0x3f, 0xff, 0xff,
    0xf0,

    /* U+0033 "3" */
    0x1f, 0xc3, 0xff, 0xbc, 0x1c, 0x80, 0x70, 0x3,
    0x80, 0x1c, 0x0, 0xe0, 0xe, 0x0, 0xe0, 0xfe,
    0x7, 0xf8, 0x1, 0xe0, 0x7, 0x80, 0x1c, 0x0,
    0xe0, 0x7, 0x0, 0x7e, 0x7, 0xbf, 0xf8, 0xff,
    0x0,

    /* U+0034 "4" */
    0x0, 0xf0, 0x1, 0xe0, 0x7, 0xc0, 0x1b, 0x80,
    0x37, 0x0, 0xce, 0x3, 0x9c, 0x6, 0x38, 0x18,
    0x70, 0x70, 0xe0, 0xc1, 0xc3, 0x3, 0x8e, 0x7,
    0x1f, 0xff, 0xff, 0xff, 0x80, 0x38, 0x0, 0x70,
    0x0, 0xe0, 0x1, 0xc0, 0x3, 0x80,

    /* U+0035 "5" */
    0x7f, 0xe3, 0xff, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0x0, 0x7f, 0x87, 0xff,
    0x0, 0x3c, 0x0, 0xf0, 0x3, 0x80, 0x1c, 0x0,
    0xe0, 0x7, 0x0, 0x76, 0x7, 0xbf, 0xf8, 0xff,
    0x0,

    /* U+0036 "6" */
    0x3, 0xe0, 0x7f, 0xf, 0x0, 0x70, 0x7, 0x0,
    0x38, 0x1, 0x80, 0x1c, 0xf8, 0xef, 0xe7, 0xc7,
    0xbc, 0x1f, 0xc0, 0x7e, 0x3, 0xf0, 0x1f, 0x80,
    0xee, 0x7, 0x70, 0x71, 0xc7, 0x87, 0xf8, 0x1f,
    0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xc0, 0xe, 0x0, 0x60, 0x7,
    0x0, 0x30, 0x3, 0x80, 0x1c, 0x0, 0xc0, 0xe,
    0x0, 0x60, 0x7, 0x0, 0x30, 0x3, 0x80, 0x1c,
    0x1, 0xc0, 0xe, 0x0, 0x60, 0x7, 0x0, 0x30,
    0x0,

    /* U+0038 "8" */
    0x1f, 0xc1, 0xff, 0xc7, 0x7, 0x38, 0xe, 0xe0,
    0x3b, 0x80, 0xef, 0x7, 0x9e, 0x3c, 0x3f, 0xc0,
    0x3e, 0x3, 0xfe, 0x1e, 0x3c, 0x70, 0x3b, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0xf0, 0x3d, 0xe1, 0xe3,
    0xff, 0x7, 0xf0,

    /* U+0039 "9" */
    0xf, 0x81, 0xfe, 0x1e, 0x38, 0xe0, 0xee, 0x3,
    0x70, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x7b, 0x87,
    0xdf, 0xee, 0x3e, 0x70, 0x3, 0x80, 0x18, 0x1,
    0xc0, 0xe, 0x0, 0xe0, 0xf, 0xf, 0xe0, 0x7c,
    0x0,

    /* U+003B ";" */
    0x77, 0x70, 0x0, 0x0, 0x0, 0x0, 0x76, 0x66,
    0xcc,

    /* U+003F "?" */
    0x3f, 0x1f, 0xf9, 0x7, 0x0, 0x70, 0xe, 0x1,
    0xc0, 0x38, 0xe, 0x3, 0xc0, 0xf0, 0x1c, 0x7,
    0x0, 0xc0, 0x18, 0x3, 0x0, 0x0, 0x0, 0x3,
    0x80, 0x70, 0xe, 0x0,

    /* U+0041 "A" */
    0x0, 0xc0, 0x0, 0x78, 0x0, 0x1e, 0x0, 0xf,
    0x80, 0x3, 0x70, 0x0, 0xcc, 0x0, 0x73, 0x80,
    0x18, 0xe0, 0xe, 0x18, 0x3, 0x87, 0x0, 0xc0,
    0xc0, 0x70, 0x38, 0x1f, 0xfe, 0x7, 0xff, 0x83,
    0x80, 0x70, 0xc0, 0x1c, 0x70, 0x3, 0x1c, 0x0,
    0xe6, 0x0, 0x1b, 0x80, 0x7,

    /* U+0042 "B" */
    0xff, 0xc3, 0xff, 0xce, 0xf, 0x38, 0xe, 0xe0,
    0x3b, 0x80, 0xee, 0x3, 0xb8, 0xc, 0xe0, 0x73,
    0xff, 0xf, 0xfe, 0x38, 0x1e, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x3f, 0x81, 0xef,
    0xff, 0x3f, 0xf0,

    /* U+0043 "C" */
    0x3, 0xfc, 0x1f, 0xfc, 0x78, 0x19, 0xc0, 0x7,
    0x80, 0xe, 0x0, 0x3c, 0x0, 0x70, 0x0, 0xe0,
    0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0,
    0x1c, 0x0, 0x1c, 0x0, 0x38, 0x0, 0x38, 0x0,
    0x3c, 0xc, 0x3f, 0xf8, 0x1f, 0xe0,

    /* U+0044 "D" */
    0xff, 0xc0, 0xff, 0xf0, 0xe0, 0x78, 0xe0, 0x1c,
    0xe0, 0xe, 0xe0, 0xe, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0xf, 0xe0, 0xe, 0xe0, 0x1e,
    0xe0, 0x1c, 0xe0, 0x78, 0xff, 0xf0, 0xff, 0x80,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0x80, 0x70, 0xe, 0x1, 0xc0,
    0x38, 0x7, 0x0, 0xe0, 0x1c, 0x3, 0xff, 0xff,
    0xfe, 0x1, 0xc0, 0x38, 0x7, 0x0, 0xe0, 0x1c,
    0x3, 0x80, 0x70, 0x0,

    /* U+004B "K" */
    0xe0, 0x1d, 0xc0, 0x73, 0x80, 0xe7, 0x3, 0x8e,
    0xe, 0x1c, 0x38, 0x38, 0xe0, 0x73, 0x80, 0xee,
    0x1, 0xfc, 0x3, 0xfc, 0x7, 0x9c, 0xe, 0x1c,
    0x1c, 0x38, 0x38, 0x38, 0x70, 0x38, 0xe0, 0x39,
    0xc0, 0x73, 0x80, 0x77, 0x0, 0x70,

    /* U+004D "M" */
    0xf0, 0x0, 0xff, 0x0, 0x1f, 0xf0, 0x1, 0xff,
    0x80, 0x3f, 0xd8, 0x3, 0x7d, 0x80, 0x37, 0xdc,
    0x6, 0x7c, 0xc0, 0x67, 0xce, 0x6, 0x7c, 0x60,
    0xc7, 0xc6, 0xc, 0x7c, 0x71, 0xc7, 0xc3, 0x18,
    0x7c, 0x31, 0x87, 0xc3, 0xb0, 0x7c, 0x1b, 0x7,
    0xc1, 0xf0, 0x7c, 0xe, 0x7, 0xc0, 0xe0, 0x7c,
    0xe, 0x7,

    /* U+004E "N" */
    0xe0, 0x7, 0xf0, 0x7, 0xf0, 0x7, 0xf8, 0x7,
    0xd8, 0x7, 0xdc, 0x7, 0xce, 0x7, 0xc6, 0x7,
    0xc7, 0x7, 0xc3, 0x87, 0xc3, 0x87, 0xc1, 0xc7,
    0xc0, 0xe7, 0xc0, 0xe7, 0xc0, 0x77, 0xc0, 0x37,
    0xc0, 0x3f, 0xc0, 0x1f, 0xc0, 0x1f, 0xc0, 0xf,

    /* U+004F "O" */
    0x3, 0xf8, 0x1, 0xff, 0xc0, 0x78, 0x3c, 0x1c,
    0x1, 0xc7, 0x0, 0x1c, 0xe0, 0x3, 0xb8, 0x0,
    0x3f, 0x0, 0x7, 0xe0, 0x0, 0xfc, 0x0, 0x1f,
    0x80, 0x3, 0xf0, 0x0, 0x7e, 0x0, 0xf, 0xc0,
    0x1, 0xdc, 0x0, 0x73, 0x80, 0xe, 0x38, 0x3,
    0x83, 0xc1, 0xe0, 0x3f, 0xf8, 0x1, 0xfc, 0x0,

    /* U+0051 "Q" */
    0x3, 0xf8, 0x1, 0xff, 0xc0, 0x78, 0x3c, 0x1c,
    0x1, 0xc7, 0x0, 0x1c, 0xe0, 0x3, 0xb8, 0x0,
    0x3f, 0x0, 0x7, 0xe0, 0x0, 0xfc, 0x0, 0x1f,
    0x80, 0x3, 0xf0, 0x0, 0x7e, 0x0, 0xf, 0xc0,
    0x1, 0xdc, 0x0, 0x73, 0x80, 0xe, 0x38, 0x3,
    0x83, 0xc1, 0xe0, 0x3f, 0xf8, 0x1, 0xfc, 0x0,
    0x1, 0xc0, 0x0, 0x3c, 0x0, 0x3, 0xc0, 0x0,
    0x3c, 0x0, 0x3, 0xc0,

    /* U+0052 "R" */
    0xff, 0x83, 0xff, 0x8e, 0xf, 0x38, 0x1e, 0xe0,
    0x3b, 0x80, 0xee, 0x3, 0xb8, 0xe, 0xe0, 0x73,
    0x83, 0xcf, 0xfc, 0x3f, 0xe0, 0xe1, 0x83, 0x87,
    0xe, 0xe, 0x38, 0x18, 0xe0, 0x73, 0x80, 0xee,
    0x3, 0xb8, 0x7,

    /* U+0053 "S" */
    0x7, 0xf0, 0x7f, 0xe3, 0x81, 0x9c, 0x0, 0x70,
    0x1, 0xc0, 0x7, 0x0, 0xe, 0x0, 0x3f, 0x0,
    0x7f, 0x0, 0x7f, 0x0, 0x3e, 0x0, 0x3c, 0x0,
    0x70, 0x1, 0xc0, 0x7, 0x0, 0x3f, 0x81, 0xef,
    0xff, 0xf, 0xf0,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xfc, 0xe, 0x0, 0x1c, 0x0,
    0x38, 0x0, 0x70, 0x0, 0xe0, 0x1, 0xc0, 0x3,
    0x80, 0x7, 0x0, 0xe, 0x0, 0x1c, 0x0, 0x38,
    0x0, 0x70, 0x0, 0xe0, 0x1, 0xc0, 0x3, 0x80,
    0x7, 0x0, 0xe, 0x0, 0x1c, 0x0,

    /* U+0055 "U" */
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0xf,
    0x70, 0xe, 0x38, 0x3c, 0x1f, 0xf8, 0xf, 0xe0,

    /* U+0058 "X" */
    0x70, 0x6, 0x70, 0xe, 0x38, 0xc, 0x1c, 0x1c,
    0x1c, 0x38, 0xe, 0x30, 0x6, 0x70, 0x7, 0xe0,
    0x3, 0xc0, 0x1, 0xc0, 0x3, 0xc0, 0x3, 0xe0,
    0x6, 0x70, 0xe, 0x70, 0xc, 0x38, 0x1c, 0x18,
    0x38, 0x1c, 0x30, 0xe, 0x70, 0x6, 0xe0, 0x7,

    /* U+0061 "a" */
    0xf, 0xc3, 0xfe, 0x10, 0xf0, 0x7, 0x0, 0x70,
    0x7, 0x1f, 0xf7, 0xff, 0xf0, 0x7e, 0x7, 0xe0,
    0x7e, 0xf, 0xf1, 0xf7, 0xf7, 0x3e, 0x30,

    /* U+0062 "b" */
    0xe0, 0x3, 0x80, 0xe, 0x0, 0x38, 0x0, 0xe0,
    0x3, 0x80, 0xe, 0x7c, 0x3b, 0xfc, 0xf8, 0x7b,
    0xc0, 0xee, 0x1, 0xf8, 0x7, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f, 0xc0, 0xef,
    0x87, 0xbb, 0xfc, 0xc7, 0xc0,

    /* U+0063 "c" */
    0xf, 0xc7, 0xf9, 0xe1, 0x38, 0xe, 0x1, 0xc0,
    0x38, 0x7, 0x0, 0xe0, 0x1c, 0x3, 0x80, 0x38,
    0x7, 0x82, 0x7f, 0xc3, 0xf0,

    /* U+0064 "d" */
    0x0, 0x1c, 0x0, 0x70, 0x1, 0xc0, 0x7, 0x0,
    0x1c, 0x0, 0x70, 0xf9, 0xcf, 0xf7, 0x78, 0x7d,
    0xc0, 0xfe, 0x1, 0xf8, 0x7, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1d, 0xc0, 0xf7,
    0x87, 0xcf, 0xf7, 0xf, 0x9c,

    /* U+0065 "e" */
    0xf, 0x81, 0xff, 0x1e, 0x3c, 0xe0, 0xee, 0x3,
    0xf0, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x7, 0x0,
    0x38, 0x0, 0xe0, 0x7, 0x81, 0x1f, 0xf8, 0x3f,
    0x80,

    /* U+0067 "g" */
    0xf, 0x9c, 0xff, 0x77, 0x87, 0xdc, 0xf, 0xe0,
    0x1f, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7e, 0x1, 0xdc, 0xf, 0x78, 0x7c, 0xff,
    0x70, 0xf9, 0xc0, 0x7, 0x0, 0x1c, 0x0, 0x70,
    0x3, 0x98, 0x1e, 0x7f, 0xf0, 0x7f, 0x0,

    /* U+0069 "i" */
    0xff, 0x80, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,

    /* U+006D "m" */
    0xe7, 0xc3, 0xe7, 0x7f, 0x7f, 0xbe, 0x3f, 0x1f,
    0xe0, 0xf0, 0x7e, 0x7, 0x3, 0xf0, 0x38, 0x1f,
    0x81, 0xc0, 0xfc, 0xe, 0x7, 0xe0, 0x70, 0x3f,
    0x3, 0x81, 0xf8, 0x1c, 0xf, 0xc0, 0xe0, 0x7e,
    0x7, 0x3, 0xf0, 0x38, 0x1f, 0x81, 0xc0, 0xe0,

    /* U+006E "n" */
    0xe7, 0xc7, 0x7f, 0xbe, 0x1d, 0xe0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x7e, 0x3, 0xf0, 0x1f, 0x80,
    0xe0,

    /* U+006F "o" */
    0xf, 0xc0, 0xff, 0xc7, 0x87, 0x9c, 0xe, 0xe0,
    0x1f, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7e, 0x1, 0xdc, 0xe, 0x78, 0x78, 0xff,
    0xc0, 0xfc, 0x0,

    /* U+0070 "p" */
    0xe7, 0xc3, 0xbf, 0xcf, 0x87, 0xbc, 0xe, 0xe0,
    0x1f, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7e, 0x3, 0xfc, 0xe, 0xf8, 0x7b, 0xbf,
    0xce, 0x7c, 0x38, 0x0, 0xe0, 0x3, 0x80, 0xe,
    0x0, 0x38, 0x0, 0xe0, 0x3, 0x80, 0x0,

    /* U+0072 "r" */
    0xe7, 0xf7, 0xff, 0x1e, 0xf, 0x7, 0x3, 0x81,
    0xc0, 0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7, 0x3,
    0x80,

    /* U+0073 "s" */
    0x1f, 0x8f, 0xfb, 0xc3, 0x70, 0xe, 0x1, 0xe0,
    0x1f, 0x80, 0xfc, 0x7, 0xc0, 0x3c, 0x3, 0x80,
    0x7c, 0x1f, 0xff, 0x9f, 0xc0,

    /* U+0074 "t" */
    0x18, 0xc, 0x6, 0x7, 0x7, 0xff, 0xfc, 0xe0,
    0x70, 0x38, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0,
    0xe0, 0x70, 0x3c, 0xf, 0xc3, 0xe0,

    /* U+0075 "u" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0xff, 0xf, 0xbf, 0xdc, 0xfc,
    0xe0,

    /* U+0077 "w" */
    0xe0, 0x38, 0x1d, 0x81, 0xe0, 0x67, 0x7, 0x81,
    0x9c, 0x1e, 0xe, 0x30, 0xfc, 0x30, 0xc3, 0x30,
    0xc3, 0x8c, 0xc7, 0xe, 0x73, 0x9c, 0x19, 0x86,
    0x60, 0x66, 0x19, 0x81, 0xf8, 0x7e, 0x7, 0xc0,
    0xf8, 0xf, 0x3, 0xc0, 0x3c, 0xf, 0x0, 0xe0,
    0x3c, 0x0,

    /* U+0079 "y" */
    0xe0, 0x1f, 0x80, 0x66, 0x3, 0x9c, 0xe, 0x70,
    0x30, 0xc1, 0xc3, 0x87, 0x6, 0x18, 0x1c, 0xe0,
    0x73, 0x0, 0xcc, 0x3, 0xf0, 0x7, 0x80, 0x1e,
    0x0, 0x78, 0x0, 0xc0, 0x7, 0x0, 0x18, 0x0,
    0xe0, 0x7, 0x0, 0xfc, 0x3, 0xc0, 0x0,

    /* U+0410 "А" */
    0x0, 0xc0, 0x0, 0x78, 0x0, 0x1e, 0x0, 0xf,
    0x80, 0x3, 0x70, 0x0, 0xcc, 0x0, 0x73, 0x80,
    0x18, 0xe0, 0xe, 0x18, 0x3, 0x87, 0x0, 0xc0,
    0xc0, 0x70, 0x38, 0x1f, 0xfe, 0x7, 0xff, 0x83,
    0x80, 0x70, 0xc0, 0x1c, 0x70, 0x3, 0x1c, 0x0,
    0xe6, 0x0, 0x1b, 0x80, 0x7,

    /* U+0412 "В" */
    0xff, 0xc3, 0xff, 0xce, 0xf, 0x38, 0xe, 0xe0,
    0x3b, 0x80, 0xee, 0x3, 0xb8, 0xc, 0xe0, 0x73,
    0xff, 0xf, 0xfe, 0x38, 0x1e, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x3f, 0x81, 0xef,
    0xff, 0x3f, 0xf0,

    /* U+0414 "Д" */
    0x7, 0xff, 0x80, 0x7f, 0xf8, 0x7, 0x3, 0x80,
    0x70, 0x38, 0x7, 0x3, 0x80, 0x70, 0x38, 0x7,
    0x3, 0x80, 0x70, 0x38, 0x7, 0x3, 0x80, 0x70,
    0x38, 0x7, 0x3, 0x80, 0x70, 0x38, 0x6, 0x3,
    0x80, 0xe0, 0x38, 0xe, 0x3, 0x80, 0xc0, 0x38,
    0x1c, 0x3, 0x81, 0x80, 0x38, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe0, 0x0, 0x7e, 0x0, 0x7, 0xe0,
    0x0, 0x7e, 0x0, 0x7,

    /* U+0415 "Е" */
    0xff, 0xff, 0xff, 0x80, 0x70, 0xe, 0x1, 0xc0,
    0x38, 0x7, 0x0, 0xe0, 0x1f, 0xff, 0xff, 0xf0,
    0xe, 0x1, 0xc0, 0x38, 0x7, 0x0, 0xe0, 0x1c,
    0x3, 0xff, 0xff, 0xf0,

    /* U+0417 "З" */
    0x3f, 0x87, 0xff, 0x18, 0x3c, 0x0, 0xf0, 0x3,
    0x80, 0x1c, 0x0, 0xe0, 0xe, 0x0, 0xe1, 0xfe,
    0xf, 0xf0, 0x1, 0xe0, 0x7, 0x80, 0x1c, 0x0,
    0xe0, 0x7, 0x0, 0x7e, 0x7, 0xbf, 0xf8, 0xff,
    0x0,

    /* U+0418 "И" */
    0xe0, 0xf, 0xe0, 0xf, 0xe0, 0x1f, 0xe0, 0x1f,
    0xe0, 0x37, 0xe0, 0x77, 0xe0, 0x67, 0xe0, 0xe7,
    0xe0, 0xc7, 0xe1, 0x87, 0xe3, 0x87, 0xe3, 0x7,
    0xe7, 0x7, 0xe6, 0x7, 0xee, 0x7, 0xec, 0x7,
    0xf8, 0x7, 0xf8, 0x7, 0xf0, 0x7, 0xf0, 0x7,

    /* U+041A "К" */
    0xe0, 0x1d, 0xc0, 0x33, 0x80, 0xe7, 0x3, 0x8e,
    0x6, 0x1c, 0x1c, 0x38, 0x70, 0x70, 0xc0, 0xe3,
    0x81, 0xfe, 0x3, 0xfc, 0x7, 0x1c, 0xe, 0x1c,
    0x1c, 0x38, 0x38, 0x38, 0x70, 0x38, 0xe0, 0x39,
    0xc0, 0x73, 0x80, 0x77, 0x0, 0x70,

    /* U+041B "Л" */
    0x7, 0xff, 0xc1, 0xff, 0xf0, 0x70, 0x1c, 0x1c,
    0x7, 0x7, 0x1, 0xc1, 0xc0, 0x70, 0x70, 0x1c,
    0x1c, 0x7, 0x7, 0x1, 0xc1, 0xc0, 0x70, 0x70,
    0x1c, 0x1c, 0x7, 0x7, 0x1, 0xc1, 0xc0, 0x70,
    0x70, 0x1c, 0x18, 0x7, 0xe, 0x1, 0xc3, 0x80,
    0x7f, 0xc0, 0x1f, 0xe0, 0x7,

    /* U+041D "Н" */
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,

    /* U+041E "О" */
    0x3, 0xf0, 0x3, 0xff, 0x1, 0xc0, 0xf0, 0xe0,
    0x1c, 0x70, 0x3, 0x9c, 0x0, 0xee, 0x0, 0x1f,
    0x80, 0x7, 0xe0, 0x1, 0xf8, 0x0, 0x7e, 0x0,
    0x1f, 0x80, 0x7, 0xe0, 0x1, 0xf8, 0x0, 0x77,
    0x0, 0x39, 0xc0, 0xe, 0x38, 0x7, 0x7, 0x83,
    0x80, 0xff, 0xc0, 0xf, 0xc0,

    /* U+041F "П" */
    0xff, 0xff, 0xff, 0xff, 0x80, 0x3f, 0x0, 0x7e,
    0x0, 0xfc, 0x1, 0xf8, 0x3, 0xf0, 0x7, 0xe0,
    0xf, 0xc0, 0x1f, 0x80, 0x3f, 0x0, 0x7e, 0x0,
    0xfc, 0x1, 0xf8, 0x3, 0xf0, 0x7, 0xe0, 0xf,
    0xc0, 0x1f, 0x80, 0x3f, 0x0, 0x70,

    /* U+0420 "Р" */
    0xff, 0x87, 0xff, 0x38, 0x3d, 0xc0, 0xfe, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x77, 0x7,
    0xbf, 0xf9, 0xff, 0xe, 0x0, 0x70, 0x3, 0x80,
    0x1c, 0x0, 0xe0, 0x7, 0x0, 0x38, 0x1, 0xc0,
    0x0,

    /* U+0421 "С" */
    0x3, 0xf8, 0x1f, 0xfc, 0x78, 0x11, 0xc0, 0x7,
    0x0, 0xe, 0x0, 0x38, 0x0, 0x70, 0x0, 0xe0,
    0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0,
    0x1c, 0x0, 0x1c, 0x0, 0x38, 0x0, 0x38, 0x0,
    0x7c, 0xc, 0x3f, 0xf8, 0x1f, 0xe0,

    /* U+0422 "Т" */
    0xff, 0xff, 0xff, 0xfc, 0xe, 0x0, 0x1c, 0x0,
    0x38, 0x0, 0x70, 0x0, 0xe0, 0x1, 0xc0, 0x3,
    0x80, 0x7, 0x0, 0xe, 0x0, 0x1c, 0x0, 0x38,
    0x0, 0x70, 0x0, 0xe0, 0x1, 0xc0, 0x3, 0x80,
    0x7, 0x0, 0xe, 0x0, 0x1c, 0x0,

    /* U+0423 "У" */
    0xe0, 0x3, 0xb0, 0x1, 0x9c, 0x1, 0xc6, 0x0,
    0xc3, 0x80, 0xe0, 0xc0, 0x70, 0x70, 0x30, 0x18,
    0x38, 0xe, 0x18, 0x3, 0x1c, 0x1, 0xcc, 0x0,
    0x6e, 0x0, 0x3e, 0x0, 0xf, 0x0, 0x7, 0x0,
    0x3, 0x80, 0x1, 0x80, 0x1, 0xc0, 0xf, 0xc0,
    0x7, 0x80, 0x0,

    /* U+0424 "Ф" */
    0x0, 0xe0, 0x0, 0x1c, 0x0, 0x1f, 0xf0, 0xf,
    0xff, 0x83, 0xce, 0x78, 0xe1, 0xc3, 0xbc, 0x38,
    0x7f, 0x7, 0x7, 0xe0, 0xe0, 0xfc, 0x1c, 0x1f,
    0x83, 0x83, 0xf0, 0x70, 0x7f, 0xe, 0x1e, 0xe1,
    0xc3, 0x8f, 0x39, 0xe0, 0xff, 0xf8, 0x7, 0xfc,
    0x0, 0x1c, 0x0, 0x3, 0x80, 0x0, 0x70, 0x0,

    /* U+0427 "Ч" */
    0xe0, 0x1f, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0,
    0x1f, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0xc0, 0x77, 0x83, 0xcf, 0xff, 0x1f, 0xdc, 0x0,
    0x70, 0x1, 0xc0, 0x7, 0x0, 0x1c, 0x0, 0x70,
    0x1, 0xc0, 0x7,

    /* U+0428 "Ш" */
    0xe0, 0x38, 0xf, 0xc0, 0x70, 0x1f, 0x80, 0xe0,
    0x3f, 0x1, 0xc0, 0x7e, 0x3, 0x80, 0xfc, 0x7,
    0x1, 0xf8, 0xe, 0x3, 0xf0, 0x1c, 0x7, 0xe0,
    0x38, 0xf, 0xc0, 0x70, 0x1f, 0x80, 0xe0, 0x3f,
    0x1, 0xc0, 0x7e, 0x3, 0x80, 0xfc, 0x7, 0x1,
    0xf8, 0xe, 0x3, 0xf0, 0x1c, 0x7, 0xe0, 0x38,
    0xf, 0xc0, 0x70, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf0,

    /* U+042D "Э" */
    0x3f, 0xc0, 0x7f, 0xf0, 0x60, 0x78, 0x0, 0x1c,
    0x0, 0x1e, 0x0, 0xe, 0x0, 0xf, 0x0, 0x7,
    0x0, 0x7, 0x1f, 0xff, 0x1f, 0xff, 0x0, 0x7,
    0x0, 0x7, 0x0, 0xf, 0x0, 0xe, 0x0, 0xe,
    0x0, 0x1c, 0xc0, 0x78, 0xff, 0xf0, 0x3f, 0xc0,

    /* U+0430 "а" */
    0x1f, 0x87, 0xfe, 0x20, 0xf0, 0x7, 0x0, 0x70,
    0x7, 0x1f, 0xf7, 0xff, 0x70, 0x7e, 0x7, 0xe0,
    0x7e, 0xf, 0xf1, 0xf7, 0xf7, 0x3e, 0x30,

    /* U+0431 "б" */
    0x0, 0x38, 0xf, 0xe0, 0xff, 0xf, 0x80, 0x38,
    0x1, 0xc0, 0x6, 0x0, 0x19, 0xf0, 0xef, 0xf3,
    0xe1, 0xef, 0x3, 0xb8, 0x7, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1d, 0xc0, 0xe7,
    0x3, 0x8e, 0x1c, 0x1f, 0xe0, 0x3f, 0x0,

    /* U+0432 "в" */
    0xff, 0xcf, 0xfe, 0xe0, 0xfe, 0x7, 0xe0, 0x7e,
    0xe, 0xff, 0xcf, 0xfc, 0xe0, 0xee, 0x7, 0xe0,
    0x7e, 0x7, 0xe0, 0xff, 0xfe, 0xff, 0x80,

    /* U+0433 "г" */
    0xff, 0xff, 0xfe, 0x3, 0x80, 0xe0, 0x38, 0xe,
    0x3, 0x80, 0xe0, 0x38, 0xe, 0x3, 0x80, 0xe0,
    0x38, 0xe, 0x0,

    /* U+0434 "д" */
    0xf, 0xfc, 0x7, 0xfe, 0x3, 0x7, 0x1, 0x83,
    0x80, 0xc1, 0xc0, 0x60, 0xe0, 0x30, 0x70, 0x18,
    0x38, 0xc, 0x1c, 0xe, 0xe, 0x6, 0x7, 0x3,
    0x3, 0x83, 0x81, 0xc7, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0,
    0xe0,

    /* U+0435 "е" */
    0xf, 0x81, 0xff, 0x1e, 0x3c, 0xe0, 0xee, 0x3,
    0xf0, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x7, 0x0,
    0x38, 0x0, 0xe0, 0x7, 0x81, 0x1f, 0xf8, 0x3f,
    0x80,

    /* U+0436 "ж" */
    0xe0, 0x70, 0x33, 0x83, 0x83, 0xc, 0x1c, 0x38,
    0x30, 0xe3, 0x81, 0xc7, 0x18, 0x7, 0x39, 0xc0,
    0x1f, 0xfc, 0x1, 0xff, 0xe0, 0xe, 0x73, 0x80,
    0xe3, 0x8c, 0x6, 0x1c, 0x70, 0x70, 0xe1, 0xc7,
    0x7, 0xe, 0x30, 0x38, 0x3b, 0x81, 0xc0, 0xc0,

    /* U+0437 "з" */
    0x3f, 0x87, 0xfe, 0x60, 0xf0, 0x7, 0x0, 0x70,
    0xe, 0x1f, 0xc1, 0xfc, 0x0, 0xe0, 0x7, 0x0,
    0x70, 0x7, 0xc0, 0xff, 0xfe, 0x7f, 0x80,

    /* U+0438 "и" */
    0xe0, 0x7f, 0x3, 0xf8, 0x3f, 0xc1, 0xfe, 0x1b,
    0xf0, 0xdf, 0x8c, 0xfc, 0xe7, 0xe6, 0x3f, 0x71,
    0xfb, 0xf, 0xf0, 0x7f, 0x83, 0xf8, 0x1f, 0xc0,
    0xe0,

    /* U+0439 "й" */
    0x18, 0xe0, 0xc6, 0x6, 0x30, 0x1f, 0x80, 0x70,
    0x0, 0x3, 0x81, 0xfc, 0xf, 0xe0, 0xff, 0x7,
    0xf8, 0x6f, 0xc3, 0x7e, 0x33, 0xf3, 0x9f, 0x98,
    0xfd, 0xc7, 0xec, 0x3f, 0xc1, 0xfe, 0xf, 0xe0,
    0x7f, 0x3, 0x80,

    /* U+043A "к" */
    0xe0, 0x7e, 0xe, 0xe0, 0xce, 0x1c, 0xe3, 0x8e,
    0x70, 0xfe, 0xf, 0xf0, 0xe7, 0xe, 0x38, 0xe1,
    0xce, 0x1c, 0xe0, 0xee, 0x6, 0xe0, 0x70,

    /* U+043B "л" */
    0xf, 0xfe, 0x1f, 0xfc, 0x30, 0x38, 0x60, 0x70,
    0xc0, 0xe1, 0x81, 0xc3, 0x3, 0x86, 0x7, 0xc,
    0xe, 0x18, 0x1c, 0x30, 0x38, 0xe0, 0x71, 0x80,
    0xff, 0x1, 0xfc, 0x3, 0x80,

    /* U+043C "м" */
    0xe0, 0x7, 0xf8, 0x7, 0xfc, 0x3, 0xff, 0x1,
    0xfd, 0x81, 0xbe, 0xc0, 0xdf, 0x70, 0xef, 0x98,
    0x67, 0xce, 0x73, 0xe3, 0x31, 0xf1, 0x98, 0xf8,
    0xf8, 0x7c, 0x3c, 0x3e, 0x1e, 0x1f, 0x6, 0xe,

    /* U+043D "н" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x7e, 0x3, 0xf0, 0x1f, 0x80,
    0xe0,

    /* U+043E "о" */
    0xf, 0xc0, 0xff, 0xc7, 0x87, 0x1c, 0xe, 0xe0,
    0x1f, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7e, 0x1, 0xdc, 0xe, 0x78, 0x78, 0xff,
    0xc0, 0xfc, 0x0,

    /* U+043F "п" */
    0xff, 0xff, 0xff, 0xe0, 0x7e, 0x7, 0xe0, 0x7e,
    0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x7e, 0x7, 0xe0,
    0x7e, 0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x70,

    /* U+0440 "р" */
    0xe7, 0xc3, 0xbf, 0xcf, 0x87, 0xbc, 0xe, 0xe0,
    0x1f, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7e, 0x3, 0xfc, 0xe, 0xf8, 0x7b, 0xbf,
    0xce, 0x7c, 0x38, 0x0, 0xe0, 0x3, 0x80, 0xe,
    0x0, 0x38, 0x0, 0xe0, 0x3, 0x80, 0x0,

    /* U+0441 "с" */
    0xf, 0xe7, 0xfd, 0xe0, 0xb8, 0xf, 0x1, 0xc0,
    0x38, 0x7, 0x0, 0xe0, 0x1c, 0x3, 0x80, 0x38,
    0x7, 0x82, 0x7f, 0xc3, 0xf0,

    /* U+0442 "т" */
    0xff, 0xff, 0xff, 0x7, 0x0, 0x70, 0x7, 0x0,
    0x70, 0x7, 0x0, 0x70, 0x7, 0x0, 0x70, 0x7,
    0x0, 0x70, 0x7, 0x0, 0x70, 0x7, 0x0,

    /* U+0443 "у" */
    0xc0, 0x1f, 0x80, 0x66, 0x3, 0x9c, 0xc, 0x70,
    0x30, 0xc1, 0xc3, 0x86, 0x6, 0x38, 0x18, 0xe0,
    0x73, 0x0, 0xdc, 0x3, 0x70, 0xf, 0x80, 0x1e,
    0x0, 0x70, 0x0, 0xc0, 0x7, 0x0, 0x18, 0x0,
    0xe0, 0x7, 0x0, 0xfc, 0x3, 0xc0, 0x0,

    /* U+0444 "ф" */
    0x1, 0xc0, 0x0, 0x70, 0x0, 0x1c, 0x0, 0x7,
    0x0, 0x1, 0xc0, 0x0, 0x70, 0x0, 0x7f, 0x80,
    0x7f, 0xf8, 0x3d, 0xcf, 0x1c, 0x70, 0xe7, 0x1c,
    0x3b, 0x87, 0x7, 0xe1, 0xc1, 0xf8, 0x70, 0x7e,
    0x1c, 0x1f, 0x87, 0x7, 0x71, 0xc3, 0x9c, 0x70,
    0xe3, 0xdc, 0xf0, 0x7f, 0xf8, 0x7, 0xf8, 0x0,
    0x70, 0x0, 0x1c, 0x0, 0x7, 0x0, 0x1, 0xc0,
    0x0, 0x70, 0x0, 0x1c, 0x0, 0x7, 0x0,

    /* U+0445 "х" */
    0x60, 0x39, 0xc0, 0xc3, 0x87, 0x6, 0x38, 0x1c,
    0xc0, 0x3e, 0x0, 0x78, 0x1, 0xc0, 0x7, 0x80,
    0x37, 0x1, 0xcc, 0xe, 0x38, 0x30, 0x71, 0xc0,
    0xee, 0x3, 0x80,

    /* U+0446 "ц" */
    0xe0, 0x71, 0xc0, 0xe3, 0x81, 0xc7, 0x3, 0x8e,
    0x7, 0x1c, 0xe, 0x38, 0x1c, 0x70, 0x38, 0xe0,
    0x71, 0xc0, 0xe3, 0x81, 0xc7, 0x3, 0x8e, 0x7,
    0x1f, 0xff, 0xff, 0xff, 0x80, 0x7, 0x0, 0xe,
    0x0, 0x1c, 0x0, 0x38,

    /* U+0447 "ч" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xee, 0xf, 0x7f, 0xf8, 0xfd,
    0xc0, 0xe, 0x0, 0x70, 0x3, 0x80, 0x1c, 0x0,
    0xe0,

    /* U+0448 "ш" */
    0xe0, 0x70, 0x3f, 0x3, 0x81, 0xf8, 0x1c, 0xf,
    0xc0, 0xe0, 0x7e, 0x7, 0x3, 0xf0, 0x38, 0x1f,
    0x81, 0xc0, 0xfc, 0xe, 0x7, 0xe0, 0x70, 0x3f,
    0x3, 0x81, 0xf8, 0x1c, 0xf, 0xc0, 0xe0, 0x7e,
    0x7, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,

    /* U+0449 "щ" */
    0xe0, 0x70, 0x71, 0xc0, 0xe0, 0xe3, 0x81, 0xc1,
    0xc7, 0x3, 0x83, 0x8e, 0x7, 0x7, 0x1c, 0xe,
    0xe, 0x38, 0x1c, 0x1c, 0x70, 0x38, 0x38, 0xe0,
    0x70, 0x71, 0xc0, 0xe0, 0xe3, 0x81, 0xc1, 0xc7,
    0x3, 0x83, 0x8e, 0x7, 0x7, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x0, 0x7, 0x0, 0x0,
    0xe, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x38,

    /* U+044B "ы" */
    0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0xfe, 0xf, 0xff,
    0xc7, 0xe0, 0xf3, 0xf0, 0x39, 0xf8, 0x1c, 0xfc,
    0xe, 0x7e, 0xe, 0x3f, 0xff, 0x1f, 0xfe, 0xe,

    /* U+044C "ь" */
    0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0, 0xe0, 0xe,
    0x0, 0xff, 0x8f, 0xfe, 0xe0, 0xfe, 0x7, 0xe0,
    0x7e, 0x7, 0xe0, 0xff, 0xfe, 0xff, 0x80,

    /* U+044D "э" */
    0x7f, 0xf, 0xfc, 0x1, 0xe0, 0xe, 0x0, 0xf0,
    0x7, 0x3f, 0xf3, 0xff, 0x0, 0x70, 0x7, 0x0,
    0xf0, 0xe, 0x81, 0xcf, 0xf8, 0x7f, 0x0,

    /* U+044E "ю" */
    0xe0, 0x7e, 0x1c, 0x3f, 0xf3, 0x8f, 0xf, 0x71,
    0xc0, 0xee, 0x70, 0xf, 0xce, 0x1, 0xff, 0xc0,
    0x3f, 0xf8, 0x7, 0xe7, 0x0, 0xfc, 0xe0, 0x1f,
    0x9c, 0x3, 0xf1, 0xc0, 0xee, 0x3c, 0x3d, 0xc3,
    0xff, 0x38, 0x1f, 0x80,

    /* U+044F "я" */
    0xf, 0xf9, 0xff, 0xde, 0xe, 0xe0, 0x77, 0x3,
    0xb8, 0x1d, 0xe0, 0xe7, 0xff, 0xf, 0xf8, 0x71,
    0xc7, 0xe, 0x38, 0x73, 0x83, 0xb8, 0x1d, 0xc0,
    0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 116, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 121, .box_w = 3, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 183, .box_w = 8, .box_h = 7, .ofs_x = 2, .ofs_y = 13},
    {.bitmap_index = 16, .adv_w = 372, .box_w = 21, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 120, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 72, .adv_w = 144, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 74, .adv_w = 120, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 167, .box_w = 10, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 256, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 256, .box_w = 8, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 256, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 256, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 260, .adv_w = 256, .box_w = 13, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 256, .box_w = 13, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 256, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 256, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 256, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 120, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 436, .adv_w = 194, .box_w = 11, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 286, .box_w = 18, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 291, .box_w = 14, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 283, .box_w = 15, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 582, .adv_w = 327, .box_w = 16, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 622, .adv_w = 233, .box_w = 11, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 277, .box_w = 15, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 406, .box_w = 20, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 340, .box_w = 16, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 778, .adv_w = 350, .box_w = 19, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 826, .adv_w = 350, .box_w = 19, .box_h = 25, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 886, .adv_w = 279, .box_w = 14, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 921, .adv_w = 246, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 956, .adv_w = 249, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 994, .adv_w = 327, .box_w = 16, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1034, .adv_w = 263, .box_w = 16, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1074, .adv_w = 251, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1097, .adv_w = 276, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1134, .adv_w = 215, .box_w = 11, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1155, .adv_w = 276, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1192, .adv_w = 253, .box_w = 13, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1217, .adv_w = 276, .box_w = 14, .box_h = 22, .ofs_x = 2, .ofs_y = -7},
    {.bitmap_index = 1256, .adv_w = 116, .box_w = 3, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1264, .adv_w = 116, .box_w = 3, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1272, .adv_w = 419, .box_w = 21, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1312, .adv_w = 277, .box_w = 13, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1337, .adv_w = 271, .box_w = 14, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1364, .adv_w = 276, .box_w = 14, .box_h = 22, .ofs_x = 2, .ofs_y = -7},
    {.bitmap_index = 1403, .adv_w = 185, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1420, .adv_w = 215, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1441, .adv_w = 162, .box_w = 9, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1463, .adv_w = 277, .box_w = 13, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1488, .adv_w = 352, .box_w = 22, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1530, .adv_w = 228, .box_w = 14, .box_h = 22, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 1569, .adv_w = 286, .box_w = 18, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1614, .adv_w = 291, .box_w = 14, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1649, .adv_w = 327, .box_w = 20, .box_h = 24, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1709, .adv_w = 249, .box_w = 11, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1737, .adv_w = 258, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1770, .adv_w = 339, .box_w = 16, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1810, .adv_w = 280, .box_w = 15, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1848, .adv_w = 313, .box_w = 18, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1893, .adv_w = 333, .box_w = 16, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1933, .adv_w = 341, .box_w = 18, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1978, .adv_w = 328, .box_w = 15, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2016, .adv_w = 271, .box_w = 13, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2049, .adv_w = 287, .box_w = 15, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2087, .adv_w = 249, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2125, .adv_w = 276, .box_w = 17, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2168, .adv_w = 366, .box_w = 19, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2216, .adv_w = 302, .box_w = 14, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2251, .adv_w = 464, .box_w = 23, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2309, .adv_w = 290, .box_w = 16, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2349, .adv_w = 249, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2372, .adv_w = 267, .box_w = 14, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2411, .adv_w = 253, .box_w = 12, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2434, .adv_w = 196, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2453, .adv_w = 272, .box_w = 17, .box_h = 19, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2494, .adv_w = 247, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2519, .adv_w = 340, .box_w = 21, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2559, .adv_w = 219, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2582, .adv_w = 278, .box_w = 13, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2607, .adv_w = 278, .box_w = 13, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2642, .adv_w = 238, .box_w = 12, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2665, .adv_w = 263, .box_w = 15, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2694, .adv_w = 344, .box_w = 17, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2726, .adv_w = 275, .box_w = 13, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2751, .adv_w = 266, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2778, .adv_w = 271, .box_w = 12, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2801, .adv_w = 272, .box_w = 14, .box_h = 22, .ofs_x = 2, .ofs_y = -7},
    {.bitmap_index = 2840, .adv_w = 221, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2861, .adv_w = 208, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2884, .adv_w = 228, .box_w = 14, .box_h = 22, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 2923, .adv_w = 330, .box_w = 18, .box_h = 28, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 2986, .adv_w = 229, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3013, .adv_w = 274, .box_w = 15, .box_h = 19, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 3049, .adv_w = 264, .box_w = 13, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3074, .adv_w = 401, .box_w = 21, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3114, .adv_w = 402, .box_w = 23, .box_h = 19, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 3169, .adv_w = 340, .box_w = 17, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3201, .adv_w = 244, .box_w = 12, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3224, .adv_w = 221, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3247, .adv_w = 358, .box_w = 19, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3283, .adv_w = 258, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_0[] = {
    0, 1, 2, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 4, 5, 6, 7,
    8, 9, 10, 11, 12, 13, 14, 15,
    16, 17, 0, 18, 0, 0, 0, 19,
    0, 20, 21, 22, 23, 0, 24, 0,
    0, 0, 0, 25, 0, 26, 27, 28,
    0, 29, 30, 31, 32, 33, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0,
    0, 35, 36, 37, 38, 39, 0, 40,
    0, 41, 0, 0, 42, 43, 44, 45,
    46, 0, 47, 48, 49, 50, 0, 51,
    0, 52
};

static const uint8_t glyph_id_ofs_list_1[] = {
    0, 0, 1, 0, 2, 3, 0, 4,
    5, 0, 6, 7, 0, 8, 9, 10,
    11, 12, 13, 14, 15, 0, 0, 16,
    17, 0, 0, 0, 0, 18
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] = {
    {
        .range_start = 32, .range_length = 90, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_0, .list_length = 90, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 1040, .range_length = 30, .glyph_id_start = 54,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_1, .list_length = 30, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 1072, .range_length = 26, .glyph_id_start = 73,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1099, .range_length = 5, .glyph_id_start = 99,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 4,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ruLittleTitle = {
#else
lv_font_t ruLittleTitle = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 40,          /*The maximum line height required by the font*/
    .base_line = 9,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if RULITTLETITLE*/

