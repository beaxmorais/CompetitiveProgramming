#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string y = to_string(x);
        int i = 0, j = y.size() - 1;

        while ( i < j){
            if(y[i] != y[j]){
            return false;
            }
            i++;
            j--;
        }

        return true;
    }
};