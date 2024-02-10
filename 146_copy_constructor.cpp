#include<iostream>
using namespace std;


class Hero{
    int health;
    public:

    char *name;

    void setname(char name[]){
        this->name = name;
    }

    void print(){
        cout<<name<<endl;
    }
};
int main()
{
    Hero h1;
    char name[7] = "Tanish";
    h1.setname(name);
    h1.print();

    Hero h2 = h1;
    h2.print();

    h1.name[0] = 'A';//Shallow copy-> as it stores the address and make changes at the memory address present in it;
    h1.print();

    h2.print();

    //in case of deep copy we create an entire new array and make changes directly to it
    
}