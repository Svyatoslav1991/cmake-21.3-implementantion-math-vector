#pragma once
#ifndef MATHVECTOR_H
#define MATHVECTOR_H

#include <string>
#include <iostream>

struct MathVector
{
	float m_x;
	float m_y;
	MathVector(float x = 0, float y = 0);
	friend std::ostream& operator<<(std::ostream& os, const MathVector& vec);
};



#endif // MATHVECTOR_H