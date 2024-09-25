#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include "protonon.h"
#include "ion.h"
#include "stable.h"
#include "Mass.h"

void Color(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void input() {
	int input;
		//first place is proton second is electron third is neutron
		int atomList[] = { 0, 0, 0 };
		std::cout << "protons:" << std::endl;
		std::cin >> input;
		atomList[0] = input;

		std::cout << "electrons:" << std::endl;
		std::cin >> input;
		atomList[1] = input;

		std::cout << "neutrons:" << std::endl;
		std::cin >> input;
		atomList[2] = input;
		setElementName(atomList[0]);
		ionFinder(atomList);
		checkStability(atomList);
		calMass(atomList);
	}
void backEnd() {

		input();
		Color(6);
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "atom name: " << atom << std::endl;
		if (ion == "Neutral Atom") {
			std::cout << ion << std::endl;
		}
		else {
			std::cout << ion << " ion" << std::endl;
		}
		std::cout << Stability << "\n";
		std::cout << "mass:" << massReal << "\n";
		std::cout << "weight: " << mass << "(kg) \n";
		Color(7);
}
int main() {
	backEnd();
	system("pause");
}