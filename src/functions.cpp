#include "functions.h"

#include <math.h>
#include "mathvector.h"


//addition of two vectors
MathVector add(const MathVector& vec1, const MathVector& vec2) noexcept
{
	return MathVector(vec1.m_x + vec2.m_x, vec1.m_y + vec2.m_y);
}

///////////////////////////////////////////////////////

//subtraction of two vectors
MathVector substruct(const MathVector& vec1, const MathVector& vec2) noexcept
{
	return MathVector(vec1.m_x - vec2.m_x, vec1.m_y - vec2.m_y);
}

///////////////////////////////////////////////////////

//multiplication of a vector by a scalar
MathVector scale(const MathVector& vec, const float VALUE) noexcept
{
	return MathVector(vec.m_x * VALUE, vec.m_y * VALUE);
}

///////////////////////////////////////////////////////

//finding the length of a vector
float length(const MathVector& vec) noexcept
{
	return sqrt(pow(vec.m_x, 2) + pow(vec.m_y, 2));
}

///////////////////////////////////////////////////////

//vector normalization
MathVector normalize(const MathVector& vec) noexcept
{
	float inv = 1.f / length(vec);
	return scale(vec, inv);
}

///////////////////////////////////////////////////////

//ñreate math vector
MathVector createMathVector() noexcept
{
	MathVector vec;
	std::cout << "The x-coordinate of vector\n";
	vec.m_x = myCin<decltype(vec.m_x)>();

	std::cout << "The y-coordinate of vector\n";
	vec.m_y = myCin<decltype(vec.m_y)>();

	return vec;
}
