#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0;name[i] != '\0';i++){
        count++;
    }

    return count;
}
int main()
{
    char name[15];
    cout<<"Enter your name : ";
    cin>>name;
    // name[3] = '\0';  //to terminate at index 3

    cout<<"Length of char array is: "<<getLength(name);
    
}