//
//Created by Amanda Lee
// 

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet: public PoweredVehicle{

private:
	int numberOfEngines; 

public:
	explicit Jet(string brand, string model, int numberOfEngines=1); 
	virtual ~Jet();
	int getNumberOfEngines();
	void setNumberOfEngines(int numberOfEngines); 
	virtual double mileage(double time); 

	virtual string toString(); 
};
#endif //DRIVINGSIMULATOR_JET_H
