#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;
    string name,id;
    char grade, gender;
    int age;
    vector<string>ans;
    float out = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>name>>id >>grade>>age>>gender;

        if(age >= 20){
            ans.push_back(name);
            out+= ((grade - 'A' + 1));
            count++;
        }
    }
    int ave = floor(out/count);
    cout<<ave;
    
}