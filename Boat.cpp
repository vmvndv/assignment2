//
// Created by Amanda Lee
//

#include "Boat.h"

Boat::Boat() {
	numberOfMotors = 1;
	setBrand("Custom");
	setFuelType("diesel");
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

//Mileage is 23 and if the number of motors is equal to or greater than 3, the mileage is increased by 3% of itself 
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
