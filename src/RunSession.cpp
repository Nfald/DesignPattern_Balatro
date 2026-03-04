#include "RunSession.h"
#include "ScoringSystem.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Array suit kartu
std::string suits[4] = {"Heart", "Diamond", "Club", "Spade"};

// Array rank kartu dari 2 sampai A
std::string ranksStr[13] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};

void RunSession::start() {

    std::srand(time(0)); // Inisialisasi random seed
    ScoringSystem scoring;

    // Target minimal skor tiap round
    int minimumScore[3] = {300, 450, 600};

    std::cout << "===== CARD RUN GAME =====\n";

    // Loop 3 round
    for (int round = 0; round < 3; round++) {

        std::cout << "\n=== ROUND " << round + 1 << " ===\n";
        std::cout << "Target Minimum Score: " << minimumScore[round] << "\n\n";

        int roundScore = 0; 
        // Player mulai dari 0 setiap round

        std::vector<int> randomRanks;

        // Generate 8 kartu random
        for (int i = 0; i < 8; i++) {

            int rank = rand() % 13;  // 0 - 12
            int suit = rand() % 4;   // 0 - 3

            randomRanks.push_back(rank);

            std::string card = ranksStr[rank] + " of " + suits[suit];
            std::cout << i + 1 << ". " << card << "\n";
        }

        std::cout << "\nPilih 5 kartu (masukkan nomor kartu): ";

        std::vector<int> chosenRanks;

        // Player memilih 5 kartu
        for (int i = 0; i < 5; i++) {
            int choice;
            std::cin >> choice;

            chosenRanks.push_back(randomRanks[choice - 1]);
        }

        // Hitung skor kombinasi
        roundScore = scoring.calculateScore(chosenRanks);

        std::cout << "Score Round Ini: " << roundScore << "\n";

        // Cek apakah memenuhi target minimal
        if (roundScore < minimumScore[round]) {
            std::cout << "\n Target tidak tercapai! GAME OVER.\n";
            return;
        }

        std::cout << " Target tercapai! Lanjut ke round berikutnya.\n";
    }

    std::cout << "\n🎉 SELAMAT! Semua round selesai!\n";
}