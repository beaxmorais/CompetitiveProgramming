//https://leetcode.com/problems/counting-bits/
// Dynamic programming
class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans;
        ans.push_back(0);
        
        for(int i=1; i<n+1; i++){
            int value = ans[floor(i/2)] + (i % 2);
            ans.push_back(value);
        }   
        return ans;
    }
};