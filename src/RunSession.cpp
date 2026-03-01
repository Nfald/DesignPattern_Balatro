#include "RunSession.h"
#include <iostream>

void RunSession::start() {
    std::cout << "===== CARD RUN =====\n";

    bool play = true;

    while (play) {
        std::vector<int> hand;

        std::cout << "\nMasukkan 5 kartu (angka 1 - 13)\n";

        // Input kartu dari user
        for (int i = 0; i < 5; i++) {
            int card;
            std::cout << "Kartu " << i + 1 << ": ";
            std::cin >> card;
            hand.push_back(card);
        }

        // Hitung skor
        int score = scoring.calculateScore(hand);

        std::cout << "Score: " << score << "\n";

        // Tanya mau main lagi atau tidak
        char again;
        std::cout << "Main lagi? (y/n): ";
        std::cin >> again;

        if (again != 'y') {
            play = false;
        }
    }

    std::cout << "\nGame selesai!\n";
}