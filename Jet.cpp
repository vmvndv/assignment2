//
//Created by Amanda Lee 
//

#include "Jet.h"
#include <ctime>

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines){
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType); 
	setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default; 

int Jet::getNumberOfEngines(){
	return numberOfEngines;
}

void Jet::setNumberOfEngines(int numberOfEngines){
	numberOfEngines = numberOfEngines; 
}

double mileageEstimate(double time){
	double mileage = rand()%60+40;
	int engines = getNumberOfEngines();
	if (engines > 2){ 
		mileage *= (5.5*engines); 
		setFuelType("Rocket");
	}
	return mileage * time;
}

string Jet::toString(){
	string s = "-> Jet\n\t";
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngines: " + to_string(numberOfEngines);
}

