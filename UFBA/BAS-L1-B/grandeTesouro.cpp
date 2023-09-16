#include <iostream>
using namespace std;

int main() {
    
    int tesouros[6];
    int total = 0;

    for (int i = 0; i <6; i++)
        cin>>tesouros[i];

    for(int i = 0; i <6; i++){
        total +=tesouros[i];
    }

    cout << total << endl;
}