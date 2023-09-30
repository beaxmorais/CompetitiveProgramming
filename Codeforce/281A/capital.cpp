#include <iostream>
#include <cctype>

using namespace std; 

int main() {
  string word;
  cin>>word;

  for (int i=0; i<1; i++){
    word[i] = toupper(word[i]);
  }

  cout << word << endl;
}