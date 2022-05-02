// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: April 28, 2022
// This program asks the user for the number of numbers to add together.
// It then uses a while loop to ask the user for the number to add
// and If it is a whole number, add it to the current sum. Otherwise,
// don't and continue the loop then display the numbers added and the final sum

#include <iostream>
#include <string>
#include <random>


int main() {
    // declare variables
    std::string rollAgain;
    int random1, random2;
    
    // initialize min and max for random number, and counter
    int min = 1;
    int max = 6;
    int counter = 0;
    
    rollAgain = "yes";
    
    while (rollAgain == "yes" or rollAgain == "y") {
        counter = counter + 1;
        // generate 2 random numbers 
        // first random number
        int random1;

        std::random_device rseed;

        std::mt19937 rgen(rseed()); // mersenne_twister

        std::uniform_int_distribution<int> idist(1, 6); // [1,6]

        random1 = idist(rgen);
        
        // 2nd random number
        int random2;

        std::random_device rseed2;

        std::mt19937 rgen2(rseed()); // mersenne_twister

        std::uniform_int_distribution<int> idist2(1, 6); // [1,6]

        random2 = idist(rgen);
        
        std::cout << "Rolling the dices...\n";
        std::cout << "The values are....\n";
        std::cout << random1 << ", " << random2 << "\n";
        std::cout << "\n";
        
        
        // if the dice are the same, then it will roll doubles and the
        // program will end and tell them how many attempts it took
        if (random1 == random2) {
            std::cout << "You rolled doubles!! Thanks for playing!\n";
            std::cout << "It took " << counter << " tries to roll doubles\n";
            break;
        }
        
        // ask the user if they want to roll again
        std::cout << "Roll the dices again?: ";
        std::cin >> rollAgain;
        
        // if the user enters no the program will end
        if (rollAgain == "no" or rollAgain == "n") {
            std::cout << "Thanks for playing!!";
            break;
        }
        
    }

}
