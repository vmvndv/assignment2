//
//Created by Amanda Lee 
//

#include "Jet.h"
#include <ctime>

Jet::Jet(string brand, string model, int numberOfEngines){
	setBrand(brand);
	setModel(model);
	setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default; 

int Jet::getNumberOfEngines(){
	return numberOfEngines;
}

void Jet::setNumberOfEngines(int numberOfEngines){
	numberOfEngines = numberOfEngines; 
}

double mileage(){
	double mileage = rand()%60+40;
	int engines = getNumberOfEngines();
	if (engines > 2){ mileage *= (5.5*engines); }
	return mileage
}

string Jet::toString(){
	string s = "-> Jet\n\t";
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngines: " + to_string(numberOfEngines);
}

