#include<iostream>
using namespace std;

class Hero{
    public:
    static int time; // static keyword


    // static functions

    static int random(){
        return time;
    }
};

int Hero::time = 5;

int main()
{
    cout<<Hero::time << endl; //static member
    cout<<Hero::random(); //static function
}