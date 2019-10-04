//
// Created by Amanda Lee
//

#include "Boat.h"

Boat::Boat() {
	numberOfMotors = 1;
	setBrand("Custom");
	setModel("YACHT"); 
}

Boat::Boat(string brand, string model, string fuelType, int numberOfMotors){
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setNumberOfMotors(numberOfMotors); 
}

Boat::~Boat() = default; 

int Boat::getNumberOfMotors(){
	return numberOfMotors;
}

void Boat::setNumberOfMotors(int numberOfMotors){
	numberOfMotors = numberOfMotors; 
}

double Boat::mileageEstimate(double time){
	double mileage = 23 * time; 
	if (numberOfMotors >= 3){
		mileage += mileage * 0.03;
	}
	return mileage; 
}

string Boat::toString(){
	return "-> Boat\n" + PoweredVehicle::toString() + "\n\tMotors: " + to_string(getNumberOfMotors());
}
}
