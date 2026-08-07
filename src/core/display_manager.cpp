#include "display_manager.h"

DisplayManager::DisplayManager(){
    u8g2 = new U8G2_SSD1306_128X64_NONAME_1_4W_HW_SPI(
        U8G2_R0,
        PIN_CS,
        PIN_DC,
        PIN_RES
    );
    initialized = false;

}

DisplayManager::~DisplayManager(){
    delete u8g2;
}

void DisplayManager::begin(){
    if(!initialized){
        u8g2->begin();
        initialized = true;
    }
}

void DisplayManager::clear(){
    u8g2->clearBuffer();
}
void DisplayManager::startFrame(){
    u8g2->firstPage();
}
bool DisplayManager::nextFrame(){
    return u8g2->nextPage();
}
void DisplayManager::endFrame(){

}
U8G2_SSD1306_128X64_NONAME_1_4W_HW_SPI* DisplayManager::getDisplay(){
    return u8g2;
}
void DisplayManager::drawDisc(int x, int y, int radius) {
    u8g2->drawDisc(x, y, radius);
}

void DisplayManager::drawDisc1(int x, int y, int rx, int ry) {
    u8g2->drawFilledEllipse(x, y, rx, ry);
}
