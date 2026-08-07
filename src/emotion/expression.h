#define EXPRESSION_H

enum class EyeState{
    OPEN,
    CLOSING,
    CLOSED,
    OPENING
};
enum class MouthState{
    HAPPY,
    SAD,
    ANGRY,
    NEUTRAL,
    SURPRISED
};

enum class EyebrowState {
    NEUTRAL,
    RAISED,
    LOWERED,
    ANGRY
};

struct Expression {
    EyeState eyes;
    MouthState mouth;
    EyebrowState eyebrows;
    
    Expression(
        EyeState e = EyeState::OPEN,
        MouthState m = MouthState::NEUTRAL,
        EyebrowState b = EyebrowState::NEUTRAL
    ) : eyes(e), mouth(m), eyebrows(b) {}
};
