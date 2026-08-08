#define FACE_RENDER_H
#include "../core/display_manager.h"
#include "../emotion/expression.h"

class FaceRender{
    public:
    FaceRender(DisplayManager* display);
    ~FaceRender();
    void drawEyes(EyeState state);
    void drawMouth(MouthState state);
    void drawEyebrows(EyebrowState state);
    void drawBaseFase();
    void drawBlickAnimation(float progress);

    private:
    DisplayManager* display;
    
    // Métodos privados para cada parte
    void drawEye(int x, int y, EyeState state);
    void drawHappyMouth();
    void drawSadMouth();
    void drawNeutralMouth();
    void drawSurprisedMouth();
    void drawAngryMouth();
    void drawEyebrow(int x, int y, EyebrowState state);


}
