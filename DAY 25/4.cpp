/*
Problem: Write a program to Sort words by length.
*/

/*
Approach:
1. I will take the input of the words from the user.
2. I will assign the string array.
3. I will extract each word and push in string array.
4. I will sort the array on the basis of their word length.


TC:O(N)+O(NlogN)
SC:O(N)


*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    char str[100];
    cout << "Enter Words: ";
    cin.getline(str, 100);

    vector<string> words;

    string word = "";

    // Extract words
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            word += str[i];
        } else {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
    }

    // Add the last word
    if (!word.empty()) {
        words.push_back(word);
    }

    // Sort by word length
    sort(words.begin(), words.end(),
         [](string a, string b) {
             return a.length() < b.length();
         });

    cout << "\nWords sorted by length:\n";
    for (string w : words) {
        cout << w << " ";
    }

    return 0;
}
