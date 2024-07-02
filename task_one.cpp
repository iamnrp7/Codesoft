#include<bits/stdc++.h>

int main() {
    // Seed the random number generator
    std::srand(std::time(0));
    
    // Generate a random number between 1 and 100
    int number_to_guess = std::rand() % 100 + 1;
    int user_guess = 0;

    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100. Can you guess what it is?" << std::endl;

    // Loop until the user guesses the correct number
    while (user_guess != number_to_guess) {
        std::cout << "Enter your guess: ";
        std::cin >> user_guess;

        if (user_guess < number_to_guess) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (user_guess > number_to_guess) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number." << std::endl;
        }
    }

    return 0;
}
