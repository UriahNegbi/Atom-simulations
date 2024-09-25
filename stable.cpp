#include <iostream>
#include <string>
#include <vector>
std::string Stability;

std::vector<int> magicNumbers = { 2, 8, 20, 28, 50, 82, 126 };

void checkStability(int atomList[]) {
    int protons = atomList[0];
    int neutrons = atomList[1];

    // Simple stability check for low proton numbers
    if (protons < 20) {
        if (protons == neutrons) {
            Stability = "Stable atom\n";
        }
        else {
            Stability = "Unstable atom\n";
        }
    }
    // Protons >= 20, check for magic numbers
    else {
        bool isMagicProton = false;
        bool isMagicNeutron = false;

        for (int magic : magicNumbers) {
            if (protons == magic) {
                isMagicProton = true;
            }
            if (neutrons == magic) {
                isMagicNeutron = true;
            }
        }

        // Check for stability based on magic numbers
        if (isMagicProton && isMagicNeutron) {
            Stability = "Doubly magic, highly stable atom\n";
        }
        else if (isMagicProton) {
            Stability = "Expected to be stable\n";
        }
        else if (neutrons >= protons) {
            Stability = "Expected to be stable\n";
        }
        else {
            Stability = "Unstable atom\n";
        }
    }
}