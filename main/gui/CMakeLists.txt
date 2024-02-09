SET(SOURCES screens/ui_Screen1.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_eye_png.c
    images/ui_img_blackscreen_png.c)

add_library(ui ${SOURCES})
