#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<new>
#include<math.h>

class triangle
{
private:


public:
    triangle();
    ~triangle();

    //Methodes 
    int AddSides();
    int AngleCalculator();

    //Getters 
    bool GetPerimiter();
    bool GetInternalAngle();

    //Setters
    void SetSide(int userLength);
    void SetAngle(int userAngle);

};