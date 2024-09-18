#include <iostream>
#include <string>
std::string Stability;

void checkStability(int atomList[]) {
	int protons = atomList[0];
	int neutrons = atomList[2];

	if (protons < neutrons) {
		Stability = "unStable atom\n";
	}
	else {
		Stability = "stable atom \n";
	}
}