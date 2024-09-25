#include <iostream>
double mass;
int massReal;
void calMass(int atomList[]){
	double massnuetrons = 1.674927471e-27;
	double massprotons = 1.67262192369e-27;
	double masselectrons = 9.1093837015e-31;
	int protons = atomList[0];
	int nuetrons = atomList[2];
	int electrons = atomList[1];
	mass = electrons * masselectrons + protons * massprotons + nuetrons * massnuetrons;
	massReal = protons + nuetrons;
}