#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    char delimeter = '|';

    string input = "Tanish|Gupta";
    istringstream stream(input);
    string token;

    while (getline(stream,token,delimeter)){
        cout<<token<<" ";
    }
   
}