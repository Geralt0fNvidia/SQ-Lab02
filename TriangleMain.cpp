#include "Triangle.h"




int main(void)
{
	double angle1;
	double angle2;
	double side1;
	double side2;
	int change;

	bool testCheck = false;
	triangle userTriangle;

	userTriangle.SideTest(side1);
	userTriangle.SideTest(side2);
	userTriangle.AngleTest(angle1);
	userTriangle.AngleTest(angle2);
	testCheck = userTriangle.TestingAngles(angle1, angle2);
	if (testCheck == false)
	{
		do
		{
			printf("Your two angles are equal to or above 180, Please Select what you want to change: /n 1.%f /n 2.%f", angle1, angle2);
			change = 1;
			userTriangle.AngleTest(angle1);
			testCheck = userTriangle.TestingAngles(angle1, angle2);
		} while (testCheck != true);

	}

	return 0;

}
