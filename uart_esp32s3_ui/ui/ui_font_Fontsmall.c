/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font C:/Users/HINA/SquareLine/assets/Kanit-SemiBold.ttf -o C:/Users/HINA/SquareLine/assets\ui_font_Fontsmall.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONTSMALL
#define UI_FONT_FONTSMALL 1
#endif

#if UI_FONT_FONTSMALL

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0x3, 0xf0,

    /* U+0022 "\"" */
    0xff, 0xff, 0xff,

    /* U+0023 "#" */
    0xe, 0x60, 0xc6, 0x1c, 0xe7, 0xff, 0x7f, 0xf1,
    0x9c, 0x39, 0x8f, 0xfe, 0xff, 0xe7, 0x38, 0x73,
    0x6, 0x30,

    /* U+0024 "$" */
    0x18, 0xc, 0x1f, 0xdf, 0xed, 0x86, 0xc3, 0xe0,
    0xf8, 0x3f, 0xf, 0xc6, 0xf3, 0x7f, 0xf7, 0xf0,
    0x60,

    /* U+0025 "%" */
    0x78, 0xe7, 0xee, 0x33, 0x71, 0x9f, 0xf, 0xf8,
    0x3f, 0x80, 0x1f, 0xc1, 0xff, 0xf, 0x98, 0xec,
    0xc7, 0x7e, 0x71, 0xe0,

    /* U+0026 "&" */
    0x3e, 0xf, 0xe1, 0xdc, 0x3b, 0x83, 0x60, 0x78,
    0x1f, 0x9f, 0xbb, 0xe7, 0xfc, 0x7d, 0xff, 0x9f,
    0x20,

    /* U+0027 "'" */
    0xff, 0xf0,

    /* U+0028 "(" */
    0x39, 0xc7, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x1c, 0x70, 0xe0,

    /* U+0029 ")" */
    0x70, 0xe3, 0x8f, 0x1c, 0x71, 0xc7, 0x1c, 0x73,
    0xce, 0x39, 0xc0,

    /* U+002A "*" */
    0x33, 0xff, 0xde, 0x79, 0x20,

    /* U+002B "+" */
    0x38, 0x73, 0xff, 0xf3, 0x87, 0xe, 0x0,

    /* U+002C "," */
    0xdb, 0x60,

    /* U+002D "-" */
    0xff, 0xfc,

    /* U+002E "." */
    0xfc,

    /* U+002F "/" */
    0xe, 0x38, 0x70, 0xe3, 0x87, 0xe, 0x38, 0x70,
    0xe3, 0x87, 0xe, 0x0,

    /* U+0030 "0" */
    0x1f, 0xf, 0xf9, 0xc7, 0x70, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xee, 0x39, 0xff, 0xf,
    0x80,

    /* U+0031 "1" */
    0x7f, 0xfe, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x70,

    /* U+0032 "2" */
    0xfc, 0xfe, 0x87, 0x7, 0x7, 0xf, 0x1e, 0x3c,
    0x78, 0x70, 0xff, 0xff,

    /* U+0033 "3" */
    0x7e, 0x7f, 0xa0, 0xe0, 0x70, 0x39, 0xf8, 0xfc,
    0x7, 0x3, 0xc1, 0xff, 0xdf, 0xc0,

    /* U+0034 "4" */
    0x3, 0x81, 0xe0, 0xf8, 0x7e, 0x1b, 0x8c, 0xe7,
    0x3b, 0xff, 0xff, 0xc0, 0xe0, 0x38, 0xe,

    /* U+0035 "5" */
    0xfe, 0xfe, 0xe0, 0xe0, 0xfc, 0xfe, 0x7, 0x7,
    0x7, 0x8f, 0xfe, 0xfc,

    /* U+0036 "6" */
    0x1f, 0x9f, 0xe7, 0xb, 0x80, 0xff, 0x3f, 0xee,
    0x1f, 0x87, 0xe1, 0xfc, 0xf7, 0xf8, 0xfc,

    /* U+0037 "7" */
    0xff, 0xff, 0x7, 0xe, 0xe, 0x1c, 0x1c, 0x1c,
    0x38, 0x38, 0x38, 0x70,

    /* U+0038 "8" */
    0x3f, 0x1f, 0xee, 0x1f, 0x87, 0xf3, 0xdf, 0xe7,
    0xfb, 0x8f, 0xe1, 0xf8, 0x77, 0xf8, 0xfc,

    /* U+0039 "9" */
    0x3f, 0x1f, 0xef, 0x3f, 0x87, 0xe1, 0xf8, 0x77,
    0xfc, 0xff, 0x1, 0xc0, 0xe7, 0xf9, 0xf8,

    /* U+003A ":" */
    0xfc, 0x0, 0x3f,

    /* U+003B ";" */
    0x77, 0x0, 0x0, 0x77, 0x6e,

    /* U+003C "<" */
    0x0, 0x83, 0xc7, 0xef, 0xcf, 0x87, 0x83, 0xf0,
    0x7e, 0xf, 0x81, 0xc0, 0x20,

    /* U+003D "=" */
    0xff, 0xfc, 0x7, 0xff, 0xe0,

    /* U+003E ">" */
    0x80, 0x70, 0x3e, 0xf, 0xc0, 0xf8, 0x3c, 0x7f,
    0xf8, 0xf0, 0x60, 0x0, 0x0,

    /* U+003F "?" */
    0xfc, 0xfe, 0x7, 0x7, 0x7, 0xe, 0x1c, 0x38,
    0x38, 0x0, 0x38, 0x38,

    /* U+0040 "@" */
    0xf, 0xc1, 0xff, 0x1c, 0x1c, 0xdf, 0x3c, 0xfd,
    0xe0, 0x6f, 0x3f, 0x7b, 0x1f, 0xdf, 0xf7, 0x78,
    0x1c, 0x0, 0x7f, 0x80, 0xfc, 0x0,

    /* U+0041 "A" */
    0xe, 0x1, 0xf0, 0x1f, 0x1, 0xb0, 0x3b, 0x83,
    0x98, 0x31, 0xc7, 0xfc, 0x7f, 0xce, 0xe, 0xe0,
    0xee, 0xe,

    /* U+0042 "B" */
    0xff, 0xbf, 0xfe, 0x1f, 0x87, 0xe1, 0xff, 0xef,
    0xfb, 0x87, 0xe1, 0xf8, 0x7f, 0xff, 0xfc,

    /* U+0043 "C" */
    0x1f, 0xcf, 0xf7, 0x7, 0x80, 0xe0, 0x38, 0xe,
    0x3, 0x80, 0xe0, 0x1c, 0x13, 0xfc, 0x7f,

    /* U+0044 "D" */
    0xfe, 0x3f, 0xee, 0x3b, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xf8, 0xef, 0xfb, 0xf8,

    /* U+0045 "E" */
    0xff, 0xff, 0xf8, 0x1c, 0xe, 0x7, 0xfb, 0xfd,
    0xc0, 0xe0, 0x70, 0x3f, 0xff, 0xf0,

    /* U+0046 "F" */
    0xff, 0xff, 0xf8, 0x1c, 0xe, 0x7, 0xfb, 0xfd,
    0xc0, 0xe0, 0x70, 0x38, 0x1c, 0x0,

    /* U+0047 "G" */
    0x1f, 0xc7, 0xf9, 0xe0, 0x78, 0xe, 0x1, 0xc7,
    0xf8, 0xff, 0x7, 0xe0, 0xee, 0x1c, 0xff, 0x8f,
    0xe0,

    /* U+0048 "H" */
    0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1, 0xff, 0xff,
    0xff, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0x87,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0xe, 0x1c, 0x38, 0x70, 0xe1, 0xc3, 0x87, 0xe,
    0x1f, 0xf7, 0xc0,

    /* U+004B "K" */
    0xe1, 0xdc, 0x73, 0x9c, 0x77, 0xf, 0xe1, 0xfc,
    0x3f, 0x87, 0xb8, 0xe7, 0x1c, 0x73, 0x87, 0x70,
    0xe0,

    /* U+004C "L" */
    0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7, 0x3, 0x81,
    0xc0, 0xe0, 0x70, 0x3f, 0xff, 0xf0,

    /* U+004D "M" */
    0xe0, 0x7f, 0xf, 0xf0, 0xff, 0x9f, 0xf9, 0xff,
    0x9f, 0xef, 0x7e, 0xf7, 0xe6, 0x7e, 0x67, 0xe0,
    0x7e, 0x7,

    /* U+004E "N" */
    0xe1, 0xfc, 0x7f, 0x1f, 0xe7, 0xf9, 0xff, 0x7e,
    0xff, 0x9f, 0xe7, 0xf8, 0xfe, 0x3f, 0x87,

    /* U+004F "O" */
    0x1f, 0x87, 0xfe, 0x70, 0xee, 0x7, 0xe0, 0x7e,
    0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x77, 0xe, 0x7f,
    0xe1, 0xf8,

    /* U+0050 "P" */
    0xff, 0x3f, 0xee, 0x1f, 0x87, 0xe1, 0xf8, 0xff,
    0xfb, 0xfc, 0xe0, 0x38, 0xe, 0x3, 0x80,

    /* U+0051 "Q" */
    0x1f, 0x83, 0xfc, 0x70, 0xee, 0x7, 0xe0, 0x7e,
    0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x7f, 0xf, 0x7f,
    0xe3, 0xfc, 0x1f, 0x80, 0x70, 0x7, 0x0, 0x30,

    /* U+0052 "R" */
    0xff, 0x3f, 0xee, 0x1f, 0x87, 0xe1, 0xf8, 0xff,
    0xfb, 0xfc, 0xe7, 0x38, 0xee, 0x3b, 0x87,

    /* U+0053 "S" */
    0x3f, 0x3f, 0xb8, 0x1c, 0xf, 0x87, 0xf8, 0xfe,
    0x1f, 0x3, 0xc1, 0xff, 0xdf, 0xc0,

    /* U+0054 "T" */
    0xff, 0xff, 0xf1, 0xc0, 0x70, 0x1c, 0x7, 0x1,
    0xc0, 0x70, 0x1c, 0x7, 0x1, 0xc0, 0x70,

    /* U+0055 "U" */
    0xe0, 0xfc, 0x1f, 0x83, 0xf0, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xfe, 0x3d, 0xff, 0xf,
    0x80,

    /* U+0056 "V" */
    0xe0, 0xee, 0xe, 0xe0, 0xe7, 0x1c, 0x71, 0xc3,
    0x1c, 0x3b, 0x83, 0xb8, 0x1f, 0x1, 0xf0, 0x1f,
    0x0, 0xe0,

    /* U+0057 "W" */
    0xe3, 0x8f, 0xc7, 0x19, 0x8e, 0x73, 0xbc, 0xe7,
    0x7d, 0xce, 0xdb, 0x8d, 0xb6, 0x1f, 0x7c, 0x3e,
    0xf8, 0x78, 0xf0, 0xf1, 0xc0, 0xe3, 0x80,

    /* U+0058 "X" */
    0xe0, 0xe7, 0x1c, 0x7b, 0xc3, 0xb8, 0x1f, 0x1,
    0xf0, 0x1f, 0x1, 0xf0, 0x3b, 0x87, 0xbc, 0x71,
    0xce, 0xe,

    /* U+0059 "Y" */
    0xe0, 0xee, 0x39, 0xc7, 0x1d, 0xc3, 0xb8, 0x3e,
    0x7, 0xc0, 0x70, 0xe, 0x1, 0xc0, 0x38, 0x7,
    0x0,

    /* U+005A "Z" */
    0xff, 0xff, 0xc1, 0xc1, 0xe0, 0xe0, 0xe0, 0xf0,
    0x70, 0x78, 0x38, 0x3f, 0xff, 0xf0,

    /* U+005B "[" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0xff, 0xc0,

    /* U+005C "\\" */
    0xe1, 0xc3, 0x83, 0x87, 0xe, 0xe, 0x1c, 0x38,
    0x38, 0x70, 0xe0, 0xe1, 0xc0,

    /* U+005D "]" */
    0xff, 0xf1, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1f, 0xff, 0xc0,

    /* U+005E "^" */
    0x18, 0x38, 0x7c, 0x6e, 0xe6,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0xdd, 0x80,

    /* U+0061 "a" */
    0x7e, 0x3f, 0x80, 0xef, 0xff, 0xff, 0x1f, 0x8f,
    0xff, 0x7b, 0x80,

    /* U+0062 "b" */
    0xe0, 0x70, 0x38, 0x1c, 0xf, 0xe7, 0xfb, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf9, 0xff, 0xef, 0xe0,

    /* U+0063 "c" */
    0x3f, 0x7f, 0xf0, 0xe0, 0xe0, 0xe0, 0xf0, 0x7f,
    0x3f,

    /* U+0064 "d" */
    0x3, 0x81, 0xc0, 0xe0, 0x73, 0xfb, 0xff, 0xcf,
    0xc7, 0xe3, 0xf1, 0xf8, 0xef, 0xf3, 0xf8,

    /* U+0065 "e" */
    0x3e, 0x3f, 0xb8, 0xfc, 0x7f, 0xff, 0xff, 0x80,
    0xfe, 0x3f, 0x0,

    /* U+0066 "f" */
    0x3e, 0xfd, 0xc3, 0x8f, 0xdf, 0x9c, 0x38, 0x70,
    0xe1, 0xc3, 0x87, 0x0,

    /* U+0067 "g" */
    0x3f, 0xbf, 0xf8, 0xfc, 0x7e, 0x3b, 0xfc, 0xfd,
    0xfe, 0x7f, 0x81, 0xe0, 0xff, 0xff, 0xe0,

    /* U+0068 "h" */
    0xe0, 0x70, 0x38, 0x1c, 0xf, 0xf7, 0xff, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x38,

    /* U+0069 "i" */
    0x77, 0x0, 0xff, 0x77, 0x77, 0x77, 0x70,

    /* U+006A "j" */
    0x39, 0xc0, 0x7, 0xbc, 0xe7, 0x39, 0xce, 0x73,
    0x9c, 0xff, 0xf0,

    /* U+006B "k" */
    0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7f, 0x7b, 0xf9,
    0xf8, 0xfc, 0x7f, 0x39, 0xdc, 0xee, 0x38,

    /* U+006C "l" */
    0xe7, 0x39, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xf7,
    0x80,

    /* U+006D "m" */
    0xfe, 0xf7, 0xff, 0xf9, 0xcf, 0xce, 0x7e, 0x73,
    0xf3, 0x9f, 0x9c, 0xfc, 0xe7, 0xe7, 0x38,

    /* U+006E "n" */
    0xff, 0x7f, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0x80,

    /* U+006F "o" */
    0x3f, 0x1f, 0xef, 0x3f, 0x87, 0xe1, 0xf8, 0x7f,
    0x3d, 0xfe, 0x3f, 0x0,

    /* U+0070 "p" */
    0xfe, 0x7f, 0xb8, 0xfc, 0x7e, 0x3f, 0x1f, 0x9f,
    0xfe, 0xfe, 0x70, 0x38, 0x1c, 0xe, 0x0,

    /* U+0071 "q" */
    0x3f, 0x8f, 0xf3, 0xce, 0x71, 0xce, 0x39, 0xc7,
    0x38, 0xe3, 0xfc, 0x3f, 0x80, 0x70, 0xe, 0x1,
    0xf0, 0x1e,

    /* U+0072 "r" */
    0xef, 0xff, 0x38, 0xe3, 0x8e, 0x38, 0xe0,

    /* U+0073 "s" */
    0x7e, 0xfe, 0xe0, 0xf8, 0x7e, 0x1e, 0xe, 0xfe,
    0xfc,

    /* U+0074 "t" */
    0x10, 0xe1, 0xc7, 0xef, 0xce, 0x1c, 0x38, 0x70,
    0xe1, 0xf9, 0xf0,

    /* U+0075 "u" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xff, 0x7f, 0x80,

    /* U+0076 "v" */
    0xe3, 0xf1, 0xf8, 0xce, 0xe7, 0x71, 0xb0, 0xf8,
    0x7c, 0x1c, 0x0,

    /* U+0077 "w" */
    0xe6, 0x37, 0x3b, 0xb9, 0xdc, 0xde, 0xe7, 0xf6,
    0x3e, 0xf1, 0xf7, 0x87, 0x3c, 0x39, 0xc0,

    /* U+0078 "x" */
    0x71, 0xce, 0xe3, 0xf0, 0x7c, 0xe, 0x7, 0xc3,
    0xf0, 0xee, 0x71, 0xc0,

    /* U+0079 "y" */
    0xe1, 0xce, 0x39, 0xc7, 0x19, 0xc3, 0xb8, 0x77,
    0x7, 0xc0, 0xf8, 0xe, 0x1, 0xc0, 0x78, 0x3e,
    0x7, 0x80,

    /* U+007A "z" */
    0xff, 0xff, 0xe, 0x1e, 0x3c, 0x38, 0x70, 0xff,
    0xff,

    /* U+007B "{" */
    0x3b, 0xdc, 0xe7, 0x3b, 0xdc, 0xf3, 0x9c, 0xe7,
    0x3c, 0xe0,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xe7, 0x9c, 0xe7, 0x39, 0xe7, 0x7b, 0x9c, 0xe7,
    0x7b, 0x80,

    /* U+007E "~" */
    0x70, 0x7c, 0x63, 0xe0, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 62, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 67, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 110, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 9, .adv_w = 204, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 160, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 44, .adv_w = 218, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 195, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 83, .adv_w = 102, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 94, .adv_w = 102, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 105, .adv_w = 127, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 110, .adv_w = 132, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 117, .adv_w = 67, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 119, .adv_w = 132, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 121, .adv_w = 55, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 133, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 190, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 101, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 149, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 152, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 158, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 150, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 168, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 143, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 174, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 168, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 55, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 67, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 277, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 131, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 295, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 143, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 218, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 342, .adv_w = 210, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 185, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 174, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 191, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 159, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 153, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 186, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 195, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 465, .adv_w = 76, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 127, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 191, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 152, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 221, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 195, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 545, .adv_w = 203, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 175, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 578, .adv_w = 203, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 602, .adv_w = 180, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 164, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 646, .adv_w = 197, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 663, .adv_w = 210, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 254, .box_w = 15, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 704, .adv_w = 209, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 185, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 739, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 753, .adv_w = 106, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 765, .adv_w = 139, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 778, .adv_w = 106, .box_w = 6, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 790, .adv_w = 147, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 795, .adv_w = 151, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 797, .adv_w = 81, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 799, .adv_w = 162, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 810, .adv_w = 172, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 144, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 834, .adv_w = 172, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 849, .adv_w = 158, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 860, .adv_w = 108, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 872, .adv_w = 162, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 887, .adv_w = 171, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 902, .adv_w = 89, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 909, .adv_w = 97, .box_w = 5, .box_h = 17, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 920, .adv_w = 167, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 935, .adv_w = 89, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 944, .adv_w = 247, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 959, .adv_w = 171, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 970, .adv_w = 172, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 982, .adv_w = 172, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 997, .adv_w = 173, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1015, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1022, .adv_w = 138, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1031, .adv_w = 108, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1042, .adv_w = 168, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1053, .adv_w = 175, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1064, .adv_w = 222, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1079, .adv_w = 170, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1091, .adv_w = 181, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1109, .adv_w = 142, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1118, .adv_w = 92, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1128, .adv_w = 65, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1134, .adv_w = 92, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1144, .adv_w = 156, .box_w = 9, .box_h = 4, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 4, 5, 0,
    6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 8, 9, 10, 11, 12,
    13, 14, 14, 15, 16, 17, 14, 14,
    10, 18, 10, 19, 20, 21, 22, 23,
    24, 25, 26, 27, 0, 0, 0, 0,
    0, 0, 28, 29, 30, 31, 29, 32,
    33, 34, 35, 36, 37, 38, 34, 34,
    29, 29, 39, 40, 41, 42, 43, 44,
    45, 46, 47, 48, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 2, 0, 3,
    0, 4, 5, 0, 0, 6, 0, 0,
    0, 4, 4, 0, 0, 0, 0, 0,
    0, 0, 7, 8, 9, 8, 8, 8,
    9, 8, 8, 10, 8, 8, 8, 8,
    9, 8, 9, 8, 11, 12, 13, 14,
    15, 16, 17, 18, 0, 0, 0, 0,
    0, 0, 19, 20, 21, 21, 21, 22,
    23, 20, 24, 25, 20, 26, 27, 27,
    21, 27, 21, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, -7, 0, -19, -36, 0,
    -7, -24, 0, 0, 0, 0, 0, 0,
    0, 0, -13, 0, -10, -7, -10, -10,
    -7, 0, -13, -13, -10, -10, -10, -10,
    -10, -13, -13, 0, 0, 0, 0, -13,
    -1, 0, 0, 0, 0, 0, -16, 0,
    -24, 0, 0, -16, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, -19, -10, 0, -13, 0, 0, -19,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -24, -6, 0, 0, 0, 0,
    -10, 0, -16, 0, -13, -24, -13, -33,
    -27, -9, -42, -4, -10, 0, -13, -13,
    0, -19, -10, -15, 0, 0, -16, -10,
    -24, -22, -13, -24, -4, -4, -6, 1,
    0, 0, 0, -10, 0, 0, 0, 0,
    -7, 0, -19, -7, -16, -22, -6, 0,
    0, 0, 0, 0, -4, -4, 0, 0,
    0, 0, 0, -10, -7, -10, -10, -4,
    0, 0, 0, 0, 0, 0, -6, 0,
    -3, 0, 0, 0, 0, -9, 0, -4,
    -7, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 4, 0, 0, -4, -4,
    -10, -4, 0, -4, -22, 0, 0, 0,
    0, -16, 0, 0, 0, 0, -3, 0,
    -12, -12, -19, -24, 0, -4, 0, 0,
    0, 0, -7, -10, 0, 0, -1, 0,
    0, -3, 0, -13, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, -7, 0, 0,
    -3, 0, -3, 0, 0, -1, -7, 0,
    0, 0, 1, 0, -9, -10, -7, -7,
    0, 0, -36, 0, 0, 0, 0, -17,
    0, 0, -9, 0, 0, 0, 0, -1,
    -7, -7, -4, -4, 0, -9, 0, -4,
    -4, -4, 0, -4, -4, -1, -7, -10,
    -7, -16, -10, -9, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, 0, -13, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, -10, 0, 0, -10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, -6, -6,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, 0, 0, 0, -4, -7, -7,
    -10, 0, 0, -13, 0, 0, 0, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, -4, -4, 0,
    0, 0, 0, -13, 0, -19, 0, -10,
    -10, -14, -10, -9, -10, -10, -1, -10,
    -3, -19, -13, -4, -13, -16, -7, -7,
    -7, -19, -16, -24, -24, -19, -24, -7,
    -13, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, -35, 0, -36, -17, -7,
    -42, 0, 0, 0, -1, -7, 0, -10,
    0, 0, 0, 0, -7, 0, -24, -16,
    0, -24, 0, 0, -30, -14, 0, 0,
    0, -23, 0, 0, -20, 0, 0, 0,
    -13, -10, -16, -13, 0, -6, 0, 0,
    0, 0, 1, -4, 0, 0, 0, 0,
    0, -4, -13, -4, 0, 0, 0, -10,
    0, 0, 0, 0, -13, 0, -4, -6,
    0, 0, 0, -19, -9, -7, -19, 0,
    -13, 0, -4, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, -4, -9, -7,
    0, -4, 0, 0, 0, 0, 0, -19,
    0, 0, 0, -6, -6, 0, -19, -12,
    -7, -13, 0, -4, 0, 0, -1, 0,
    -7, 0, 0, 0, -4, -4, -1, -13,
    -7, -13, -13, 0, 0, -27, 0, 0,
    0, 0, -24, 0, -3, -17, -6, 9,
    0, 0, -4, -7, -3, -4, -19, 0,
    -24, -10, -19, -14, -7, -1, -22, -22,
    -7, -19, -24, -27, -27, -30, -24, 0,
    0, 0, 0, 0, 0, -13, 0, 0,
    0, 0, 0, 0, 0, 0, -10, -10,
    -7, -1, 0, 0, 0, 0, -4, -4,
    0, 0, -1, 0, -4, -7, -7, -13,
    -7, -4, -4, -36, 0, 0, 0, 0,
    -39, -4, -12, -29, -16, 0, -3, 0,
    -10, -7, -10, -7, -27, -4, -29, -13,
    -23, -13, -19, -4, -17, -22, -16, -13,
    -27, -27, -30, -24, -19, 0, -27, 0,
    0, 0, 0, -27, 0, -12, -17, -6,
    -4, 0, -10, -4, -10, -10, -7, -22,
    -10, -19, -13, -16, -13, -19, 0, -10,
    -19, -7, -16, -19, -19, -19, -19, -19,
    0, -13, 0, 0, 0, 0, -9, -6,
    -19, -16, -16, 0, -7, -7, -10, 0,
    -10, -10, -13, 0, -22, -13, -9, -24,
    0, -7, -7, -7, -19, -13, -24, -24,
    -13, -24, -13, -6, -39, 0, 0, 0,
    0, -42, -6, -24, -35, -19, -7, 0,
    -10, -10, -10, -10, -10, -39, -10, -36,
    -16, -33, -19, -22, -6, -26, -30, -19,
    -27, -33, -30, -33, -33, -33, 0, 0,
    0, 0, 0, 0, -7, 0, 0, 0,
    -3, 0, 0, -7, -10, -10, -7, -4,
    0, 0, 0, -1, 0, -6, -9, 0,
    0, 0, -1, 0, -10, -10, -4, -13,
    0, 0, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -19, 0, -22, -10,
    0, -33, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    -7, -7, -13, 0, 0, -13, 0, 0,
    0, 0, -19, 0, -4, 0, 0, -22,
    0, -27, -22, -19, -36, -7, 0, 0,
    0, 0, 0, -6, -7, 0, 0, -1,
    0, 0, -16, -13, -13, -16, -6, 0,
    -4, 0, 0, 0, 0, -1, 0, 0,
    0, 0, -12, 0, -10, -1, -12, -22,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, -7, -7,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, -10, 0, -1, 0, -3, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    -7, -7, -10, -7, 0, 0, -30, 0,
    0, 0, 0, -22, 0, 0, -24, 0,
    0, 0, 0, -7, 0, 0, 0, -16,
    0, -10, -12, -10, -16, -10, 0, -7,
    -3, -9, 0, -14, -6, -19, -14, -6,
    0, -10, 0, 0, 0, 0, 0, 0,
    -6, -10, -6, -16, -4, -10, -13, -22,
    -27, -10, -12, 0, 0, 0, -4, -7,
    -7, 0, -7, -7, 0, 0, -6, -6,
    -13, -13, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -19, 0,
    -22, -10, -7, -30, 0, -4, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, -7, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, -10, -7, -16, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -9,
    0, -10, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, 0, -13,
    0, 0, -9, 0, 0, -13, 0, 0,
    0, 0, -7, -9, -12, -13, -10, -19,
    0, -24, -13, 0, -19, -13, -16, 0,
    -19, -10, -10, -16, -19, -9, 0, -10,
    -10, -7, -19, -13, -13, -13, -7, -7,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, -7, 0, -10, -13, -7, -13,
    0, 0, 0, 0, -10, 0, -10, -16,
    -7, 0, 0, -7, -7, -19, -13, -13,
    -19, 0, 0, 14, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, -12, 0, -17,
    -9, -9, -20, 0, 0, 0, -1, 0,
    6, -6, 6, 0, 0, 0, 0, 0,
    -12, 0, -6, 0, 0, 0, -27, 0,
    0, 0, 0, -19, 0, 0, -24, 0,
    -10, 0, -16, -10, -10, -19, -10, -9,
    0, -6, 0, 0, 0, -10, 0, 0,
    -1, 0, 0, -10, -10, -10, -10, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, -19, 0, -22, -13, -16,
    -33, 0, -4, 0, -4, -7, 0, 0,
    0, 0, 0, -7, -4, 0, -13, -13,
    -13, -13, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -19, -16, -13, -22, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, -6, -6, -7, -13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -16, 0, -16, -13, 0, -27, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, -7, -10, -10,
    0, 0, -27, 0, 0, 0, 0, -24,
    -4, -3, -22, 0, -22, -7, -27, -19,
    -24, -33, -19, -13, 0, -16, -10, -19,
    -10, -16, 0, -7, -19, -1, -7, -7,
    -13, -13, -13, -13, 0, -27, 0, 0,
    0, 0, -19, 0, -1, -13, 0, -27,
    -4, -24, -19, -22, -27, -7, -13, 0,
    -13, -6, -7, -10, -16, 0, -7, -13,
    -6, -7, -7, -10, -19, -13, -7, 0,
    -7, 0, 0, 0, 0, -13, -10, -13,
    -19, -4, -27, -13, -30, -19, -13, -33,
    -13, -13, 0, -13, 0, -13, -10, 0,
    0, 0, -13, -7, -10, -13, -13, -7,
    -10, -10, 0, -22, 0, 0, 0, 0,
    -22, 0, -6, -27, -1, -22, -1, -22,
    -16, -24, -30, -13, -19, 0, -13, -4,
    -13, -7, -10, 0, 0, -13, 0, -4,
    -13, -7, -10, -7, -4, 0, -1, 0,
    0, 0, 0, -4, 0, 0, -1, 0,
    -22, -1, -19, -10, -19, -33, 0, -6,
    0, -6, 0, -7, 0, -6, 0, 0,
    -4, 0, -4, -10, -7, -10, -10, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 48,
    .right_class_cnt     = 35,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_Fontsmall = {
#else
lv_font_t ui_font_Fontsmall = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_FONTSMALL*/

