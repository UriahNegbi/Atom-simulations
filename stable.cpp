#include <iostream>
#include <string>
#include <vector>

std::string Stability;

std::vector<int> magicNumbers = { 2, 8, 20, 28, 50, 82, 126 };

void checkStability(int atomList[]) {
    int protons = atomList[0];
    int neutrons = atomList[1];
    double neutronProtonRatio = static_cast<double>(neutrons) / protons;

    bool isMagicProton = false;
    bool isMagicNeutron = false;

    // Check for magic numbers in protons and neutrons
    for (int magic : magicNumbers) {
        if (protons == magic) {
            isMagicProton = true;
        }
        if (neutrons == magic) {
            isMagicNeutron = true;
        }
    }

    // Simplified stability logic based on proton count and N/Z ratio
    if (protons < 20) {
        if (protons == neutrons) {
            Stability = "Stable atom\n";
        }
        else if (neutronProtonRatio > 1.5) {
            Stability = "Neutron-rich, possibly unstable\n";
        }
        else if (neutronProtonRatio < 1.0) {
            Stability = "Proton-rich, possibly unstable\n";
        }
        else {
            Stability = "Slightly unstable\n";
        }
    }
    // For larger atoms, consider magic numbers and ratios
    else {
        if (isMagicProton && isMagicNeutron) {
            Stability = "Doubly magic, highly stable atom\n";
        }
        else if (isMagicProton || isMagicNeutron) {
            Stability = "Magic number stability, likely stable\n";
        }
        else if (neutronProtonRatio > 1.5) {
            Stability = "Neutron-rich, unstable\n";
        }
        else if (neutronProtonRatio < 1.0) {
            Stability = "Proton-rich, unstable\n";
        }
        else {
            Stability = "Expected to be stable\n";
        }
    }
}