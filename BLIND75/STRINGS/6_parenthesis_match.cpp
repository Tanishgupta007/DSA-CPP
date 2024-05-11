class Solution {
public:
    bool isValid(string s) {
        stack<char> sp;

        for(int i=0; i<s.length();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                sp.push(s[i]);
            }else{
                if(!sp.empty()){
                    if(s[i] == ')' && sp.top() == '('){
                        sp.pop();
                    }else if(s[i] == '}' && sp.top() == '{'){
                        sp.pop();
                    }else if(s[i] == ']' && sp.top() == '['){
                        sp.pop();
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
            }
        }
        return sp.empty();
    }
};