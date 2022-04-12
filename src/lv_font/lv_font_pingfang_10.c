/*******************************************************************************
 * Size: 10 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_FONT_PINGFANG_10
#define LV_FONT_PINGFANG_10 1
#endif

#if LV_FONT_PINGFANG_10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0030 "0" */
    0x1f, 0x43, 0xc, 0x60, 0x9a, 0xa, 0x60, 0x93,
    0xc, 0x1f, 0x40,

    /* U+0031 "1" */
    0x2f, 0xb1, 0xc7, 0x1c, 0x71, 0xc0,

    /* U+0032 "2" */
    0x1f, 0x83, 0xd, 0x10, 0xd0, 0x2c, 0xe, 0x3,
    0x40, 0x7f, 0xd0,

    /* U+0033 "3" */
    0x1f, 0x83, 0xd, 0x0, 0xd0, 0x78, 0x0, 0x97,
    0x9, 0x2f, 0x80,

    /* U+0034 "4" */
    0x2, 0x80, 0x78, 0xd, 0x83, 0x18, 0x61, 0x8b,
    0xfe, 0x1, 0x80,

    /* U+0035 "5" */
    0x3f, 0xc3, 0x0, 0x7b, 0x86, 0xd, 0x0, 0xa6,
    0xd, 0x2f, 0x40,

    /* U+0036 "6" */
    0x1f, 0x83, 0x9, 0x6b, 0x8b, 0xd, 0x60, 0xa3,
    0xd, 0x1f, 0x80,

    /* U+0037 "7" */
    0x7f, 0xd0, 0xc, 0x1, 0x80, 0x34, 0x3, 0x0,
    0x90, 0xc, 0x0,

    /* U+0038 "8" */
    0x2f, 0x87, 0xd, 0x30, 0xc3, 0xfc, 0x60, 0x9a,
    0xa, 0x2f, 0x80,

    /* U+0039 "9" */
    0x2f, 0x47, 0xc, 0xa0, 0x97, 0xe, 0x2e, 0x96,
    0xc, 0x2f, 0x40,

    /* U+4E00 "一" */
    0xbf, 0xff, 0xd0,

    /* U+4E09 "三" */
    0x2a, 0xaa, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xc0,

    /* U+4E8C "二" */
    0x2f, 0xff, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xbf,
    0xff, 0xc0,

    /* U+4E94 "五" */
    0x3f, 0xff, 0xd0, 0xc, 0x0, 0x0, 0xc0, 0x1,
    0xff, 0xf0, 0x2, 0x43, 0x0, 0x30, 0x30, 0x3,
    0x3, 0x0, 0x30, 0x30, 0x3f, 0xff, 0xe0,

    /* U+516D "六" */
    0x0, 0x0, 0x0, 0xd, 0x0, 0x0, 0x20, 0x3,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x30, 0x90, 0x7,
    0x3, 0x0, 0xc0, 0x18, 0x38, 0x0, 0xc1, 0x0,
    0x4,

    /* U+5341 "十" */
    0x0, 0x20, 0x0, 0x2, 0x0, 0x0, 0x20, 0x3,
    0xff, 0xfe, 0x0, 0x20, 0x0, 0x2, 0x0, 0x0,
    0x20, 0x0, 0x2, 0x0, 0x0, 0x20, 0x0,

    /* U+56DB "四" */
    0x3f, 0xff, 0xc3, 0x8, 0x8c, 0x30, 0x88, 0xc3,
    0x18, 0x8c, 0x32, 0x48, 0xc3, 0xb0, 0xfc, 0x30,
    0x0, 0xc3, 0xaa, 0xac, 0x30, 0x0, 0xc0,

    /* U+65E5 "日" */
    0x3f, 0xfc, 0x30, 0xc, 0x30, 0xc, 0x30, 0xc,
    0x3f, 0xfc, 0x30, 0xc, 0x30, 0xc, 0x3f, 0xfc,
    0x30, 0xc,

    /* U+6708 "月" */
    0x3f, 0xfc, 0x30, 0xc, 0x34, 0xc, 0x3a, 0xac,
    0x30, 0xc, 0x3f, 0xfc, 0x30, 0xc, 0x60, 0xc,
    0x80, 0x7c, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 96, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 160, .box_w = 10, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 108, .adv_w = 160, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 131, .adv_w = 160, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 160, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 172, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 197, .adv_w = 160, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 220, .adv_w = 160, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 243, .adv_w = 160, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 261, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x9, 0x8c, 0x94, 0x36d, 0x541, 0x8db, 0x17e5,
    0x1908
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 19968, .range_length = 6409, .glyph_id_start = 11,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 9, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
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
    .cmap_num = 2,
    .bpp = 2,
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
const lv_font_t lv_font_pingfang_10 = {
#else
lv_font_t lv_font_pingfang_10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_PINGFANG_10*/

