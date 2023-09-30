#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int lengthOfLongestSubstring(string s){

    if(s.size() < 1)
        return 0;

    int max_lenght_substring = 0;

    int begin =0, end =0;

    for(int i =1; i <s.size(); i++){
        max_lenght_substring = max(max_lenght_substring, (end - begin)+1);

        for(int j=begin; j <=end; j++){

            if (s[j] == s[i]){
                begin = j + 1;
            }
        }
        end = i;
    }

    return max_lenght_substring;
}

int main() {
    string s;
    cin>>s;

    cout << lengthOfLongestSubstring(s) <<endl;
    return 0;
}