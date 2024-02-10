#include <iostream>
using namespace std;

class Hero
{
    public:
    Hero(){
        cout<<"Default Constructor Called !!!"<<endl;
    }
    ~Hero(){

        cout<<"Destructor Called !!!"<<endl;
    }
};
int main()
{

    //Static
    Hero h1;
    //destructor is invoked automatically for static but not for dynamic
    //Dynamic
    Hero *h2 = new Hero;
    delete h2;


}