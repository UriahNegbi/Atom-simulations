#include <iostream>

std::string ion;
void ionFinder(int atomlist[]) {
	int protons = atomlist[0];
	int electrons = atomlist[1];

	if (electrons > protons) {
		ion = "-";
	}
	else if (protons > electrons) {
		ion = "+";
	}
	else {
		ion = "Neutral Atom";
	}
}