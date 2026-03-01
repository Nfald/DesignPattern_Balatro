#include "ScoringSystem.h"
#include <unordered_map>

// Fungsi utama hitung skor
int ScoringSystem::calculateScore(const std::vector<int>& hand) {
    // Contoh sistem skor sederhana
    if (isThreeOfKind(hand)) {
        return 300; // skor untuk three of a kind
    }
    if (isPair(hand)) {
        return 100; // skor untuk pair
    }

    return 10; // high card
}

// Cek Pair
bool ScoringSystem::isPair(const std::vector<int>& hand) {
    std::unordered_map<int, int> count;

    for (int card : hand) {
        count[card]++;
    }

    for (auto& c : count) {
        if (c.second >= 2) {
            return true;
        }
    }
    return false;
}

// Cek Three of a kind
bool ScoringSystem::isThreeOfKind(const std::vector<int>& hand) {
    std::unordered_map<int, int> count;

    for (int card : hand) {
        count[card]++;
    }

    for (auto& c : count) {
        if (c.second >= 3) {
            return true;
        }
    }
    return false;
}