// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: output_display

#ifndef _OUTPUT_DISPLAY_UI_H
#define _OUTPUT_DISPLAY_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Container1;
extern lv_obj_t * ui_Container2;
extern lv_obj_t * ui_Labl1;
extern lv_obj_t * ui_Labl2;
extern lv_obj_t * ui_Labl3;
extern lv_obj_t * ui_Labl4;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_dacvoltageLabel;
extern lv_obj_t * ui_Panel2;
extern lv_obj_t * ui_daccurrentLabel;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_Indicator4;
extern lv_obj_t * ui_Indicator3;
extern lv_obj_t * ui_Indicator2;
extern lv_obj_t * ui_Indicator1;
void ui_event_ledSwitch4(lv_event_t * e);
extern lv_obj_t * ui_ledSwitch4;
void ui_event_ledSwitch3(lv_event_t * e);
extern lv_obj_t * ui_ledSwitch3;
void ui_event_ledSwitch2(lv_event_t * e);
extern lv_obj_t * ui_ledSwitch2;
void ui_event_ledSwitch1(lv_event_t * e);
extern lv_obj_t * ui_ledSwitch1;
void ui_event_daccurrentSlider(lv_event_t * e);
extern lv_obj_t * ui_daccurrentSlider;
void ui_event_dacvoltageSlider(lv_event_t * e);
extern lv_obj_t * ui_dacvoltageSlider;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui____initial_actions0;








void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif