// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: SQ_tft

#include "ui.h"

void ui_Screen4_screen_init(void)
{
    ui_Screen4 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Container6 = lv_obj_create(ui_Screen4);
    lv_obj_remove_style_all(ui_Container6);
    lv_obj_set_width(ui_Container6, 95);
    lv_obj_set_height(ui_Container6, 239);
    lv_obj_set_x(ui_Container6, 111);
    lv_obj_set_y(ui_Container6, -1);
    lv_obj_set_align(ui_Container6, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container6, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Container6, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container6, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_HomeButton4 = lv_btn_create(ui_Container6);
    lv_obj_set_width(ui_HomeButton4, 84);
    lv_obj_set_height(ui_HomeButton4, 40);
    lv_obj_set_x(ui_HomeButton4, 2);
    lv_obj_set_y(ui_HomeButton4, -42);
    lv_obj_set_align(ui_HomeButton4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_HomeButton4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_HomeButton4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_HomeButton4, lv_color_hex(0x375374), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HomeButton4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_HomeButton4, lv_color_hex(0x56667B), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_HomeButton4, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label27 = lv_label_create(ui_HomeButton4);
    lv_obj_set_width(ui_Label27, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label27, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label27, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label27, "HOME");
    lv_obj_set_style_text_color(ui_Label27, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label27, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempButton4 = lv_btn_create(ui_Container6);
    lv_obj_set_width(ui_TempButton4, 84);
    lv_obj_set_height(ui_TempButton4, 31);
    lv_obj_set_x(ui_TempButton4, 3);
    lv_obj_set_y(ui_TempButton4, -88);
    lv_obj_set_align(ui_TempButton4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_TempButton4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_TempButton4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_TempButton4, lv_color_hex(0x375374), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TempButton4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TempButton4, lv_color_hex(0x53657B), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_TempButton4, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label16 = lv_label_create(ui_TempButton4);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, "Temperature");
    lv_obj_set_style_text_color(ui_Label16, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label16, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HumButton4 = lv_btn_create(ui_Container6);
    lv_obj_set_width(ui_HumButton4, 84);
    lv_obj_set_height(ui_HumButton4, 31);
    lv_obj_set_x(ui_HumButton4, 2);
    lv_obj_set_y(ui_HumButton4, 5);
    lv_obj_set_align(ui_HumButton4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_HumButton4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_HumButton4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_HumButton4, lv_color_hex(0x375374), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HumButton4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_HumButton4, lv_color_hex(0x506074), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_HumButton4, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label17 = lv_label_create(ui_HumButton4);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label17, "Humidity");
    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0xFEFEFE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label17, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_InputButton4 = lv_btn_create(ui_Container6);
    lv_obj_set_width(ui_InputButton4, 84);
    lv_obj_set_height(ui_InputButton4, 31);
    lv_obj_set_x(ui_InputButton4, 1);
    lv_obj_set_y(ui_InputButton4, 52);
    lv_obj_set_align(ui_InputButton4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_InputButton4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_InputButton4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_InputButton4, lv_color_hex(0x375374), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_InputButton4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_InputButton4, lv_color_hex(0x636A82), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_InputButton4, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label18 = lv_label_create(ui_InputButton4);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "Input");
    lv_obj_set_style_text_color(ui_Label18, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label18, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Label18, lv_color_hex(0x505E70), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Label18, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_OutputButton4 = lv_btn_create(ui_Container6);
    lv_obj_set_width(ui_OutputButton4, 84);
    lv_obj_set_height(ui_OutputButton4, 31);
    lv_obj_set_x(ui_OutputButton4, 3);
    lv_obj_set_y(ui_OutputButton4, 96);
    lv_obj_set_align(ui_OutputButton4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_OutputButton4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_OutputButton4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_OutputButton4, lv_color_hex(0x375374), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OutputButton4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OutputButton4, lv_color_hex(0x636D85), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_OutputButton4, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label19 = lv_label_create(ui_OutputButton4);
    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label19, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label19, "Output");
    lv_obj_set_style_text_color(ui_Label19, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label19, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container3 = lv_obj_create(ui_Screen4);
    lv_obj_remove_style_all(ui_Container3);
    lv_obj_set_width(ui_Container3, 212);
    lv_obj_set_height(ui_Container3, 53);
    lv_obj_set_x(ui_Container3, -46);
    lv_obj_set_y(ui_Container3, -19);
    lv_obj_set_align(ui_Container3, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container3, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Container3, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Input1 = lv_obj_create(ui_Container3);
    lv_obj_set_width(ui_Input1, 50);
    lv_obj_set_height(ui_Input1, 40);
    lv_obj_set_x(ui_Input1, -20);
    lv_obj_set_y(ui_Input1, 1);
    lv_obj_set_align(ui_Input1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Input1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Input2 = lv_obj_create(ui_Container3);
    lv_obj_set_width(ui_Input2, 50);
    lv_obj_set_height(ui_Input2, 40);
    lv_obj_set_x(ui_Input2, -64);
    lv_obj_set_y(ui_Input2, 2);
    lv_obj_set_align(ui_Input2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Input2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Input3 = lv_obj_create(ui_Container3);
    lv_obj_set_width(ui_Input3, 50);
    lv_obj_set_height(ui_Input3, 40);
    lv_obj_set_x(ui_Input3, 30);
    lv_obj_set_y(ui_Input3, 0);
    lv_obj_set_align(ui_Input3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Input3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Input4 = lv_obj_create(ui_Container3);
    lv_obj_set_width(ui_Input4, 50);
    lv_obj_set_height(ui_Input4, 40);
    lv_obj_set_x(ui_Input4, 80);
    lv_obj_set_y(ui_Input4, 0);
    lv_obj_set_align(ui_Input4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Input4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Container8 = lv_obj_create(ui_Screen4);
    lv_obj_remove_style_all(ui_Container8);
    lv_obj_set_width(ui_Container8, 196);
    lv_obj_set_height(ui_Container8, 21);
    lv_obj_set_x(ui_Container8, -43);
    lv_obj_set_y(ui_Container8, 23);
    lv_obj_set_align(ui_Container8, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container8, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Container8, LV_FLEX_ALIGN_SPACE_AROUND, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container8, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Labl1 = lv_label_create(ui_Container8);
    lv_obj_set_width(ui_Labl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Labl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Labl1, -69);
    lv_obj_set_y(ui_Labl1, -2);
    lv_obj_set_align(ui_Labl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Labl1, "1");
    lv_obj_set_style_text_color(ui_Labl1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Labl1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Labl2 = lv_label_create(ui_Container8);
    lv_obj_set_width(ui_Labl2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Labl2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Labl2, -33);
    lv_obj_set_y(ui_Labl2, -2);
    lv_obj_set_align(ui_Labl2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Labl2, "2");

    ui_Labl3 = lv_label_create(ui_Container8);
    lv_obj_set_width(ui_Labl3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Labl3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Labl3, 23);
    lv_obj_set_y(ui_Labl3, -5);
    lv_obj_set_align(ui_Labl3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Labl3, "3");

    ui_Labl4 = lv_label_create(ui_Container8);
    lv_obj_set_width(ui_Labl4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Labl4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Labl4, 73);
    lv_obj_set_y(ui_Labl4, -5);
    lv_obj_set_align(ui_Labl4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Labl4, "4");

    lv_obj_add_event_cb(ui_HomeButton4, ui_event_HomeButton4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TempButton4, ui_event_TempButton4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_HumButton4, ui_event_HumButton4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_InputButton4, ui_event_InputButton4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OutputButton4, ui_event_OutputButton4, LV_EVENT_ALL, NULL);

}
