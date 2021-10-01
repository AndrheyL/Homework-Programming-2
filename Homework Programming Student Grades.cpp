// Homework Programming Student Grades.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int marks;

    std::cout << "\nEnter Marks :";
    std::cin >> marks;
    if (marks >= 90 && marks <= 100)
        std::cout << "Your Grade is A.";

    else if (marks >= 80 && marks < 90)
        std::cout << "Your grade is A. Excellent!";

    else if (marks >= 70 && marks < 80)
        std::cout << "Your grade is B. Well done!";

    else if (marks >= 60 && marks < 70)
        std::cout << "Your grade is C. You could do better...";

    else if (marks >= 50 && marks < 60)
        std::cout << "Your grade is D. You have to work harder.";

    else if (marks >= 0 && marks < 50)
        std::cout << "Your grade is F. You failed... loser.";

    else std::cout << "Invalid...";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
