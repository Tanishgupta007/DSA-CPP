//gfg

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        vector<string> temp;
        string str = "";
        
        for(int i=0;i<S.length();i++){
            if(S[i] == '.'){
                temp.push_back(str);
                temp.push_back(".");
                str = "";
            }else{
                str = str + S[i];
            }
        }
        //for last element
        temp.push_back(str);
        str = "";
        for(int i=temp.size()-1;i>=0;i--){
            str += temp[i];
        }
        return str;
    } 
};
