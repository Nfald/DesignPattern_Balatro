#include "RunSession.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

RunSession::RunSession() {
    totalScore = 0;
    totalRounds = 3;
    std::srand(std::time(0));
}

void RunSession::start() {
    std::cout << "===== CARD RUN =====\n";

    for (int round = 1; round <= totalRounds; round++) {
        std::cout << "\nRound " << round << "\n";

        int baseScore = std::rand() % 10 + 5;
        std::cout << "Score this round: " << baseScore << "\n";

        totalScore += baseScore;
    }

    std::cout << "\n===== RUN FINISHED =====\n";
    std::cout << "Total Score: " << totalScore << "\n";
}