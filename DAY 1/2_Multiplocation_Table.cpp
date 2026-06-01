/*
Problem: Write the table of the given number N.
*/


/*
Method:
1. I will take input from the user.
2. I will run loop from 1 to 10 and i will multiply the it.
3. I will display table.
*/


//Code

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    for(int i=1; i<=10; i++){
        cout<<endl<<num<<"x"<<i<<"="<<num*i;
    }
    cout<<endl;
    return 0;

}