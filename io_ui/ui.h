// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: IOI_Project

#ifndef _IOI_PROJECT_UI_H
#define _IOI_PROJECT_UI_H

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
void ui_event_backButton1(lv_event_t * e);
extern lv_obj_t * ui_backButton1;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_Container2;
extern lv_obj_t * ui_Labl1;
extern lv_obj_t * ui_Labl2;
extern lv_obj_t * ui_Labl3;
extern lv_obj_t * ui_Labl4;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_dacvoltageLabel2;
extern lv_obj_t * ui_Panel2;
extern lv_obj_t * ui_daccurrentLabel2;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_Indicator4;
extern lv_obj_t * ui_Indicator3;
extern lv_obj_t * ui_Indicator2;
extern lv_obj_t * ui_Indicator1;
void ui_event_ledSwitch1(lv_event_t * e);
extern lv_obj_t * ui_ledSwitch1;
void ui_event_ledSwitch2(lv_event_t * e);
extern lv_obj_t * ui_ledSwitch2;
void ui_event_ledSwitch3(lv_event_t * e);
extern lv_obj_t * ui_ledSwitch3;
void ui_event_ledSwitch4(lv_event_t * e);
extern lv_obj_t * ui_ledSwitch4;
void ui_event_daccurrentSlider2(lv_event_t * e);
extern lv_obj_t * ui_daccurrentSlider2;
void ui_event_dacvoltageSlider2(lv_event_t * e);
extern lv_obj_t * ui_dacvoltageSlider2;
extern lv_obj_t * ui_Label4;
// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
extern lv_obj_t * ui_Screen2;
extern lv_obj_t * ui_Container3;
extern lv_obj_t * ui_Container4;
extern lv_obj_t * ui_Labl5;
extern lv_obj_t * ui_Labl6;
extern lv_obj_t * ui_Labl7;
extern lv_obj_t * ui_Labl8;
extern lv_obj_t * ui_Container5;
extern lv_obj_t * ui_Input1;
extern lv_obj_t * ui_Input2;
extern lv_obj_t * ui_Input3;
extern lv_obj_t * ui_Input4;
extern lv_obj_t * ui_Panel5;
extern lv_obj_t * ui_adccurrentLabel2;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_Label7;
extern lv_obj_t * ui_Panel3;
extern lv_obj_t * ui_adcvoltageLabel2;
void ui_event_backButton3(lv_event_t * e);
extern lv_obj_t * ui_backButton3;
extern lv_obj_t * ui_Label8;
extern lv_obj_t * ui____initial_actions0;








void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
