#pragma once
#include "IShape.h"
#include<stdio.h>

class Rectangle : public IShape
{
public:
	void Size();

	void Draw();
private:

	float Radius_ = 20.0f;
};

