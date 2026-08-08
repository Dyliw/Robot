#include "face_render.h"
#include "../core/display_config.h"

FaceRender::FaceRender(DisplayManager *displayManager): display(displayManager){
}
FaceRender::~FaceRender(){}
void FaceRender::drawEyes(int x, int y, EyeState state){
    auto* u8g2 = display->getDisplay();

    switch (state)
    {
    case EyeState :: OPEN:
        u8g2->drawDisc(x, y, EYE_RADIUS);
        u8g2->setDrawColor(0);
        u8g2->setDrawColor(1);
        break;

    case EyeState :: CLOSED:
    u8g2->drawLine(
        x - EYE_RADIUS,
        y,
        x + EYE_RADIUS,
        y
    );
    break;
    case EyeState :: OPENING:
    u8g2->drawEllipse(x, y, EYE_RADIUS, 3);
    break;
    }
}

void FaceRender::drawEyes(EyeState state){
    drawEye(EYE_LEFT_X, EYE_Y, state);
    drawEye
}
