#include "ScoringSystem.h"
#include <unordered_map>

// Menghitung skor berdasarkan kombinasi kartu
int ScoringSystem::calculateScore(const std::vector<int>& ranks) {

    std::unordered_map<int,int> count;

    // Hitung frekuensi setiap rank
    for (int r : ranks)
        count[r]++;

    // Three of a kind
    for (auto c : count)
        if (c.second == 3)
            return 300;

    // Pair
    for (auto c : count)
        if (c.second == 2)
            return 100;

    // Jika tidak ada kombinasi
    return 20; // High card
}