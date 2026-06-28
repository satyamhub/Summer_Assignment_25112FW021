/*
Problem: Write a program to Create voting eligibility
system.
*/

/*
Approach:
1. I will take the name and age from the user.
2. Then I will check age is greater than or equal to 18 or not.
3. If age is valid then user is eligible for voting otherwise not eligible.

TC:O(1)
SC:O(1)

*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    string name;
    int age;

    cout << "Enter Your Name" << endl;
    cin >> name;

    cout << "Enter Your Age" << endl;
    cin >> age;

    if (age >= 18) {
        cout << name << " is eligible for voting.";
    } else {
        cout << name << " is not eligible for voting.";
    }

    return 0;
}
