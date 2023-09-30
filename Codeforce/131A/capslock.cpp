#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin>>s;
    
    if(s.size() < 2){
        cout <<"Uma letra" <<endl;
        return 0;
    }

    if(int(s[0]) > 65 && int(s[0])  < 90)
        cout << "Primeira upper case" <<endl;

    else{
        if(int(s[1])  >= 65 && int(s[1]) <= 90)
            cout << "Segunda letra lower case" <<endl;
    }
}