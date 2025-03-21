// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: tft_Project

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x0A1520), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel1, 258);
    lv_obj_set_height(ui_Panel1, 188);
    lv_obj_set_x(ui_Panel1, 1);
    lv_obj_set_y(ui_Panel1, -2);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_Panel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -81);
    lv_obj_set_y(ui_Label1, -64);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "UID         : ");
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -82);
    lv_obj_set_y(ui_Label2, -34);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "ITEM       :");
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -82);
    lv_obj_set_y(ui_Label4, -2);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "WEIGHT :");
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, -82);
    lv_obj_set_y(ui_Label5, 30);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "TIME       :");
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_uidLabel = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_uidLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_uidLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_uidLabel, 19);
    lv_obj_set_y(ui_uidLabel, -64);
    lv_obj_set_align(ui_uidLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_uidLabel, "8736929192");

    ui_itemLabel = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_itemLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_itemLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_itemLabel, 8);
    lv_obj_set_y(ui_itemLabel, -34);
    lv_obj_set_align(ui_itemLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_itemLabel, "WHEAT");

    ui_weightLabel = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_weightLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_weightLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_weightLabel, 5);
    lv_obj_set_y(ui_weightLabel, -2);
    lv_obj_set_align(ui_weightLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_weightLabel, "1.00 kg");

    ui_timeLabel = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_timeLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_timeLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_timeLabel, 7);
    lv_obj_set_y(ui_timeLabel, 30);
    lv_obj_set_align(ui_timeLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_timeLabel, "05:45:00");

    ui_Label6 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, -82);
    lv_obj_set_y(ui_Label6, 62);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "DATE      :");
    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dateLabel = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_dateLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_dateLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_dateLabel, 16);
    lv_obj_set_y(ui_dateLabel, 62);
    lv_obj_set_align(ui_dateLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_dateLabel, "21/02/2025");


}
