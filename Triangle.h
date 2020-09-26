#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<new>
#include<math.h>

class triangle
{
private:
	int sideLength;
	int sideLenghtTwo;
	int sideLenghtThree;

	int angle;
	int angleTwo;
	int angleThree;



public:
	triangle();
	~triangle();

	//Methods 
	int AddSides(int value1, int value2, int value3);
	int AngleCalculator();

	//Getters 
	bool GetPerimiter();
	bool GetInternalAngle();

	//Setters
	void SetSide(int userLength);
	void SetAngle(int userAngle);

};