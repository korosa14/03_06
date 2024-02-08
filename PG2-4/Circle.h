#pragma once
#include "IShape.h"
#include<stdio.h>

class Circle : public IShape
{
public:

	void Size();

	void Draw();

private:


	float Radius_ = 20.0f;

	float PI = 3.14f;
};

