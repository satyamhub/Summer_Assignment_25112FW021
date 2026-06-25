/*
Problem: Write a program to Find longest word.
*/

/*
Approach:
1. I will take the input from the user of the string.
2. Then I will run a loop till the end of the sentence.
3. Then I will assing count and maxi.
4. I will count the length of each word and keep in temp string,
   if the temp is greater than the previous max i will put in ans string.

TC:O(N)
SC:O(1)

*/


#include <bits/stdc++.h>
using namespace std;


int main() {

    char str[100];
    cout << "Enter the string" << endl;
    cin.getline(str, 100);

    int cnt = 0;
    string ans;
    int maxi = 0;
    string temp;

    int i = 0;
    while(str[i]!='\0'){
        maxi = max(cnt, maxi);
        if(str[i]==' '){
            cnt = 0;
            temp ="";
        }
        cnt++;
        temp.push_back(str[i]);

        if (cnt > maxi) {
            ans = temp;
        }
        i++;
    }

    cout << ans;

    return 0;
}
