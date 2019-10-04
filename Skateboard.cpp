// 
// Created by Amanda Lee
//

#include "Skateboard.h"
#include <ctime>

Skateboard::Skateboard(string brand, string model){
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time){
	double mileage = rand() % 0.4+0.1; 
	mileage *= time; 
	if (time > 25 && time < 250){
		mileage += rand()%floor(time/3)+1;
	}
	return mileage; 
}

string Skateboard::toString(){
	string s = "-> Skateboard\n\t";
	return "-> Skateboard \n" + Vehicle::toString(); 
}
