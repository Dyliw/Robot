#include "emotion_engine.h"
#include "expression.h"
#include "emotion_state.h"

Expression EmotionEngine::getExpression() {

    switch(currentEmotion) {

        case EmotionState::HAPPY:
            return {
                EyeState::OPEN,
                MouthState::HAPPY,
                EyebrowState::RAISED
            };

        case EmotionState::SAD:
            return {
                EyeState::OPEN,
                MouthState::SAD,
                EyebrowState::LOWERED
            };

        case EmotionState::SURPRISED:
            return {
                EyeState::OPEN,
                MouthState::SURPRISED,
                EyebrowState::RAISED
            };

        default:
            return {};
    }
}
