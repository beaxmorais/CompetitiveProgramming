class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;

        if(s.size() < 2)
            return false;

        for(int i =0; i<s.size(); i++){

            if(s[i] == '(')
                brackets.push(')');

            else if (s[i] == '[')
                brackets.push(']');

            else if(s[i] == '{')
                brackets.push('}');
        
            else if(!brackets.empty() && s[i] == ')' && s[i] == brackets.top())
                brackets.pop();

            else if(!brackets.empty() && s[i] == ']' && s[i] == brackets.top())
                brackets.pop();

            else if(!brackets.empty() && s[i] == '}' && s[i] == brackets.top())         
                brackets.pop();
            
            else
                return false;
        }

        if(brackets.empty())
            return true;
            
        return false;
    }
};