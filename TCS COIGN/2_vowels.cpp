#include <iostream>
#include <vector>
using namespace std;

void solve(vector<char> virat, vector<char> rohit, string input1)
{
    int viratCount = 0, rohitCount = 0;

    for (int i = 0; i < input1.length(); i++)
    {
        for (int j = 0; j < virat.size(); j++)
        {
            if(input1[i] == virat[j]){
                viratCount++;
                break;
            }
        }
    }
    

    for (int i = 0; i < input1.length(); i++)
    {
        for (int j = 0; j < rohit.size(); j++)
        {
            if(input1[i] == rohit[j]){
                rohitCount++;
                break;
            }
        }
    }

    if(viratCount > rohitCount){
        cout<<"Virat";
    }else{
        cout<<"Rohit";
    }
}

int main()
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<char> virat;
    vector<char> rohit;
    int n;
    cout << "Enter n:";
    cin >> n;
    string input1;
    cout << "Enter string: ";
    cin >> input1;

    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            virat.push_back(vowels[i]);
        }
        for (int i = n; i < 5; i++)
        {
            rohit.push_back(vowels[i]);
        }
    
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            rohit.push_back(vowels[i]);
        }
        for (int i = n; i < 5; i++)
        {
            virat.push_back(vowels[i]);
        }
        
    }

    solve(virat, rohit, input1);
}