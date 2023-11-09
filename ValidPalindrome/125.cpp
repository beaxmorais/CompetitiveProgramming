//https://leetcode.com/problems/valid-palindrome/
//Two pointers
class Solution {
public:
    bool isPalindrome(string s) {
        string v = "";
        for(int i=0; i<s.size(); i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
                v +=tolower(s[i]);
        }

        int left = 0, right = v.size() -1;

        while(left < right){

            if(v[left] != v[right])
                return false;

            left++;
            right--;         
        }

        return true;
    }
};