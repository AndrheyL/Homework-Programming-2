// Homework Programming Killing Time.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    bool lateFriend = false;
    int minutesLate = 15;
    int pocketMoney = 5;

    std::cout << "How long did you wait your friend\n";
    std::cin >> minutesLate;

    if (minutesLate >= 15)
    {
        std::cout << "Get coffee\n";
        {
            std::cout << "How much money do you have on your pocket?\n";
            std::cin >> pocketMoney;
            if (pocketMoney >= 5)
                std::cout << "You can get a coffee and wait some more.\n";
            else
                std::cout << "Go around town wandering off while waiting for your friend...";
        }
        
    }
    if (15 >= minutesLate)
    {
        std::cout << "Wait for your friend in the food court.";
    }
    return 0;
}
// Miss, it was kind of confusing for me on doing this task so I just went for the normal if-else statements..//
// I will focus and try more on nested ifs...//
// Also I will try to do the earthquake homework if I can, just that I will be late sending it//
// Lastly, I need some feedback for this so I can improve hehe thanks!//