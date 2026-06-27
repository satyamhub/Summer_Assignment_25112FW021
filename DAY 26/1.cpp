/*
Problem: Write a program to Create number guessing
game.

*/

/*
Approach:
1. I will initiaize a random number between 1 and 10.
2. Then I will take the guessed number input from the user.
3. Then if both matches i will display Result.


TC:O(Number of wrong guess)
SC:O(1)


*/


//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    srand(time(0));
    int num = rand() % 10 + 1;

    int guessed;

    cout << "Guess the number between 1 and 10\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> guessed;

        if (guessed == num) {
            cout << "Congratulations! You guessed the correct number.";
            break;
        } else if (guessed < num) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Too high! Try again.\n";
        }
    }

    return 0;
}
