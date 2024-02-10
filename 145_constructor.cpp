#include<iostream>
using namespace std;

class Hero{
    int health;
    char level;
    public:
    Hero(){
        cout<<"Default Constructor Called!"<<endl;
    }

    //parameterized constructor

    Hero(int health,char level)
    {
        this->health = health;
        this->level = level;
    }

    void print(){
        cout<<"Health: "<<health<<endl;
        cout<<"Level: "<<level<<endl;
    }
};
int main()
{
// Ḍefault Constructor
    //static
    Hero h1;

    //dynamic
    Hero *h2 = new Hero;

// Parameterised Constructor
    //static
    Hero h11(132,'a');
    // h11.print();
    //dynamic
    Hero *h22 = new Hero(121,'g');
    // h22->print();

//Copy Constructor

    Hero A(111,'A');
    A.print();
    cout<<endl;

    Hero B = A;
    B.print();

}