/*
Problem: Write a program to Create quiz application.
*/

/*
Approach:
1. I will store questions, options and correct answers.
2. Then I will ask every question to the user.
3. If answer is correct then I will increase the score.
4. At last I will display the final score.

TC:O(N)
SC:O(N)

*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<string> questions = {
        "Which language is used in this assignment?",
        "Which symbol is used to end a statement in C++?",
        "Which loop runs at least one time?",
        "What is the index of first element in array?"
    };

    vector<vector<string>> options = {
        {"1. C", "2. C++", "3. Java", "4. Python"},
        {"1. .", "2. ,", "3. ;", "4. :"},
        {"1. for", "2. while", "3. do while", "4. none"},
        {"1. 0", "2. 1", "3. -1", "4. 2"}
    };

    vector<int> answers = {2, 3, 3, 1};

    int score = 0;

    int n = questions.size();

    for (int i = 0; i < n; i++) {
        cout << "\nQ" << i + 1 << ". " << questions[i] << endl;

        int m = options[i].size();
        for (int j = 0; j < m; j++) {
            cout << options[i][j] << endl;
        }

        int choice;
        cout << "Enter Your Answer" << endl;
        cin >> choice;

        if (choice == answers[i]) {
            cout << "Correct Answer" << endl;
            score++;
        } else {
            cout << "Wrong Answer" << endl;
        }
    }

    cout << "\nYour Score is " << score << " out of " << n;

    return 0;
}
