/*
Program: Write a program to Write function to find
factorial.

*/


/*
Approach:
1. I will take input from the user for finding factorial.
2. Then i will call the recursive function.
3. It will do a recursive call of num*fact(num-1).
4. I will display the factorial.

TC:O(Num)
SC:O(Num)

*/


//code

#include <bits/stdc++.h>
using namespace std;


long long fact(int num){
    if(num==1 || num==0)
        return 1;

    return num * fact(num - 1);

}

int main() {

    int num;
    cout << "Enter the number for its factorial" << endl;
    cin >> num;
    cout << fact(num);

    return 0;
}
