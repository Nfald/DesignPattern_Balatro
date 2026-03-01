#pragma once
#include <vector>
#include <string>

// Class untuk menghitung skor kombinasi kartu
class ScoringSystem {
public:
    // Fungsi utama untuk menghitung skor
    int calculateScore(const std::vector<int>& hand);

private:
    // Fungsi helper untuk cek kombinasi
    bool isPair(const std::vector<int>& hand);
    bool isThreeOfKind(const std::vector<int>& hand);
};