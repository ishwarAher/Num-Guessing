#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    bool guessed = false;
    cout << "Welcome to the Guess the Number game!" << endl;
    while (!guessed) {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> guess;
        attempts++;
        if (guess == secretNumber) {
            guessed = true;
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }

    return 0;
}
