// Homework Programming Music Band.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	
	bool musicalFriend = true;

	std::string friendPlays = "guitar";

	std::cout << "Enter the game you can play: ";
	std::cin >> friendPlays;

	if (musicalFriend == true) {
		if (friendPlays == "guitar") {
			std::cout << "Now you guys can play the band together!";
		}
		if (friendPlays == "drum") {
			std::cout << "You need to find another person to be able to play the band together...";
		}
	}
	else {
		std::cout << "You cannot start the band";
	}
}
