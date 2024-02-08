#include "Rectangle.h"
#include<stdio.h>

void Rectangle::Size()
{
	Radius_ = Radius_ * Radius_;
}

void Rectangle::Draw()
{
	printf("%f\n", Radius_);
}
