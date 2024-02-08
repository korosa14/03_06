#include "Circle.h"
#include<stdio.h>

void Circle::Size()
{
	Radius_ = Radius_ * Radius_ * PI;
}

void Circle::Draw()
{
	printf("%f\n", Radius_);
}
