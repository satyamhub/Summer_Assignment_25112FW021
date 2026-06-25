/*
Problem: Write a program to Remove duplicate
characters.
*/

/*
Approach:
1. I will take the input of the string from the user.
2. then i will itterate through the string.
3. And i will note the freq of the each character in freq vector.
4. If it does not appear earlier then i will push that character in the ans string.

TC:O(N)
Sc:O(1)


*/


//code

#include <bits/stdc++.h>
using namespace std;


int main() {

    string str;
    cout << "Enter the string" << endl;
    cin >> str;

    int n = str.size();
    string ans;
    vector<int> freq(256, 0);

    for (int i = 0; i < n; i++){
        if(freq[str[i]]==0){
            ans.push_back(str[i]);
        }
        freq[str[i]]++;
    }

    cout << ans;

    return 0;
}
