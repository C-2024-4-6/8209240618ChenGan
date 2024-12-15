#include<iostream>
static bool is_valid(double side1, double side2, double side3)
{
	int i;
	if (side1 + side2 <= side3 || side1 + side3 <= side2 || side3 + side2 <= side1)
	{
		i = 0;
	}
	else
	{
		i = 1;
	}
	return i;
}
static double double_area(double side1, double side2, double side3)
{
	
	double s = (side1 + side2 + side3) / 2.0;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
	
}