// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: out_in_16

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Container1 = lv_obj_create(ui_Screen1);
    lv_obj_remove_style_all(ui_Container1);
    lv_obj_set_width(ui_Container1, 786);
    lv_obj_set_height(ui_Container1, 468);
    lv_obj_set_x(ui_Container1, 0);
    lv_obj_set_y(ui_Container1, -1);
    lv_obj_set_align(ui_Container1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Container1, LV_SCROLLBAR_MODE_OFF);

    ui_backButton1 = lv_btn_create(ui_Container1);
    lv_obj_set_width(ui_backButton1, 80);
    lv_obj_set_height(ui_backButton1, 80);
    lv_obj_set_x(ui_backButton1, 352);
    lv_obj_set_y(ui_backButton1, 193);
    lv_obj_set_align(ui_backButton1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_backButton1, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_backButton1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_backButton1, lv_color_hex(0x334755), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_backButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_backButton1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "I/P");
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container2 = lv_obj_create(ui_Container1);
    lv_obj_remove_style_all(ui_Container2);
    lv_obj_set_width(ui_Container2, 664);
    lv_obj_set_height(ui_Container2, 21);
    lv_obj_set_x(ui_Container2, -18);
    lv_obj_set_y(ui_Container2, 163);
    lv_obj_set_align(ui_Container2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Container2, LV_FLEX_ALIGN_SPACE_AROUND, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Container2, LV_SCROLLBAR_MODE_OFF);

    ui_Labl1 = lv_label_create(ui_Container2);
    lv_obj_set_width(ui_Labl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Labl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Labl1, -69);
    lv_obj_set_y(ui_Labl1, -2);
    lv_obj_set_align(ui_Labl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Labl1, "1");
    lv_obj_set_style_text_color(ui_Labl1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Labl1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Labl1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Labl2 = lv_label_create(ui_Container2);
    lv_obj_set_width(ui_Labl2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Labl2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Labl2, -33);
    lv_obj_set_y(ui_Labl2, -2);
    lv_obj_set_align(ui_Labl2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Labl2, "2");
    lv_obj_set_style_text_font(ui_Labl2, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Labl3 = lv_label_create(ui_Container2);
    lv_obj_set_width(ui_Labl3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Labl3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Labl3, 23);
    lv_obj_set_y(ui_Labl3, -5);
    lv_obj_set_align(ui_Labl3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Labl3, "3");
    lv_obj_set_style_text_font(ui_Labl3, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Labl4 = lv_label_create(ui_Container2);
    lv_obj_set_width(ui_Labl4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Labl4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Labl4, 103);
    lv_obj_set_y(ui_Labl4, -11);
    lv_obj_set_align(ui_Labl4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Labl4, "4");
    lv_obj_set_style_text_font(ui_Labl4, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Container1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -2);
    lv_obj_set_y(ui_Label2, -207);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "OUTPUT");
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Container1);
    lv_obj_set_width(ui_Panel1, 150);
    lv_obj_set_height(ui_Panel1, 80);
    lv_obj_set_x(ui_Panel1, -127);
    lv_obj_set_y(ui_Panel1, -100);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Panel1, LV_SCROLLBAR_MODE_OFF);

    ui_dacvoltageLabel2 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_dacvoltageLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_dacvoltageLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_dacvoltageLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_dacvoltageLabel2, "0");
    lv_obj_set_style_text_font(ui_dacvoltageLabel2, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel2 = lv_obj_create(ui_Container1);
    lv_obj_set_width(ui_Panel2, 150);
    lv_obj_set_height(ui_Panel2, 80);
    lv_obj_set_x(ui_Panel2, 229);
    lv_obj_set_y(ui_Panel2, -100);
    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Panel2, LV_SCROLLBAR_MODE_OFF);

    ui_daccurrentLabel2 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_daccurrentLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_daccurrentLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_daccurrentLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_daccurrentLabel2, "0");
    lv_obj_set_style_text_font(ui_daccurrentLabel2, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_Container1);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, -286);
    lv_obj_set_y(ui_Label3, -100);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "VOLTAGE");
    lv_obj_set_scrollbar_mode(ui_Label3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Indicator4 = lv_obj_create(ui_Container1);
    lv_obj_set_width(ui_Indicator4, 40);
    lv_obj_set_height(ui_Indicator4, 40);
    lv_obj_set_x(ui_Indicator4, 224);
    lv_obj_set_y(ui_Indicator4, 114);
    lv_obj_set_align(ui_Indicator4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Indicator4, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Indicator4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_radius(ui_Indicator4, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Indicator4, lv_color_hex(0x37D866), LV_PART_MAIN | LV_STATE_USER_1);
    lv_obj_set_style_bg_opa(ui_Indicator4, 255, LV_PART_MAIN | LV_STATE_USER_1);
    lv_obj_set_style_bg_color(ui_Indicator4, lv_color_hex(0x26A93E), LV_PART_MAIN | LV_STATE_USER_2);
    lv_obj_set_style_bg_opa(ui_Indicator4, 255, LV_PART_MAIN | LV_STATE_USER_2);

    ui_Indicator3 = lv_obj_create(ui_Container1);
    lv_obj_set_width(ui_Indicator3, 40);
    lv_obj_set_height(ui_Indicator3, 40);
    lv_obj_set_x(ui_Indicator3, 42);
    lv_obj_set_y(ui_Indicator3, 114);
    lv_obj_set_align(ui_Indicator3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Indicator3, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Indicator3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_radius(ui_Indicator3, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Indicator3, lv_color_hex(0x37D866), LV_PART_MAIN | LV_STATE_USER_1);
    lv_obj_set_style_bg_opa(ui_Indicator3, 255, LV_PART_MAIN | LV_STATE_USER_1);
    lv_obj_set_style_bg_color(ui_Indicator3, lv_color_hex(0x26A93E), LV_PART_MAIN | LV_STATE_USER_2);
    lv_obj_set_style_bg_opa(ui_Indicator3, 255, LV_PART_MAIN | LV_STATE_USER_2);

    ui_Indicator2 = lv_obj_create(ui_Container1);
    lv_obj_set_width(ui_Indicator2, 40);
    lv_obj_set_height(ui_Indicator2, 40);
    lv_obj_set_x(ui_Indicator2, -140);
    lv_obj_set_y(ui_Indicator2, 114);
    lv_obj_set_align(ui_Indicator2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Indicator2, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Indicator2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_radius(ui_Indicator2, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Indicator2, lv_color_hex(0x37D866), LV_PART_MAIN | LV_STATE_USER_1);
    lv_obj_set_style_bg_opa(ui_Indicator2, 255, LV_PART_MAIN | LV_STATE_USER_1);
    lv_obj_set_style_bg_color(ui_Indicator2, lv_color_hex(0x26A93E), LV_PART_MAIN | LV_STATE_USER_2);
    lv_obj_set_style_bg_opa(ui_Indicator2, 255, LV_PART_MAIN | LV_STATE_USER_2);

    ui_Indicator1 = lv_obj_create(ui_Container1);
    lv_obj_set_width(ui_Indicator1, 40);
    lv_obj_set_height(ui_Indicator1, 40);
    lv_obj_set_x(ui_Indicator1, -322);
    lv_obj_set_y(ui_Indicator1, 114);
    lv_obj_set_align(ui_Indicator1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Indicator1, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Indicator1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_radius(ui_Indicator1, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Indicator1, lv_color_hex(0x37D866), LV_PART_MAIN | LV_STATE_USER_1);
    lv_obj_set_style_bg_opa(ui_Indicator1, 255, LV_PART_MAIN | LV_STATE_USER_1);
    lv_obj_set_style_bg_color(ui_Indicator1, lv_color_hex(0x26A93E), LV_PART_MAIN | LV_STATE_USER_2);
    lv_obj_set_style_bg_opa(ui_Indicator1, 255, LV_PART_MAIN | LV_STATE_USER_2);

    ui_ledSwitch4 = lv_switch_create(ui_Container1);
    lv_obj_set_width(ui_ledSwitch4, 70);
    lv_obj_set_height(ui_ledSwitch4, 40);
    lv_obj_set_x(ui_ledSwitch4, 296);
    lv_obj_set_y(ui_ledSwitch4, 114);
    lv_obj_set_align(ui_ledSwitch4, LV_ALIGN_CENTER);


    ui_ledSwitch3 = lv_switch_create(ui_Container1);
    lv_obj_set_width(ui_ledSwitch3, 70);
    lv_obj_set_height(ui_ledSwitch3, 40);
    lv_obj_set_x(ui_ledSwitch3, 114);
    lv_obj_set_y(ui_ledSwitch3, 114);
    lv_obj_set_align(ui_ledSwitch3, LV_ALIGN_CENTER);


    ui_ledSwitch2 = lv_switch_create(ui_Container1);
    lv_obj_set_width(ui_ledSwitch2, 70);
    lv_obj_set_height(ui_ledSwitch2, 40);
    lv_obj_set_x(ui_ledSwitch2, -68);
    lv_obj_set_y(ui_ledSwitch2, 114);
    lv_obj_set_align(ui_ledSwitch2, LV_ALIGN_CENTER);


    ui_ledSwitch1 = lv_switch_create(ui_Container1);
    lv_obj_set_width(ui_ledSwitch1, 70);
    lv_obj_set_height(ui_ledSwitch1, 40);
    lv_obj_set_x(ui_ledSwitch1, -250);
    lv_obj_set_y(ui_ledSwitch1, 114);
    lv_obj_set_align(ui_ledSwitch1, LV_ALIGN_CENTER);


    ui_daccurrentSlider2 = lv_slider_create(ui_Container1);
    lv_slider_set_range(ui_daccurrentSlider2, 4, 20);
    lv_slider_set_value(ui_daccurrentSlider2, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_daccurrentSlider2) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_daccurrentSlider2, 1,
                                                                                                      LV_ANIM_OFF);
    lv_obj_set_width(ui_daccurrentSlider2, 300);
    lv_obj_set_height(ui_daccurrentSlider2, 28);
    lv_obj_set_x(ui_daccurrentSlider2, 207);
    lv_obj_set_y(ui_daccurrentSlider2, 3);
    lv_obj_set_align(ui_daccurrentSlider2, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_daccurrentSlider2, lv_color_hex(0x463F3F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_daccurrentSlider2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_daccurrentSlider2, lv_color_hex(0x37B9F5), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_daccurrentSlider2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_daccurrentSlider2, lv_color_hex(0x5F6464), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_daccurrentSlider2, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_daccurrentSlider2, lv_color_hex(0x827C7C), LV_PART_KNOB | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_daccurrentSlider2, 255, LV_PART_KNOB | LV_STATE_PRESSED);

    ui_dacvoltageSlider2 = lv_slider_create(ui_Container1);
    lv_slider_set_range(ui_dacvoltageSlider2, 0, 12);
    lv_slider_set_value(ui_dacvoltageSlider2, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_dacvoltageSlider2) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_dacvoltageSlider2, 1,
                                                                                                      LV_ANIM_OFF);
    lv_obj_set_width(ui_dacvoltageSlider2, 300);
    lv_obj_set_height(ui_dacvoltageSlider2, 28);
    lv_obj_set_x(ui_dacvoltageSlider2, -175);
    lv_obj_set_y(ui_dacvoltageSlider2, 5);
    lv_obj_set_align(ui_dacvoltageSlider2, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_dacvoltageSlider2, lv_color_hex(0x463F3F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dacvoltageSlider2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_dacvoltageSlider2, lv_color_hex(0x37B9F5), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dacvoltageSlider2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_dacvoltageSlider2, lv_color_hex(0x5F6464), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dacvoltageSlider2, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dacvoltageSlider2, lv_color_hex(0x827C7C), LV_PART_KNOB | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_dacvoltageSlider2, 255, LV_PART_KNOB | LV_STATE_PRESSED);

    ui_Label4 = lv_label_create(ui_Container1);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, 59);
    lv_obj_set_y(ui_Label4, -100);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "CURRENT");
    lv_obj_set_scrollbar_mode(ui_Label4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container3 = lv_obj_create(ui_Screen1);
    lv_obj_remove_style_all(ui_Container3);
    lv_obj_set_width(ui_Container3, 786);
    lv_obj_set_height(ui_Container3, 461);
    lv_obj_set_x(ui_Container3, 1);
    lv_obj_set_y(ui_Container3, 0);
    lv_obj_set_align(ui_Container3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Container3, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Container3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Container3, LV_SCROLLBAR_MODE_OFF);

    ui_Container4 = lv_obj_create(ui_Container3);
    lv_obj_remove_style_all(ui_Container4);
    lv_obj_set_width(ui_Container4, 410);
    lv_obj_set_height(ui_Container4, 21);
    lv_obj_set_x(ui_Container4, 12);
    lv_obj_set_y(ui_Container4, 143);
    lv_obj_set_align(ui_Container4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container4, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Container4, LV_FLEX_ALIGN_SPACE_AROUND, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_Container4, LV_SCROLLBAR_MODE_OFF);

    ui_Labl5 = lv_label_create(ui_Container4);
    lv_obj_set_width(ui_Labl5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Labl5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Labl5, -69);
    lv_obj_set_y(ui_Labl5, -2);
    lv_obj_set_align(ui_Labl5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Labl5, "1");
    lv_obj_set_style_text_color(ui_Labl5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Labl5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Labl5, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Labl6 = lv_label_create(ui_Container4);
    lv_obj_set_width(ui_Labl6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Labl6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Labl6, -33);
    lv_obj_set_y(ui_Labl6, -2);
    lv_obj_set_align(ui_Labl6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Labl6, "2");
    lv_obj_set_style_text_font(ui_Labl6, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Labl7 = lv_label_create(ui_Container4);
    lv_obj_set_width(ui_Labl7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Labl7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Labl7, 23);
    lv_obj_set_y(ui_Labl7, -5);
    lv_obj_set_align(ui_Labl7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Labl7, "3");
    lv_obj_set_style_text_font(ui_Labl7, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Labl8 = lv_label_create(ui_Container4);
    lv_obj_set_width(ui_Labl8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Labl8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Labl8, 73);
    lv_obj_set_y(ui_Labl8, -5);
    lv_obj_set_align(ui_Labl8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Labl8, "4");
    lv_obj_set_style_text_font(ui_Labl8, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container5 = lv_obj_create(ui_Container3);
    lv_obj_remove_style_all(ui_Container5);
    lv_obj_set_width(ui_Container5, 441);
    lv_obj_set_height(ui_Container5, 123);
    lv_obj_set_x(ui_Container5, 11);
    lv_obj_set_y(ui_Container5, 70);
    lv_obj_set_align(ui_Container5, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container5, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Container5, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_Container5, LV_SCROLLBAR_MODE_OFF);

    ui_Input1 = lv_obj_create(ui_Container5);
    lv_obj_set_width(ui_Input1, 100);
    lv_obj_set_height(ui_Input1, 70);
    lv_obj_set_x(ui_Input1, -20);
    lv_obj_set_y(ui_Input1, 1);
    lv_obj_set_align(ui_Input1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Input1, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Input1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_Input1, lv_color_hex(0x373434), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Input1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Input2 = lv_obj_create(ui_Container5);
    lv_obj_set_width(ui_Input2, 100);
    lv_obj_set_height(ui_Input2, 70);
    lv_obj_set_x(ui_Input2, -64);
    lv_obj_set_y(ui_Input2, 2);
    lv_obj_set_align(ui_Input2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Input2, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Input2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_Input2, lv_color_hex(0x373434), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Input2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Input3 = lv_obj_create(ui_Container5);
    lv_obj_set_width(ui_Input3, 100);
    lv_obj_set_height(ui_Input3, 70);
    lv_obj_set_x(ui_Input3, 30);
    lv_obj_set_y(ui_Input3, 0);
    lv_obj_set_align(ui_Input3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Input3, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Input3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_Input3, lv_color_hex(0x373434), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Input3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Input4 = lv_obj_create(ui_Container5);
    lv_obj_set_width(ui_Input4, 100);
    lv_obj_set_height(ui_Input4, 70);
    lv_obj_set_x(ui_Input4, 80);
    lv_obj_set_y(ui_Input4, 0);
    lv_obj_set_align(ui_Input4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Input4, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Input4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_Input4, lv_color_hex(0x373434), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Input4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel3 = lv_obj_create(ui_Container3);
    lv_obj_set_width(ui_Panel3, 150);
    lv_obj_set_height(ui_Panel3, 80);
    lv_obj_set_x(ui_Panel3, 229);
    lv_obj_set_y(ui_Panel3, -100);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Panel3, LV_SCROLLBAR_MODE_OFF);

    ui_adccurrentLabel2 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_adccurrentLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_adccurrentLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_adccurrentLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_adccurrentLabel2, "0");
    lv_obj_set_style_text_font(ui_adccurrentLabel2, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_Container3);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, -2);
    lv_obj_set_y(ui_Label5, -207);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "INPUT");
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_Container3);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, 59);
    lv_obj_set_y(ui_Label6, -100);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "CURRENT");
    lv_obj_set_scrollbar_mode(ui_Label6, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_Container3);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, -286);
    lv_obj_set_y(ui_Label7, -100);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "VOLTAGE");
    lv_obj_set_scrollbar_mode(ui_Label7, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel4 = lv_obj_create(ui_Container3);
    lv_obj_set_width(ui_Panel4, 150);
    lv_obj_set_height(ui_Panel4, 80);
    lv_obj_set_x(ui_Panel4, -127);
    lv_obj_set_y(ui_Panel4, -100);
    lv_obj_set_align(ui_Panel4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Panel4, LV_SCROLLBAR_MODE_OFF);

    ui_adcvoltageLabel2 = lv_label_create(ui_Panel4);
    lv_obj_set_width(ui_adcvoltageLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_adcvoltageLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_adcvoltageLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_adcvoltageLabel2, "0");
    lv_obj_set_style_text_font(ui_adcvoltageLabel2, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_backButton3 = lv_btn_create(ui_Container3);
    lv_obj_set_width(ui_backButton3, 80);
    lv_obj_set_height(ui_backButton3, 80);
    lv_obj_set_x(ui_backButton3, 352);
    lv_obj_set_y(ui_backButton3, 193);
    lv_obj_set_align(ui_backButton3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_backButton3, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_backButton3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_backButton3, lv_color_hex(0x334755), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_backButton3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_backButton3);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "O/P");
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_backButton1, ui_event_backButton1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ledSwitch4, ui_event_ledSwitch4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ledSwitch3, ui_event_ledSwitch3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ledSwitch2, ui_event_ledSwitch2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ledSwitch1, ui_event_ledSwitch1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_daccurrentSlider2, ui_event_daccurrentSlider2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_dacvoltageSlider2, ui_event_dacvoltageSlider2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_backButton3, ui_event_backButton3, LV_EVENT_ALL, NULL);

}