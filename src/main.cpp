#include <iostream>

#include "functions.h"


int main() {
	std::cout << "\tTask number 3\n";
	std::cout << "\tImplementation of a mathematical vector\n";

	std::string command;

	do
	{
		do
		{
			std::cout << "\nEnter a command:\n";
			std::cout << "\"add\"\t\taddition of two vectors\n";
			std::cout << "\"substruct\"\tsubtraction of two vectors\n";
			std::cout << "\"scale\"\t\tmultiplication of a vector by a scalar\n";
			std::cout << "\"length\"\tfinding the length of a vector\n";
			std::cout << "\"normalize\"\tvector normalization\n";
			std::cout << "\"exit\"\t\texit from the program\n";

			command = myCin<decltype(command)>();
		} while (!(command == "add" || command == "substruct" || command == "scale" 
			|| command == "length" || command == "normalize" || command == "exit"));

		if (command == "add")
		{
			std::cout << "The first math vector\n";
			MathVector vec1 = createMathVector();

			std::cout << "The second math vector\n";
			MathVector vec2 = createMathVector();

			std::cout << "The result of adding the first vector " << vec1 
				<< " with the second " << vec2 << " is " << add(vec1, vec2) << ".\n";
		}
		else if (command == "substruct")
		{
			std::cout << "The first math vector\n";
			MathVector vec1 = createMathVector();

			std::cout << "The second math vector\n";
			MathVector vec2 = createMathVector();

			std::cout << "The result of substruction the first vector " << vec1 
				<< " with the second " << vec2 << " is " << substruct(vec1, vec2) << ".\n";
		}
		else if (command == "scale")
		{
			std::cout << "Math vector\n";
			MathVector vec = createMathVector();

			float value;
			std::cout << "Value\n";
			value = myCin<decltype(value)>();

			std::cout << "The result of multiplying a vector " << vec 
				<< " by a number " << value << " is " << scale(vec, value) << ".\n";
		}
		else if (command == "length")
		{
			std::cout << "Math vector\n";
			MathVector vec = createMathVector();
			
			std::cout << "Vector " << vec << " lenght is " << length(vec) << ".\n";
		}
		else if (command == "normalize")
		{
			std::cout << "Math vector\n";
			MathVector vec = createMathVector();
			
			std::cout << "The vector " << vec << " normalization is " << normalize(vec) << ".\n";
		}

	} while (command != "exit");


	return 0;
}