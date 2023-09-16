#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    int obs[n];
    for(int i = 0; i < n; i ++){
        cin>>obs[i];
    }

    int max;
    cin>>max;
    int qt = 0;
    for(int i = 0; i < n; i++){

        if(obs[i] <= max)
            qt++;
        else
            break;
    }

    cout << qt << endl;
    
    if(qt == n)
        cout << "1" <<endl;
    else
        cout << "0" <<endl;
}