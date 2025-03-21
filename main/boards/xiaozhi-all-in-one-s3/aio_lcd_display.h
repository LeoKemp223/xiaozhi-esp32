#ifndef AIO_LCD_DISPLAY_H
#define AIO_LCD_DISPLAY_H

#include "display.h"
#include "lcd_display.h"

#include <esp_lcd_panel_io.h>
#include <esp_lcd_panel_ops.h>
#include <font_emoji.h>
#include <atomic>

// AIO LCD显示器
class AioLcdDisplay : public LcdDisplay
{
    public:
    AioLcdDisplay(esp_lcd_panel_io_handle_t panel_io, esp_lcd_panel_handle_t panel,
                  int width, int height, int offset_x, int offset_y,
                  bool mirror_x, bool mirror_y, bool swap_xy,
                  DisplayFonts fonts);
    ~AioLcdDisplay();
    virtual void SetEmotion(const char* emotion) override;
    virtual void SetIcon(const char* icon) override;

    protected:
    void update_grad(const char* emotion);
    virtual void SetupUI() override;
    lv_obj_t *emotion_img_ = nullptr;
    lv_grad_dsc_t grad;

};

#endif
