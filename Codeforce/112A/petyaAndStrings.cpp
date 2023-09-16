#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main() {

    vector <string> petya(2);
    vector <int> first;
    vector <int> second;

    f_minor = 0;
    s_minor = 0;

    for (int i=0; i < petya.size(); i++){
        cin>>petya[i];
    }

    first_letter = petya[0];
    second_letter = petya[1];
    for (int i = 0; i < first_letter.length(); i++){
        first.push_back(static_cast<int>(first_letter[i]));
        second.push_back(static_cast<int>(second_letter[i]));
    }

    for(int i = 0; i < first.length(); i++){
        if ( i+1 < first.length() && first[i] < first[i+1])
            f_minor = first[i];
    }

    for(int i = 0; i < second.length(); i++){
        if ( i+1 < second.length() && second[i] < second[i+1])
            s_minor = second[i];
    }

    if (f_minor < s_minor)
        cout << "Primeira frase tem a menor letra"<<endl;
    else
        cout << "Segunda frase tem a menor letra" <<endl;
}