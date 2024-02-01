// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
void Move_Animation(lv_obj_t * TargetObject, int delay);
void Moveback_Animation(lv_obj_t * TargetObject, int delay);
void moveleft_Animation(lv_obj_t * TargetObject, int delay);
void moveleftback_Animation(lv_obj_t * TargetObject, int delay);
void Enlarge_Animation(lv_obj_t * TargetObject, int delay);
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Panel2;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_eye_png);    // assets\eye.png



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif