
/**
 * @file hal_disp.c
 *
 * @description HAL layer for display driver
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdint.h>
#include <stddef.h>
#include "../lv_hal/lv_hal_disp.h"
#include "misc/mem/dyn_mem.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_disp_t *disp_list = NULL;
static lv_disp_t *active;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/**
 * Register Display driver
 * @param driver Display driver structure
 * @return pointer to the new display or NULL on error
 */
lv_disp_t * lv_disp_register(lv_disp_drv_t *driver)
{
    lv_disp_t *node;

    node = dm_alloc(sizeof(lv_disp_t));
    if (!node) return NULL;

    memcpy(&node->driver,driver, sizeof(lv_disp_drv_t));
    node->next = NULL;

    /* Set first display as active by default */
    if (disp_list == NULL) {
        disp_list = node;
        active = node;
    } else {
        node->next = disp_list;
    }

    return node;
}


/**
 * Set Active Display by ID
 *
 * @param id Display ID to set as active
 */
void lv_disp_set_active(lv_disp_t * disp)
{
    active = disp;
}

/**
 * Get Active Display
 *
 * @return Active ID of display on success else -ve on error
 */
lv_disp_t * lv_disp_get_active(void)
{
    return active;
}
/**
 * Get the next display.
 * @param disp pointer to the current display. NULL to initialize.
 * @return the next display or NULL if no more. Give the first display when the parameter is NULL
 */
lv_disp_t * lv_disp_next(lv_disp_t * disp)
{
    if(disp == NULL) {
        return disp_list;
    } else {
        if(disp_list->next == NULL) return NULL;
        else return disp_list->next;
    }
}

/**
 * Fill a rectangular area with a color
 * @param x1 left coordinate of the rectangle
 * @param x2 right coordinate of the rectangle
 * @param y1 top coordinate of the rectangle
 * @param y2 bottom coordinate of the rectangle
 * @param color fill color
 */
void lv_disp_fill(int32_t x1, int32_t y1, int32_t x2, int32_t y2, color_t color)
{
    if(active == NULL) return;
    if(active->driver.fill != NULL) active->driver.fill(x1, y1, x2, y2, color);
}

/**
 * Put a color map to a rectangular area
 * @param x1 left coordinate of the rectangle
 * @param x2 right coordinate of the rectangle
 * @param y1 top coordinate of the rectangle
 * @param y2 bottom coordinate of the rectangle
 * @param color_map pointer to an array of colors
 */
void lv_disp_map(int32_t x1, int32_t y1, int32_t x2, int32_t y2, const color_t * color_map)
{
    if(active == NULL) return;
    if(active->driver.map != NULL)  active->driver.map(x1, y1, x2, y2, color_map);
}


/**
 * Copy pixels to destination memory using opacity with GPU (hardware accelerator)
 * @param dest a memory address. Copy 'src' here.
 * @param src pointer to pixel map. Copy it to 'dest'.
 * @param length number of pixels in 'src'
 * @param opa opacity (0, OPA_TRANSP: transparent ... 255, OPA_COVER, fully cover)
 */
void lv_disp_copy(color_t * dest, const color_t * src, uint32_t length, opa_t opa)
{
    if(active == NULL) return;
    if(active->driver.copy != NULL) active->driver.copy(dest, src, length, opa);
}

bool lv_disp_is_accelerated(void)
{
    if(active->driver.copy) return true;
    else return false;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

