#include <iostream>

void PrintIntroduction(int LevelDifficulty)
{
    std::cout << "\n\nHello! You are going to play the most annoying game in a minute...\n";
    std::cout << "Enter corect code to continue...\n";
    std::cout << "LevelDifficulty is - " << LevelDifficulty;
    std::cout << "\n There are 3 numbers in the code\n";
}
bool PlayGame(int LevelDifficulty)
{

    PrintIntroduction(LevelDifficulty);

    int LevelMultiplier = 3 * LevelDifficulty;

    const int GuessA = 1 + rand() % LevelMultiplier;
    const int GuessB = 1 + rand() % LevelMultiplier;
    const int GuessC = 1 + rand() % LevelMultiplier;

    std::cout << GuessA << " " << GuessB << " " << GuessC << std::endl;

    int GuessSum, GuessProduct;

    // std::cin >> GuessA >> GuessB >> GuessC;

    const int ExpectedSum = GuessA + GuessB + GuessC;
    const int ExpectedProduct = GuessA * GuessB * GuessC;

    std::cout << "What is the sum?\n";
    std::cin >> GuessSum;
    std::cout << "What is the multiply?\n";
    std::cin >> GuessProduct;

    if (GuessSum == ExpectedSum && GuessProduct == ExpectedProduct)
    {
        std::cout << "You WON!";
        return true;
    }
    else
    {
        std::cout << "\nYou LOST!\n";
        std::cout << "sum is " << ExpectedSum;
        std::cout << "multiply is " << ExpectedProduct;

        return false;
    }
}
/*
     {
         bool status = true;

         if (GuessSum == ExpectedSum)
         {
             std::cout << "Sum is correct!\n";
         }
         else
         {
             std::cout << "\nSum is NOT correct!";
             std::cout << "\n+++ The numbers sum to: " << ExpectedSum;
             status = false;
         }

         if (GuessProduct == ExpectedProduct)
         {
             std::cout << "\nMultiply is correct!";
         }
         else
         {
             std::cout << "\nMultiply is NOT correct!\n";
             std::cout << "+++ The numbers multiplies to: " << ExpectedProduct;
             status = false;
         }

         if (!status)
         {
             std::cout << "\nYou LOST!\n";
             isNotEnd = true;
         }
     }
     */

int main()
{

    int LevelDifficulty = 1;
    const int MaxLevel = 4;

    while (LevelDifficulty <= MaxLevel)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    std::cout << "\nCongratulations you have reached maximum Level!";
    std::cout << "\nTHE END!";
    return 0;
}