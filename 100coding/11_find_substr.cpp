#include<iostream> 
#include<vector> 
using namespace std;

vector<string> findsub(string s){
    vector<string> ans;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i+1; j < s.length()-1; j++)
        {
            ans.push_back(s.substr(i,j-i));
        }
    }

    return ans;
    
}
int main()
{
    string s = "Tanish";

    vector<string> substrings = findsub(s);


    for(auto x : substrings){
        cout<<x<<" ";
    }
}