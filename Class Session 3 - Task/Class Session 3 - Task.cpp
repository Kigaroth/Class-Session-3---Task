// Class Session 3 - Task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
    int num = 0;

    std::vector <int> numbers(2, 0);
    std::cout << "How many numbers do you want to add?";
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        std::cout << "Enter a number: ";
        int x = 0;
        std::cin >> x;
        numbers.push_back(x);
    }
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers.at(i);
    }


    return 0;
}

