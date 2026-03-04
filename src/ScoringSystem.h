#ifndef SCORING_SYSTEM_H
#define SCORING_SYSTEM_H

#include <vector>

// Class untuk menghitung skor kombinasi poker
class ScoringSystem {
public:
    int calculateScore(const std::vector<int>& ranks);
};

#endif