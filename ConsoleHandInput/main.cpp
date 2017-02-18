#include "HandInput.h"

#include <string>
#include <iostream>

int main(int argc, char * argv[])
{
	HandInput* input = new HandInput();
	bool go = true;;
	while (go)
	{
		std::cout << "Enter 10 bit hex value (max 3FF) or enter Q to exit.\n";

		std::string in;
		std::cin >> in;

		if (in == "Q" || in == "q")
		{
			go = false;
		}
		else
		{
			std::cout << "Angle is " << input->getAngle(in.c_str()) << ".\n\n";
		}
	}
	delete input;
}