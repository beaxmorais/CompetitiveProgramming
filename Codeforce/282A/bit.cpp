/*
    The language is that peculiar as it has exactly one variable, called x.

    Operation ++ increases the value of variable x by 1.
    Operation -- decreases the value of variable x by 1. 
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
 
    int x=0;
    string bit[n];

    for (int i = 0; i < n; i++){
        cin>>bit[i];
    }

    for(int i=0; i<n; i++){
        if(bit[i] == "X++" || bit[i] == "++X")
            x++;
        else
            x--;
    }

    cout << x << endl;
}