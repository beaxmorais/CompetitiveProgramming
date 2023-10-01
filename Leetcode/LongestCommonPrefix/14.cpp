class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        string m = strs[0];

        for(int i=0; i<strs.size() -1; i++){
            string word = strs[i];
            string next_word = strs[i+1];
            
            for(int j= 0; j < word.size(); j++){
                if(word[j] == next_word[j])
                    prefix +=word[j];
                else
                    break;
            }
            
            m = min(m, prefix);
            prefix = "";
        }
        return m;
    }
};