#include <iostream>
// #include"Hero.cpp" // For another file
using namespace std;

class Hero
{
    int health = 4;
    char Level = 'A';

public:
    // getter
    int getHealth()
    {
        return health;
    }
    // setter
    void setHealth(int h)
    {
        health = h;
    }
};
int main()
{
    Hero h1;
    h1.setHealth(70);
    cout << h1.getHealth() << endl;

    cout << "Size: " << sizeof(h1) << endl;

    // static allocation
    Hero a;
    a.setHealth(45);
    cout<<a.getHealth()<<endl;
    // cout<<"Level"<<a.Level<<endl;

    // Dynamic allocation

    Hero *b = new Hero;
    (*b).setHealth(68);
    cout << "Level is "<<(*b).getHealth()<<endl;  

    //or
    
    b->setHealth(32);
    cout << "Level is "<<b->getHealth()<<endl;  
}