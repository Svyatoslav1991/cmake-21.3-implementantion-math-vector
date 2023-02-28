#include "mathvector.h"

MathVector::MathVector(float x, float y) : m_x(x), m_y(y)
{
}

std::ostream& operator<<(std::ostream& os, const MathVector& vec)
{
	os << "(" << vec.m_x << ", " << vec.m_y << ")";
	return os;
}
