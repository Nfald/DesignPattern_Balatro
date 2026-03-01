#pragma once
#include "ScoringSystem.h"
#include <vector>

class RunSession {
public:
    void start();

private:
    ScoringSystem scoring; // sistem skor
};