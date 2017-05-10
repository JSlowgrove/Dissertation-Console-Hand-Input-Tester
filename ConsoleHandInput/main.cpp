#include "HandInput.h"

#include <string>
#include <iostream>

int main(int argc, char * argv[])
{
	//initalise the hand input
	HandInput* input = new HandInput();

	//start the loop
	bool go = true;;
	while (go)
	{
		std::cout << "Enter 10 bit hex value (max 3FF) or enter Q to exit.\n";

		//recive the user input
		std::string in;
		std::cin >> in;

		//output the calculated angle, or quit the loop
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