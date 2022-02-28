#include <iostream>

int main()
{
    std::cout << "Hello! You are going to play the most annoying game in a minute. But firstly please write your name...";
    std::cout << std::endl;
    std::cout << "Enter corect code to continue...";

    const int a = 4;
    const int b = 4;
    const int c = 4;

    const int sum = a + b + c;
    const int product = a * b * c;

    std::cout << std::endl;
    std::cout << product << std::endl;
    std::cout << sum << std::endl;

    return 0;
}