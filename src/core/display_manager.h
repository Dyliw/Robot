#define DISPLAY_MANAGER_H
#include <U8g2lib.h>
#include <SPI.h>
#include "display_config.h"

class DisplayManager{
    public: 
    DisplayManager();
    ~DisplayManager();
    void begin();
    void clear();
    void startFrame();
    bool nextFrame();
    void endFrame();

    U8G2_SSD1306_128X64_NONAME_1_4W_HW_SPI* getDisplay();
    void drawDisc(int x, int y, int radius);
    void drawDisc1(int x, int y, int rx, int ry);

    private:
    U8G2_SSD1306_128X64_NONAME_1_4W_HW_SPI* u8g2;
    bool initialized;

};
