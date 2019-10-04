//
// Created by Amanda Lee
//

#ifndef DRIVINGSIMULATOR_BOAT_H
#define DRIVINGSIMULATOR_BOAT_H

#include "PoweredVehicle.h" 

class Boat : public PoweredVehicle {

private:
	int numberOfMotors;
public:
	Boat();
	explicit Boat(string brand, string model, string fuelType, int numberOfMotors);
	virtual ~Boat(); 
	int getNumberOfMotors();
	void setNumberOfMotors(int numberOfMotors);
	virtual double mileageEstimate(double time);
	virtual string toString();

};
#endif //DRIVINGSIMULATOR_BOAT_H 
