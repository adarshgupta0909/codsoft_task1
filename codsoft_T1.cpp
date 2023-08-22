#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>( time(nullptr)));

    // Generate a random number between 1 and 100
    int targetNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;
    cout<<"                                                                                      "<<endl;
    cout<<"                                                                                      "<<endl;
    cout<<"                                                                                      "<<endl;
    cout <<"_____________*********Welcome to the Number Guessing Game!********_________________"<< endl;
    cout << "____________Selected a random number between 1 and 100____________________________" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > targetNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < targetNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number " << targetNumber << " in " << attempts << " attempts." << endl;
        }

    } while (guess != targetNumber);

    return 0;
}